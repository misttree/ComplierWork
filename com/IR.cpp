#include <iostream>
#include <string>
#include <fstream>
#include "Node.h"
#include <list>
#include "innercode.h"
using namespace std;

int seq = 0;
int tnum = 1;
string label1 = "0";
string label2 = "0";
string label3 = "0";
string call_func = "";
int number=0;
int count1=0;
int if_else=0;
bool if_over=false;
bool while_over=true;
bool for_true=false;
bool for_over=true;
bool for_func=true;
Innercode innercode;
class IR
{

  public:
    string id;
    string op;
    string arg1;
    string arg2;
    string result;
    IR(string id, string op, string arg1, string arg2, string result)
    {
        this->id = id;
        this->op = op;
        this->arg1 = arg1;
        this->arg2 = arg2;
        this->result = result;
    }
};

list<IR> l;

void dfs(Node *n)
{
    if (n->countOfChildren == 0)
    {
        return;
    }

    for (list<Node *>::iterator it = n->children.begin(); it != n->children.end(); it++)
    {
        Node *child = *it;
        if ((child->name == "assignment_expression") && (for_true == false))
        {

            string result_class = child->children.front()->name;
            if (result_class == "array")
            {
                //如果是数组的赋值语句
                //目前不知道数组的基地址，用数组名代替
                Node *this_array = child->children.front(); //赋值语句左侧
                Node *next_array = child->children.back();  //赋值语句右侧，可能是个值可能是个式子
                string base_address = this_array->detail;   //基地址
                if (next_array->countOfChildren == 1)
                {
                    //如果右侧只有一个元素,目前只考虑右边不是数组的情况
                    string factor_offset = this_array->children.back()->children.front()->detail; //索引乘以4就是地址相对基地址的偏移量，只考虑int型
                    l.push_back(*(new IR(to_string(seq++), "*", factor_offset, to_string(4), "t" + to_string(tnum))));
                    l.push_back(*(new IR(to_string(seq++), "[]=", next_array->children.front()->detail, "NULL", this_array->detail + "[t" + to_string(tnum++) + "]")));
                }
                else
                {
                    //如果右侧是一个式子，目前只考虑右边不是数组的情况
                    string t_arg1 = next_array->children.front()->children.front()->detail;
                    string t_arg2 = next_array->children.back()->children.front()->detail;
                    string t_op = next_array->detail;

                    int t_tnum = tnum;
                    l.push_back(*(new IR(to_string(seq++), t_op, t_arg1, t_arg2, "t" + to_string(tnum++))));
                    string factor_offset = this_array->children.back()->children.front()->detail; //索引乘以4就是地址相对基地址的偏移量，只考虑int型
                    l.push_back(*(new IR(to_string(seq++), "*", factor_offset, to_string(4), "t" + to_string(tnum))));
                    l.push_back(*(new IR(to_string(seq++), "[]=", "t" + to_string(t_tnum), "NULL", this_array->detail + "[t" + to_string(tnum++) + "]")));
                }
            }
            else if(child->children.back()->name=="call_func")
            {

                string arg1 = child->children.front()->detail;
                Node *son2 ;
                son2 = child->children.back();
                string s = son2->children.front()->detail;
                call_func = "Call("+s+")";
                if(son2->children.back()->name!="ID")
                {
                    string arg2 = son2->children.back()->children.back()->children.back()->detail;
                    l.push_back(*(new IR("ARG",arg2,"","","")));
                }
                
                l.push_back(*(new IR("=",call_func,"","",arg1)));
                
                continue ;
            }
            else
            {
                //普通的赋值语句
                string result = child->children.front()->detail;
                Node *factors = child->children.back();
                if (factors->countOfChildren == 1)
                {
                    l.push_back(*(new IR(to_string(seq++), "=", factors->children.front()->detail, "NULL", result)));
                }
                else if (factors->countOfChildren == 2)
                {
                    l.push_back(*(new IR(to_string(seq++), factors->detail, factors->children.front()->children.front()->detail, factors->children.back()->children.front()->detail, "t" + to_string(tnum))));
                    l.push_back(*(new IR(to_string(seq++), "=", "t" + to_string(tnum++), "NULL", result)));
                }

                if (if_else == true)
                {

                    l.push_back(*(new IR("Label", label2, "", "", "")));
                    if_else = false;
                }
            }
            if (number == 3)
            {
                
                if(count1==(if_else-1))
                {
                    l.push_back(*(new IR("GOTO", label3, "", "", "")));
                    l.push_back(*(new IR("Label", label2, "", "", "")));
                }
                count1++;
            }
        }

        if (child->name == "init_array_or_point_assignment" && (for_true == false))
        {
            //这是数组初始化的四元式生成
            Node *fst_array = child->children.front(); //语句左侧
            Node *snd_array = child->children.back();  //语句右侧
            string t_name = fst_array->children.front()->detail;
            Node *init_array = snd_array->children.front();
            int t_i = 0;
            for (list<Node *>::iterator s = init_array->children.begin(); s != init_array->children.end(); s++)
            {
                string num = (*s)->detail;
                l.push_back(*(new IR(to_string(seq++), "*", to_string(t_i), to_string(4), "t" + to_string(tnum))));
                l.push_back(*(new IR(to_string(seq++), "[]=", num, "NULL", t_name + "[t" + to_string(tnum++) + "]")));
                t_i++;
            }
        }

        if (child->name == "while_stmt")
        {
            string arg1 = "";
            string arg2 = "";
            Node* temp;
            int count1 = 0;
            Node* while_exp = child->children.front();
            list<Node*>::iterator s;
            for (list<Node*>::iterator s=child->children.begin(); s!= child->children.end(); s++)
            {
                Node *c = *s;
                if (c->name == "simple_expression")
                {
                    //expression
                    Node *factor = c->children.front();
                    if (factor->countOfChildren == 1)
                    {
                        arg1 = factor->children.front()->detail;
                    }
                    list<Node *>::iterator ch;
                    for (ch = c->children.begin(); ch != c->children.end(); ch++)
                    {
                        if(count1==2)
                        {
                            break;
                        }
                        count1++;
                        temp = *ch;
                    }
                    string op = temp->detail;

                    Node *factor2 = c->children.back();
                    if (factor2->countOfChildren == 1)
                    {
                        arg2 = factor2->children.front()->detail;
                    }

                    label1 = innercode.getLabelName();
                    label2 = innercode.getLabelName();
                    label3 = innercode.getLabelName();

                    l.push_back(*(new IR("Label", label1, "", "", "")));
                    l.push_back(*(new IR(to_string(seq++), op, arg1, arg2, "GOTO " + label2)));
                    l.push_back(*(new IR("GOTO", label3, "", "", "")));
                    l.push_back(*(new IR("Label", label2, "", "", "")));
                }
            }
        }

        if (child->name == "for_condition")
        {
            string arg1 = "";
            string arg2 = "";
            int co = 0;
            Node *temp;
            list<Node *>::iterator inner;
            for (list<Node *>::iterator inner = child->children.begin(); inner != child->children.end(); inner++)
            {
                Node *cinner = *inner;
                if (cinner->name == "assignment_expression")
                {
                    for_true = true;
                    string result = cinner->children.front()->detail;
                    Node *factors2 = cinner->children.back();

                    if (factors2->countOfChildren == 1)
                    {
                        l.push_back(*(new IR(to_string(seq++), "=", factors2->children.front()->detail, "NULL", result)));
                    }
                    else if (factors2->countOfChildren == 2)
                    {

                        l.push_back(*(new IR(to_string(seq++), factors2->detail, factors2->children.front()->children.front()->detail, factors2->children.back()->children.front()->detail, "t" + to_string(tnum))));
                        l.push_back(*(new IR(to_string(seq++), "=", "t" + to_string(tnum++), "NULL", result)));
                    }
                }

                if (cinner->name == "simple_expression")
                {
                    //expression
                    Node *factor = cinner->children.front();
                    if (factor->countOfChildren == 1)
                    {
                        arg1 = factor->children.front()->detail;
                    }
                    list<Node *>::iterator ch;
                    for (ch = cinner->children.begin(); ch != cinner->children.end(); ch++)
                    {
                        if (co == 2)
                        {
                            break;
                        }
                        co++;
                        temp = *ch;
                    }
                    string op = temp->detail;

                    Node *factor2 = cinner->children.back();
                    if (factor2->countOfChildren == 1)
                    {
                        arg2 = factor2->children.front()->detail;
                    }

                    label1 = innercode.getLabelName();
                    label2 = innercode.getLabelName();
                    label3 = innercode.getLabelName();

                    l.push_back(*(new IR("Label", label1, "", "", "")));
                    l.push_back(*(new IR(to_string(seq++), op, arg1, arg2, "GOTO " + label2)));
                    l.push_back(*(new IR("GOTO", label3, "", "", "")));
                    l.push_back(*(new IR("Label", label2, "", "", "")));
                }

                if (cinner->name == "postfix_expression")
                {
                    string op = cinner->detail;
                    if (op == "++")
                    {
                        op = "+";
                    }
                    else
                    {
                        op = "-";
                    }
                    string arg1 = cinner->children.front()->detail;
                    l.push_back(*(new IR(to_string(seq++), op, arg1, "1", arg1)));
                }
            }
        }

        if (child->name == "for_body")
        {
            for_true = false;
            for_over = true;
        }

        if (child->name == "if_stmt")
        {
            string arg1 = "";
            string arg2 = "";
            Node *temp;
            Node *temp2;
            int count2 = 0;
            Node *son = child->children.front();
            list<Node *>::iterator next_statement;

            int son_num = 0;
            for (next_statement = child->children.begin(); next_statement != child->children.end(); next_statement++)
            {
                son_num++;
                temp2 = *next_statement;
            }

            list<Node *>::iterator s;

            if (child->countOfChildren == 2) //没有else的情况
            {
                for (list<Node *>::iterator s = child->children.begin(); s != child->children.end(); s++)
                {
                    Node *c = *s;

                    if (c->name == "simple_expression")
                    {
                        Node *factor = c->children.front();
                        if (factor->countOfChildren == 1)
                        {
                            arg1 = factor->children.front()->detail;
                        }

                        list<Node *>::iterator ch;
                        for (ch = c->children.begin(); ch != c->children.end(); ch++)
                        {
                            if(count1==2)
                            {
                                break;
                            }
                            count1++;
                            temp = *ch;
                        }

                        string op = temp->detail;
                        Node *factor2 = c->children.back();
                        if (factor2->countOfChildren == 1)
                        {
                            arg2 = factor2->children.front()->detail;
                        }
                        label1 = innercode.getLabelName();
                        label2 = innercode.getLabelName();

                        l.push_back(*(new IR(to_string(seq++), op, arg1, arg2, "GOTO " + label1)));
                        l.push_back(*(new IR("GOTO", label2, "", "", "")));
                        l.push_back(*(new IR("Label", label1, "", "", "")));
                    }
                }
            }

            else //有else的情况
            {

                for (list<Node *>::iterator s = child->children.begin(); s != child->children.end(); s++)
                {
                    number++;
                    Node *c = *s;

                    if (c->name == "simple_expression")
                    {
                        Node *factor = c->children.front();
                        if (factor->countOfChildren == 1)
                        {
                            arg1 = factor->children.front()->detail;
                        }

                        list<Node *>::iterator ch;
                        for (ch = c->children.begin(); ch != c->children.end(); ch++)
                        {
                            if (count2 == 2)
                            {
                                break;
                            }
                            count2++;
                            temp = *ch;
                        }

                        string op = temp->detail;
                        Node *factor2 = c->children.back();
                        if (factor2->countOfChildren == 1)
                        {
                            arg2 = factor2->children.front()->detail;
                        }
                        label1 = innercode.getLabelName();
                        label2 = innercode.getLabelName();
                        label3 = innercode.getLabelName();
                        l.push_back(*(new IR(to_string(seq++), op, arg1, arg2, "GOTO " + label1)));
                        l.push_back(*(new IR("GOTO", label2, "", "", "")));
                        //if(child->countOfChildren==2)
                        l.push_back(*(new IR("Label", label1, "", "", "")));
                    }
                    if (number == 2)
                    {
                        if_else = c->countOfChildren;
                    }
                }
            }
        }


        if(child->name=="fun_declaration")
        {
            int many = 0;
            list<Node*>::iterator ch;
            Node* s;
            for(ch= child->children.begin();ch!= child->children.end(); ch++ )
            {
                if(many==2)
                {
                    break;
                }
                many++;
                s = *ch;
            }

            string func_name = s->detail;
            l.push_back(*(new IR("Funtion",func_name,"","","")));

            many = 0;
            for(ch= child->children.begin();ch!= child->children.end(); ch++ )
            {
                if(many==3)
                {
                    break;
                }
                many++;
                s = *ch;
            }

            string parameter = "";
            if(s->countOfChildren!=0)
            {
                parameter = s->children.front()->children.back()->children.back()->children.back()->detail;
                l.push_back(*(new IR("PARAM",parameter,"","","")));
            }

            s = child->children.back();

        
        }

        

        if(child->name=="call_func")
        {
            if(child->children.back()->name!="ID")
            {
                string arg2 = child->children.back()->children.back()->children.back()->detail;
                l.push_back(*(new IR("ARG",arg2,"","","")));
            }
            
            string s = child->children.front()->detail; 
            l.push_back(*(new IR("Call",s,"","","")));
            call_func = "Call"+s;
            
        }
        

        if(child->name=="return_stmt")
        {
            string return_elem = child->children.front()->children.front()->detail;
            l.push_back(*(new IR("Return",return_elem,"","","")));
        }

        dfs(child);
        if (child->name == "if_stmt")
        {
            //label2 = innercode.getLabelName();
            if (child->countOfChildren == 2)
            {
                l.push_back(*(new IR("Label", label2, "", "", "")));
            }
            else
            {

                l.push_back(*(new IR("Label", label3, "", "", "")));
            }
        }

        if (child->name == "while_stmt")
        {
            l.push_back(*(new IR("GOTO", label1, "", "", "")));
            l.push_back(*(new IR("Label", label3, "", "", "")));
        }

        if (child->name == "for_stmt")
        {
            l.push_back(*(new IR("GOTO", label1, "", "", "")));
            l.push_back(*(new IR("Label", label3, "", "", "")));
        }
    }
}

void IRCode(Node *uroot)
{
    ofstream outfile;
    outfile.open("Four_dollar.txt");
    outfile << "************************************" << endl;
    outfile << "四元式" << endl;
    outfile << setw(10) << "seq" << '\t' << setw(10) << "op" << '\t' << setw(10) << "arg1" << '\t' << setw(10) << "arg2" << '\t' << setw(10) << "result" << endl;
    dfs(uroot);
    for (list<IR>::iterator it = l.begin(); it != l.end(); it++)
    {
        outfile << setw(10) << it->id << '\t' << setw(10) << it->op << '\t' << setw(10) << it->arg1 << '\t' << setw(10) << it->arg2 << '\t' << setw(10) << it->result << endl;
    }
    outfile.close();
}

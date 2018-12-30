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
int number=0;
int count=0;
int if_else=0;
bool if_over=false;
bool while_over=true;
bool for_true=false;
bool for_over=true;
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
        if((child->name=="assignment_expression")&&(for_true==false))
        {
            string result_class = child->children.front()->name;
            if (result_class == "array")
            {
                Node *this_array = child->children.front();
                string index = this_array->children.back()->children.front()->detail;
                //如果是赋值语句的左值是数组的话
                l.push_back(*new IR(to_string(seq++), "[]=", this_array->detail, index, "t" + to_string(tnum)));
                Node *next_array = child->children.back();
                l.push_back(*new IR(to_string(seq++), "=", next_array->children.front()->detail, "NULL", "t" + to_string(tnum++)));
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
             if(number==3)
            {
                
                if(count==(if_else-1))
                {
                    l.push_back(*(new IR("GOTO",label3,"","","")));
                    l.push_back(*(new IR("Label",label2,"","","")));
                }
                count++;
            }

        }

           if(child->name=="while_stmt")
        {
            string arg1 = "";
            string arg2 = "";
            Node* temp;
            int count = 0;
            Node* while_exp = child->children.front();
            list<Node*>::iterator s;
            for (list<Node*>::iterator s=child->children.begin(); s!= child->children.end(); s++)
            {
                Node* c = *s;
                if(c->name=="simple_expression")
                {
                    //expression
                    Node* factor = c->children.front();
                    if(factor->countOfChildren==1)
                    {
                        arg1= factor->children.front()->detail;
                    }
                    list<Node*>::iterator ch;
                    for(ch= c->children.begin();ch!= c->children.end(); ch++ )
                    {
                        if(count==2)
                        {
                            break;
                        }
                        count++;
                        temp = *ch;
                    }
                    string op = temp->detail;
                    
                    Node* factor2 = c->children.back();
                    if(factor2->countOfChildren==1)
                    {
                        arg2= factor2->children.front()->detail;
                    }
                    
                    label1=innercode.getLabelName();
                    label2=innercode.getLabelName();
                    label3=innercode.getLabelName();
                    
                    l.push_back(*(new IR("Label",label1,"","","")));
                    l.push_back(*(new IR(to_string(seq++),op,arg1,arg2,"GOTO "+label2)));
                    l.push_back(*(new IR("GOTO",label3,"","","")));
                    l.push_back(*(new IR("Label",label2,"","","")));
                }
                
            }
        }
        
        if(child->name=="for_condition")
        {
            string arg1 = "";
            string arg2 = "";
            int co = 0;
            Node* temp;
            list<Node*>::iterator inner;
            for (list<Node*>::iterator inner=child->children.begin(); inner!= child->children.end(); inner++)
            {
                Node* cinner=*inner;
                if(cinner->name=="assignment_expression")
                {
                    for_true=true;
                    string result=cinner->children.front()->detail;
                    Node* factors2=cinner->children.back();
                    
                    if(factors2->countOfChildren==1){
                        l.push_back(*(new IR(to_string(seq++),"=",factors2->children.front()->detail,"NULL",result)));
                    }
                    else if(factors2->countOfChildren==2){
                        
                        l.push_back(*(new IR(to_string(seq++),factors2->detail,factors2->children.front()->children.front()->detail,factors2->children.back()->children.front()->detail,"t"+to_string(tnum))));
                        l.push_back(*(new IR(to_string(seq++),"=","t"+to_string(tnum++),"NULL",result)));
                    }
                
                }

                if(cinner->name=="simple_expression")
                {
                    //expression
                    Node* factor = cinner->children.front();
                    if(factor->countOfChildren==1)
                    {
                        arg1= factor->children.front()->detail;
                    }
                    list<Node*>::iterator ch;
                    for(ch= cinner->children.begin();ch!= cinner->children.end(); ch++ )
                    {
                        if(co==2)
                        {
                            break;
                        }
                        co++;
                        temp = *ch;
                    }
                    string op = temp->detail;
                    
                    Node* factor2 = cinner->children.back();
                    if(factor2->countOfChildren==1)
                    {
                        arg2= factor2->children.front()->detail;
                    }
                    
                    label1=innercode.getLabelName();
                    label2=innercode.getLabelName();
                    label3=innercode.getLabelName();
                    
                    l.push_back(*(new IR("Label",label1,"","","")));
                    l.push_back(*(new IR(to_string(seq++),op,arg1,arg2,"GOTO "+label2)));
                    l.push_back(*(new IR("GOTO",label3,"","","")));
                    l.push_back(*(new IR("Label",label2,"","","")));
                    
                }

                if(cinner->name=="postfix_expression")
                {
                    string op = cinner->detail;
                    if(op=="++")
                    {
                        op="+";
                    }
                    else
                    {
                        op="-";
                    }
                    string arg1 = cinner->children.front()->detail;
                    l.push_back(*(new IR(to_string(seq++),op,arg1,"1",arg1)));
                }
            
            
            }
            
            
        }

        if(child->name=="for_body")
        {
            for_true=false;
            for_over=true;
        }
        

    

        if(child->name=="if_stmt")
        {
            string arg1 = "";
            string arg2 = "";
            Node* temp;
            Node* temp2;
            int count2 = 0;
            Node* son = child->children.front();
            list<Node*>::iterator next_statement;
            
            int son_num=0;
            for(next_statement= child->children.begin();next_statement!= child->children.end(); next_statement++ )
            {
                son_num++;
                temp2 = *next_statement;
            }
            
            list<Node*>::iterator s;
            
            
            if(child->countOfChildren==2) //没有else的情况
            {
                for (list<Node*>::iterator s=child->children.begin(); s!= child->children.end(); s++)
                {
                    Node* c=*s;
                    
                    if(c->name=="simple_expression")
                    {
                        Node* factor = c->children.front();
                        if(factor->countOfChildren==1)
                        {
                            arg1 = factor->children.front()->detail;
                        }
                        
                        list<Node*>::iterator ch;
                        for(ch= c->children.begin();ch!= c->children.end(); ch++ )
                        {
                            if (count == 2)
                            {
                                break;
                            }
                            count++;
                            temp = *ch;
                        }

                        string op = temp->detail;
                        Node *factor2 = c->children.back();
                        if (factor2->countOfChildren == 1)
                        {
                            arg2 = factor2->children.front()->detail;
                        }
                        label1=innercode.getLabelName();
                        label2=innercode.getLabelName();
                        
                        l.push_back(*(new IR(to_string(seq++),op,arg1,arg2,"GOTO "+label1)));
                        l.push_back(*(new IR("GOTO",label2,"","","")));
                        l.push_back(*(new IR("Label",label1,"","","")));
                       
                    }
                    
                }
                
                
            }
            
            
            else //有else的情况
            { 
            
                for (list<Node*>::iterator s=child->children.begin(); s!= child->children.end(); s++)
                {
                    number++;
                    Node* c=*s;
                    
                    if(c->name=="simple_expression")
                    {
                        Node* factor = c->children.front();
                        if(factor->countOfChildren==1)
                        {
                            arg1 = factor->children.front()->detail;
                        }
                        
                        list<Node*>::iterator ch;
                        for(ch= c->children.begin();ch!= c->children.end(); ch++ )
                        {
                            if(count2==2)
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
                        label1=innercode.getLabelName();
                        label2=innercode.getLabelName();
                        label3=innercode.getLabelName();
                        l.push_back(*(new IR(to_string(seq++),op,arg1,arg2,"GOTO "+label1)));
                        l.push_back(*(new IR("GOTO",label2,"","","")));
                        //if(child->countOfChildren==2)
                        l.push_back(*(new IR("Label",label1,"","","")));
                        
                         
                    }
                    if(number == 2)
                    {
                       if_else = c->countOfChildren;
                    }
                
                    
                    
                }
                
           
            }
            
            
        
        }
        dfs(child);
        if(child->name=="if_stmt")
        {
            //label2 = innercode.getLabelName();
            if(child->countOfChildren==2)
            {
                l.push_back(*(new IR("Label",label2,"","","")));
                
            }
            else
            {
                
                l.push_back(*(new IR("Label",label3,"","","")));

            }
        }


        
        if(child->name=="while_stmt")
        {
            l.push_back(*(new IR("GOTO",label1,"","","")));
            l.push_back(*(new IR("Label",label3,"","","")));
        }

        if(child->name=="for_stmt")
        {
            l.push_back(*(new IR("GOTO",label1,"","","")));
            l.push_back(*(new IR("Label",label3,"","","")));
        }
        
        
    }
}

void IRCode(Node *uroot)
{
    ofstream outfile;
    outfile.open("Four_dollar.txt");
    outfile << "************************************" << endl;
    outfile << "四元式" << endl;
    outfile << "seq" << '\t' << "op" << '\t' << "arg1" << '\t' << "arg2" << '\t' << "result" << endl;
    dfs(uroot);
    for (list<IR>::iterator it = l.begin(); it != l.end(); it++)
    {
        outfile << it->id << '\t' << it->op << '\t' << it->arg1 << '\t' << it->arg2 << '\t' << it->result << endl;
    }
    outfile.close();
}

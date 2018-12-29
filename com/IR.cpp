#include <iostream>
#include <string>
#include "Node.h"
#include <list>
#include"innercode.h"
using namespace std;

int seq = 0;
int tnum = 1;
string label1="0";    
string label2="0";
string label3="0";
bool if_else = false;
bool if_over=false;
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
        if (child->name == "assignment_expression")
        {
            string result_class = child->children.front()->name;
            if (result_class == "array")
            {
                Node* this_array = child->children.front();
                string index = this_array->children.back()->children.front()->detail;
                //如果是赋值语句的左值是数组的话
                l.push_back(*new IR(to_string(seq++),"[]=",this_array->detail,index,"t"+to_string(tnum)));
                Node* next_array = child->children.back();
                l.push_back(*new IR(to_string(seq++),"=",next_array->children.front()->detail,"NULL","t"+to_string(tnum++)));
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

		if(if_else==true)
                {
                   
                    l.push_back(*(new IR("Label",label2,"","","")));
                    if_else=false;
                }
            }
        }

	if(child->name=="if_stmt")
            {
                string arg1 = "";
                string arg2 = "";
                Node* temp;
                Node* temp2;
                int count = 0;
                Node* son = child->children.front();
                list<Node*>::iterator next_statement;

                int son_num=0;
                for(next_statement= child->children.begin();next_statement!= child->children.end(); next_statement++ )
                {
                    son_num++;
                    temp2 = *next_statement;
                }

                list<Node*>::iterator s;

                if(son_num==2) //没有else的情况
                {

                    int number=0;
                    for (list<Node*>::iterator s=child->children.begin(); s!= child->children.end(); s++) 
                    {
                        Node* c=*s;
                        number++;
                        
                       if(c->name=="simple_expression")
                       {
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
                        
                        l.push_back(*(new IR(to_string(seq++),op,arg1,arg2,"GOTO "+label1)));
                        l.push_back(*(new IR("GOTO",label2,"","","")));
                        l.push_back(*(new IR("Label",label1,"","","")));
                        if(number==1)
                        {
                            
                            if_over=true;
                            //l.push_back(*(new IR("Label~~",label2,"","","")));
                        }
                       }   
 
                    }
                    
                
                }
                

                if(son_num==3) //有else的情况
                {
                    int number=0;
                    for (list<Node*>::iterator s=child->children.begin(); s!= child->children.end(); s++) 
                    {
                        number++;
                        
                        Node* c=*s;
                        if(number==3)
                        {
                            
                            if_else=true;
                            if_over=true;
                            //l.push_back(*(new IR("Label",label2,"","","")));
                        }

                        if(c->name=="simple_expression")
                       {
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
                        
                        l.push_back(*(new IR(to_string(seq++),op,arg1,arg2,"GOTO "+label1)));
                        l.push_back(*(new IR("GOTO",label2,"","","")));
                        //if(child->countOfChildren==2)
                        l.push_back(*(new IR("Label",label1,"","","")));
                       }   
 
                    }
                    

                }
                

            }
	
        dfs(child);
	if(child->name=="if_stmt"&&child->countOfChildren==2)
            {
                //label2 = innercode.getLabelName();
                l.push_back(*(new IR("Label",label2,"","","")));
            }
    }
}

void IRCode(Node *uroot)
{
    cout << "************************************" << endl;
    cout << "四元式" << endl;
    cout << "seq" << '\t' << "op" << '\t' << "arg1" << '\t' << "arg2" << '\t' << "result" << endl;
    dfs(uroot);
    for (list<IR>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << it->id << '\t' << it->op << '\t' << it->arg1 << '\t' << it->arg2 << '\t' << it->result << endl;
    }
}
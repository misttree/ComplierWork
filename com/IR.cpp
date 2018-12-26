#include <iostream>
#include <string>
#include "Node.h"
#include <list>
using namespace std;

int seq = 0;
int tnum = 1;
class IR
{

  public:
    int id;
    string op;
    string arg1;
    string arg2;
    string result;
    IR(int id, string op, string arg1, string arg2, string result)
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
                l.push_back(*new IR(seq++,"[]=",this_array->detail,index,"t"+to_string(tnum)));
                Node* next_array = child->children.back();
                l.push_back(*new IR(seq++,"=",next_array->children.front()->detail,"NULL","t"+to_string(tnum++)));
            }
            else
            {
                //普通的赋值语句
                string result = child->children.front()->detail;
                Node *factors = child->children.back();
                if (factors->countOfChildren == 1)
                {
                    l.push_back(*(new IR(seq++, "=", factors->children.front()->detail, "NULL", result)));
                }
                else if (factors->countOfChildren == 2)
                {
                    l.push_back(*(new IR(seq++, factors->detail, factors->children.front()->children.front()->detail, factors->children.back()->children.front()->detail, "t" + to_string(tnum))));
                    l.push_back(*(new IR(seq++, "=", "t" + to_string(tnum++), "NULL", result)));
                }
            }
        }
        dfs(child);
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
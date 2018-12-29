#ifndef _INNERCODE_H_
#define _INNERCODE_H_
# include<iostream>
#include<string>
#include<vector>
#include"Node.h"
using namespace std;

class Innercode
{
    private:
        vector<string> codeList;

    public:
        int tempNum = 0;
	    int varNum = 0;
	    int labelNum = 0;
	    int arrayNum = 0;

        Innercode();
        void addCode(string);
	    void printCode();
        string createCodeforVar(string tempname, string op, Node node1, Node node2);
	    string createCodeforAssign(Node node1,Node node2);
	    string createCodeforParameter(Node node);
	    string createCodeforReturn(Node node);
	    string createCodeforArgument(Node node);

        string getNodeName(Node node);
	    string getarrayNodeName(Node node);
	    string getLabelName();
};

#endif // !_INNERCODE_H_
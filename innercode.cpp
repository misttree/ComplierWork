# include<iostream>
#include<string>
#include<vector>
#include"Node.h"
#include"innercode.h"
using namespace std;

Innercode::Innercode()
{

}

void Innercode::addCode(string str) {
	codeList.push_back(str);
}

string Innercode::getLabelName() 
{
	
    int n=this->labelNum++;
    char buf[10];
	sprintf(buf, "%d", n);
	string b = buf;
    return "label" + b;
    
}


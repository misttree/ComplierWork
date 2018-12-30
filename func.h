#ifndef _BLOCK_H_
#define _BLOCK_H_

#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;


struct varNode {
	string name;
	string type;
	int num = -1;
	bool useAddress = false;
	string boolString;
};

struct funcNode {
	bool isdefinied = false;
	string name;				//函数名
	string rtype;				//函数返回类型
	vector<varNode> paralist;	//记录形参列表
};

class Block{
    public:
        funcNode func;
        bool isFunc = false;
        map<string, struct varNode> varMap;
        string breakLabelname;
	    bool canBreak = false;
};

#endif // !_BLOCK_H_
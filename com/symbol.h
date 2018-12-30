#include<iostream>
#include<vector>

using namespace std;
class symbolNode
{
    private:
        string message;
        string nodeName;  // 节点的名字
        string nodeType;  // 节点的类型
        string nodeAttribute; // 节点的属性
        int nodelength;  // 节点的长度，在创建数组的时候使用
    public:
        vector<symbolNode*> children;
        symbolNode * parentNode;

        symbolNode ();
        symbolNode (string nodeName);
        symbolNode (string nodeName, string nodeType);
        symbolNode (string nodeName, string nodeType, string nodeAttribute);
        symbolNode (string nodeName, string nodeType, string nodeAttribute, string message);

        string getMessage();
        string getNodeName();
        string getNodeType();
        string getNodeAttribute();
        int getNodeLength();

        void setMessage(string message);
        void setNodeName(string nodeName);
        void setNodeType(string nodeType);
        void setNodeAttribute(string nodeAttribute);
        void setNodeLength(int length);
        symbolNode* giveChildren(string nodeName);
        symbolNode* giveChildren(string nodeName, string nodeType);
        symbolNode* giveChildren(string nodeName, string nodeType, string nodeAttribute);
};

class symbolTable{
    public:
        symbolNode * now;
        symbolNode * root;
        int statementNumber;  // To record the state of node
        
        symbolTable();
        symbolNode* findNode(symbolNode * node, string nodeName);
        void showTable(symbolNode * node, vector<string>);
        void down();
        void up();
        void insertNode(symbolNode * node);
};
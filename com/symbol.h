#include<iostream>
#include<vector>

using namespace std;
class symbolNode
{
    private:
        string message;
        string nodeName;
        string nodeType;
        string nodeAttribute;
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

        void setMessage(string message);
        void setNodeName(string nodeName);
        void setNodeType(string nodeType);
        void setNodeAttribute(string nodeAttribute);

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
#include<iostream>
#include "symbol.h"
using namespace std;

symbolNode::symbolNode()
{
    this->message = "";
    this->nodeName = "";
    this->nodeType = "";
    this->nodeAttribute = "";
    this->nodelength = 0;
    this->parentNode = NULL;
}

symbolNode::symbolNode (string nodeName){
    this->nodeName = nodeName;
    this->nodeType = "";
    this->nodeAttribute = "";
    this->message = "";
    this->nodelength = 0;
    this->parentNode = NULL;
}

symbolNode::symbolNode (string nodeName, string nodeType){
    this->nodeName = nodeName;
    this->nodeType = nodeType;
    this->nodelength = 0;
    this->parentNode = NULL;
}

symbolNode::symbolNode (string nodeName, string nodeType, string nodeAttribute){
    this->nodeName = nodeName;
    this->nodeType = nodeType;
    this->nodeAttribute = nodeAttribute;
    this->nodelength = 0;
    this->parentNode = NULL;
}

symbolNode::symbolNode (string nodeName, string nodeType, string nodeAttribute, string message){
    this->nodeName = nodeName;
    this->nodeType = nodeType;
    this->nodeAttribute = nodeAttribute;
    this->message = message;
    this->nodelength = 0;
    this->parentNode = NULL;
}

string symbolNode::getMessage()
{
    return this->message;
}

string symbolNode::getNodeAttribute()
{
    return this->nodeAttribute;
}

string symbolNode::getNodeName()
{
    return this->nodeName;
}

string symbolNode::getNodeType()
{
    return this->nodeType;
}

int symbolNode::getNodeLength()
{
    return this->nodelength;
}

void symbolNode::setMessage(string message)
{
    this->message = message;
}
void symbolNode::setNodeName(string nodeName)
{
    this->nodeName = nodeName;
}
void symbolNode::setNodeType(string nodeType)
{
    this->nodeType = nodeType;
}

void symbolNode::setNodeAttribute(string nodeAttribute)
{
    this->nodeAttribute = nodeAttribute;
}

void symbolNode::setNodeLength(int nodelength)
{
    this->nodelength = nodelength;
}

symbolNode* symbolNode::giveChildren(string nodeName)
{
    symbolNode *pnew = new symbolNode(nodeName);
    this->children.push_back(pnew);
    return pnew;
}

symbolNode* symbolNode::giveChildren(string nodeName, string nodeType)
{
    symbolNode *pnew = new symbolNode(nodeName, nodeType);
    this->children.push_back(pnew);
    return pnew;
}

symbolNode* symbolNode::giveChildren(string nodeName, string nodeType, string nodeAttribute)
{
    symbolNode *pnew = new symbolNode(nodeName, nodeType, nodeAttribute);
    this->children.push_back(pnew);
    return pnew;
}

symbolTable::symbolTable()
{
    this->root = new symbolNode("root");
    this->now = root;
    this->statementNumber = 0;
}

void symbolTable::insertNode(symbolNode * node)
{
    node->parentNode = this->now;
    this->now->children.push_back(node);
}

void symbolTable::down()
{
    // Down to the next level
    this->now = this->now->children.at(this->now->children.size() - 1);
}

void symbolTable::up()
{
    if(this->now->parentNode == NULL)
        cout<<"System Error: Undefined Parent"<<endl;
    else
        this->now = this->now->parentNode;
}
void symbolTable::showTable(symbolNode * node, vector<string> strformat)
{

    cout << node->getNodeName() << "  " << node->getNodeType() << "  " << node->getNodeAttribute() << "  " << node->getNodeLength() << endl;

    for(int a = 0; a < node->children.size(); a++)
    {
        for(int i = 0; i< strformat.size();i++)
        {
            cout<<strformat.at(i);
        }
        if(a == node->children.size() - 1)
        {
            cout << "└─ ";
            strformat.push_back("   ");
            this->showTable(node->children.at(a), strformat);
            strformat.pop_back();
        }
        else{
            cout << "├─ ";
            strformat.push_back("│  ");
            this->showTable(node->children.at(a), strformat);
            strformat.pop_back();
        }
        
    }
}

symbolNode* symbolTable::findNode(symbolNode * node, string nodeName)
{
    symbolNode* findResult = NULL;
    for(int a = 0; a< node->children.size() ; a++)
    {   
        if(node->children.at(a)->getNodeName() == nodeName)
        {
            findResult = node->children.at(a);
            return findResult;
        }   
    }
    if(node->parentNode != NULL)
        findResult = findNode(node->parentNode, nodeName);
    return findResult;
}

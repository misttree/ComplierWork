#ifndef FORHOMEWORK_NODE_H
#define FORHOMEWORK_NODE_H

#include <list>
#include <string>
#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include "symbol.h"
using namespace std;

extern map<string, int> typeEquivalenceClass;

class Node {

private:
public:
    int identifier;
    string name;
    string detail;
    list<Node*> children;
    int countOfChildren;
    symbolNode * value;
public:
    Node(int index, const string name, const string detail);

    Node(string name);

    Node(string name, symbolNode * value);

    int getIdentifier();

    string getName();

    string getDetail();
    
    symbolNode * getValue();

    void setValue(symbolNode * value);

    void addChild(Node* child);
    
    void addChildren(Node* newChildren[], int length);

    void addChildren(vector<Node*> newChildren);

    void addChildren(list<Node*> newChildren);

    void outputNode();

    void addAttribute();

    void generateTypeInExpression();

    void generateTypeInFactor();

    void checkType();
};

#endif //FORHOMEWORK_NODE_H

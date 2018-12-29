#ifndef FORHOMEWORK_NODE_H
#define FORHOMEWORK_NODE_H

#include <list>
#include <string>
#include <iostream>
#include <vector>
#include "symbol.h"
using namespace std;

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
    

    void addChild(Node* child);
    
    void addChildren(Node* newChildren[], int length);

    void addChildren(vector<Node*> newChildren);

    void addChildren(list<Node*> newChildren);

    void outputNode();
};

#endif //FORHOMEWORK_NODE_H

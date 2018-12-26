//
// Created by Bay on 2018/11/29.
//

#include "Node.h"

Node::Node(int index, const string name, const string detail) {
    this->identifier = index;
    this->name = name;
    this->detail = detail;
    countOfChildren = 0;
}

Node::Node(string name) {
    this->identifier = -1;
    this->name = name;
    this->detail = name;
    countOfChildren = 0;
}

Node::Node(string name, symbolNode * value) {
    this->identifier = -1;
    this->name = name;
    this->detail = name;
    this->value = value;
    countOfChildren = 0;
}

void Node::setValue(symbolNode * value) {
    this->value = value;
}

void Node::addChild(Node* child) {
    this->children.push_back(child);
    this->countOfChildren += 1;
}

void Node::addChildren(Node* newChildren[], int length) {
    for (int i = 0; i < length; ++i) {
        this->children.push_back(newChildren[i]);
        this->countOfChildren++;
    }
}

void Node::addChildren(vector<Node*> newChildren) {
    for (vector<Node*>::iterator it=newChildren.begin(); it!=newChildren.end(); it++) {
        this->children.push_back(*it);
        this->countOfChildren++;
    }
}

void Node::addChildren(list<Node*> newChildren) {
    for (list<Node*>::iterator it=newChildren.begin(); it != newChildren.end(); it++) {
        this->children.push_back(*it);
        this->countOfChildren++;
    }
}

void Node::outputNode() {
    cout << setw(4)<<this->identifier << " : " <<setw(25)<< this->name << "\t" <<setw(25)<< this->detail << "\tChildren: ";
    int index = 0;
    for (list<Node*>::iterator it=children.begin();it!=children.end();it++, index++) {
        index == countOfChildren - 1 ? cout << (*it)->identifier : cout << (*it)->identifier << " ";
    }
    cout << endl;
}

int Node::getIdentifier() {
    return this->identifier;
}

string Node::getName() {
    return this->name;
}

string Node::getDetail() {
    return this->detail;
}

symbolNode* Node::getValue()
{
    return this->value;
}

void Node::addAttribute() {
    if (this->name == "var_declaration") {
        if (this->children.size() == 2) {
            string type = this->children.front()->getDetail();
            list<Node*> var_list = this->children.back()->children;
            for (list<Node*>::iterator it=var_list.begin(); it!=var_list.end(); it++) {
                if ((*it)->detail == "pointer") {
                    Node* p=NULL;
                    for (p=(*it)->children.front(); p->children.size()!=0; p=p->children.front());
                    if (p) {
                        cout << p->name << ":" << p->detail << ":" << p->value << endl;
                        p->value->setNodeType(type + p->value->getNodeType());
                    }
                } else if ((*it)->detail == "array") {
                    Node *p = (*it)->children.front()->children.front();
                    cout << p->name << ":" << p->detail << ":" << p->value << endl;
                    p->value->setNodeType("Array<"+type+">");
                } else {
                    cout << (*it)->children.front()->detail << endl;
                    (*it)->children.front()->value->setNodeType(type);
                }
                
            }
        }
    } else if (this->name == "assignment_expression") {

    } else if (this->name == "pointer") {
        if (this->children.size() == 1) {
            Node* p=NULL;
            for (p=this->children.front(); p->children.size()!=0; p=p->children.front()) {
            }
            if (p) {
                p->value->setNodeType(p->value->getNodeType() + "*");
            }
        }
    }
}
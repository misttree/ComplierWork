//
// Created by Bay on 2018/11/29.
//

#include "Node.h"

Node::Node(int index, const string name, const string detail) {
    this->parent = NULL;
    this->value = NULL;
    this->identifier = index;
    this->name = name;
    this->detail = detail;
    countOfChildren = 0;
}

Node::Node(string name) {
    this->parent = NULL;
    this->value = NULL;
    this->identifier = -1;
    this->name = name;
    this->detail = name;
    countOfChildren = 0;
}

Node::Node(string name, symbolNode * value) {
    this->parent = NULL;
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
    child->parent = this;
    this->countOfChildren += 1;
}

void Node::addChildren(Node* newChildren[], int length) {
    for (int i = 0; i < length; ++i) {
        this->children.push_back(newChildren[i]);
        newChildren[i]->parent = this;
        this->countOfChildren++;
    }
}

void Node::addChildren(vector<Node*> newChildren) {
    for (vector<Node*>::iterator it=newChildren.begin(); it!=newChildren.end(); it++) {
        this->children.push_back(*it);
        (*it)->parent = this;
        this->countOfChildren++;
    }
}

void Node::addChildren(list<Node*> newChildren) {
    for (list<Node*>::iterator it=newChildren.begin(); it != newChildren.end(); it++) {
        this->children.push_back(*it);
        (*it)->parent = this;
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

Node* Node::searchFirstNodeByName(string name) {
    stack<pair<Node*, int> > s;
    s.push(pair<Node*, int>(this, 0));
    while(!s.empty()) {
        pair<Node*, int> p = s.top(); s.pop();
        if (p.first) {
            Node* parent = p.first->parent;
            if (parent && p.second + 1 < parent->children.size()) {
                list<Node*>::iterator it=parent->children.begin();
                for (int click=p.second+1; click > 0; click--, it++);
                s.push(pair<Node*, int>((*it), p.second+1));
            }
            if (p.first->name == name) return p.first;
            if (p.first->children.size() > 0) {
                s.push(pair<Node*, int>(p.first->children.front(), 0));
            }
        }
    }
    return NULL;
}

void Node::addAttribute() {
    if (this->name == "var_declaration") {
        if (this->children.size() == 2) {
            string type = this->children.front()->getDetail();
            list<Node*> var_list = this->children.back()->children;
            for (list<Node*>::iterator it=var_list.begin(); it!=var_list.end(); it++) {
                // cout << (*it)->name << ":" << (*it)->detail << endl;
                if ((*it)->detail == "pointer") {
                    Node* p=NULL;
                    for (p=(*it)->children.front(); p->children.size()!=0; p=p->children.front());
                    if (p) {
                        // cout << p->name << ":" << p->detail << ":" << p->value << endl;
                        p->value->setNodeType(type + p->value->getNodeType());
                    }
                } else if ((*it)->detail == "init_array_or_point_assignment" || (*it)->detail == "array") {
                    Node *point = (*it)->children.front()->children.front();
                    // cout << p->name << ":" << p->detail << ":" << p->value << endl; 
                    symbolNode* symbol = point->value;
                    stack<pair<symbolNode*, int> > s;
                    pair<symbolNode*, int> p(symbol, 0);
                    s.push(p);
                    while(!s.empty()) {
                        pair<symbolNode*, int> p = s.top(); s.pop();
                        symbolNode* parent = p.first->parentNode;
                        if (parent && p.second + 1 < parent->children.size() && parent->children[p.second+1]->getNodeName().find("[")!=-1) {
                            pair<symbolNode*, int> pnew(parent->children[p.second+1], p.second+1);
                            s.push(pnew);
                        }
                        p.first->setNodeType(type);
                        // cout << "symbol: " << p.first->getNodeName() << " " << p.first->children.size() << endl;
                        if (p.first->children.size() > 0) {
                            pair<symbolNode*, int> pnew(p.first->children.front(), 0);
                            s.push(pnew);
                        }
                    }
                    point->value->setNodeType("Array<"+type+">");
                } else {
                    // cout << (*it)->children.front()->detail << endl;
                    (*it)->children.front()->value->setNodeType(type);
                }
            }
            for (list<Node*>::iterator iter=var_list.begin(); iter!=var_list.end(); iter++) {
                if ((*iter)->name == "assignment_expression") {
                    (*iter)->checkType();
                }
            }
        }
    } else if (this->name == "pointer") {
        if (this->children.size() == 1) {
            Node* p=NULL;
            for (p=this->children.front(); p->children.size()!=0; p=p->children.front()) {
            }
            if (p) {
                p->value->setNodeType(p->value->getNodeType() + "*");
            }
        }
    } else if (this->name == "fun_declaration") {
        if (this->children.size() > 0) {
            list<Node*>::iterator it = this->children.begin();
            string type = (*it)->detail;
            it++;
            symbolNode* value = (*it)->value;
            value->setNodeType(type);
            value->setMessage("func");
            it++;
            if((*it)->children.size() > 0) {
                value->setNodeLength((*it)->children.front()->children.size());
            } else {
                value->setNodeLength(0);
            }
        }
    } else if (this->name == "params") {
        if (this->children.size() == 2) {
            string type = this->children.front()->detail;
            if (this->children.back()->detail == "array") {
                symbolNode* symbol = this->children.back()->children.front()->children.front()->value;
                stack<pair<symbolNode*, int> > s;
                pair<symbolNode*, int> p(symbol, 0);
                s.push(p);
                while(!s.empty()) {
                    pair<symbolNode*, int> p = s.top(); s.pop();
                    symbolNode* parent = p.first->parentNode;
                    if (parent && p.second + 1 < parent->children.size() && parent->children[p.second+1]->getNodeName().find("[")!=-1) {
                        pair<symbolNode*, int> pnew(parent->children[p.second+1], p.second+1);
                        s.push(pnew);
                    }
                    p.first->setNodeType(type);
                    // cout << "symbol: " << p.first->getNodeName() << " " << p.first->children.size() << endl;
                    if (p.first->children.size() > 0) {
                        pair<symbolNode*, int> pnew(p.first->children.front(), 0);
                        s.push(pnew);
                    }
                }
                symbol->setNodeType("Array<"+type+">");
            } else if (this->children.back()->detail == "pointer") {
                Node* p=NULL;
                for (p=this->children.back(); p->children.size()!=0; p=p->children.front());
                if (p) {
                    // cout << p->name << ":" << p->detail << ":" << p->value << endl;
                    p->value->setNodeType(type + p->value->getNodeType());
                }
            } else if (this->children.back()->detail == "id") {
                this->children.back()->children.front()->value->setNodeType(type);
            }
        }
    }
    else if (this->name == "call_func") {
        if (this->countOfChildren == 2) {
            this->value = this->children.front()->value;
        }
    }
}

void Node::generateTypeInFactor() {
    if (this->children.size() > 0) {
        if (this->children.front()->name == "ID") {
            this->value = new symbolNode("", this->children.front()->value->getNodeType());
        } else if (this->children.front()->name == "INT_DEX") {
            this->value = new symbolNode("" , this->children.front()->value->getNodeType());
        }
    }
}

void Node::generateTypeInExpression() {
    if (this->children.size() == 2 && this->children.front()->value && this->children.back()->value) 
    {
        symbolNode *front=this->children.front()->value, *back=this->children.back()->value;
        if (front->getNodeType() == back->getNodeType()) 
        {
            this->value = new symbolNode("", front->getNodeType());
        }
        else if (typeEquivalenceClass.at(front->getNodeType()) == typeEquivalenceClass.at(back->getNodeType())) 
        {
            if (typeEquivalenceClass.at(front->getNodeType()) < 4 ) 
            {
                if(typeEquivalenceClass.at(front->getNodeType()) != typeEquivalenceClass.at(back->getNodeType()))
                {
                    cout << "ERROR : Wrong mathematical calculations" << endl;
                }
            }
            else 
            {
                if (front->getNodeType() == "float" || back->getNodeType() == "float") 
                {
                    this->value = new symbolNode("", "float");
                }
                else if (front->getNodeType() == "int" || back->getNodeType() == "int") 
                {
                    this->value = new symbolNode("", "int");
                }
                else if (front->getNodeType() == "char" || back->getNodeType() == "char") 
                {
                    this->value = new symbolNode("", "char");
                }
                else if (front->getNodeType() == "bool" || back->getNodeType() == "bool") 
                {
                    this->value = new symbolNode("", "bool");
                }
            }
        }
    }
}

void Node::checkType() {
    if (this->name == "assignment_expression")
    {
        if (this->children.size() == 2) 
        {
            symbolNode *front=this->children.front()->value, *back=this->children.back()->value;
            if (front->getNodeType() == back->getNodeType())
            {
                this->value = new symbolNode("", this->children.front()->value->getNodeType());
                return;
            }
            if (typeEquivalenceClass.at(front->getNodeType()) == typeEquivalenceClass.at(back->getNodeType()))
            {
                if (typeEquivalenceClass.at(front->getNodeType()) == 4)
                {
                    // 检查 bool char int float 之间的类型
                    if (typeLevel.at(front->getNodeType()) < typeLevel.at(back->getNodeType())) {
                        cout << "WARNING(line: " << yylineno << "): Losing bits from " << back->getNodeType() << " to " << front->getNodeType() << endl;
                    } 
                }
            }
            else
            {
                if (typeEquivalenceClass.at(front->getNodeType()) != -1 && typeEquivalenceClass.at(back->getNodeType()) != -1)
                {
                    cout << "ERROR(line: "<< yylineno << "): The type " << back->getNodeType() << " can't be assigned to type " << front->getNodeType() << endl;
                }
            }
        }
    }
    else if (this->name == "call_func")
    {
        if (this->countOfChildren == 2)
        {
            symbolNode* value = this->children.front()->value;
            list<Node*> args = this->children.back()->children;
            int index = 0;
            bool right = true;
            for (list<Node*>::iterator it=args.begin(); it!=args.end(); it++, index++)
            {
                if (index > value->children.size() - 1)
                {
                    right = false;
                    break;
                }
                cout << "Index: " << index << " Size:" << value->children.size() << endl;
                cout << "value type: " << value->children.at(index)->getNodeType() << endl;
                cout << "*it   type: " << (*it)->name << endl;
                if (value->children.at(index)->getNodeType() != (*it)->value->getNodeType())
                {
                    right = false;
                    break;
                }
            }
            if (index < value->children.size() - 1) right = false;
            if (!right)
            {
                cout << "ERROR(line:" << yylineno << "): Cannot find function " << this->children.front()->detail << "(";
                index = 0;
                for (list<Node*>::iterator it=args.begin(); it!=args.end(); it++, index++)
                {
                    if (index != args.size() - 1)
                        cout << (*it)->getValue()->getNodeType() << ", ";
                    else
                        cout << (*it)->getValue()->getNodeType() << ") " << endl;
                }
                exit(0);
            }
        }
    }
}
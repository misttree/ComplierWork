%{
#include <stdio.h>
#include "stdlib.h"
#include <string>
#include <cstring>
#include <string.h>
#include <iostream>
#include "Node.h"

#define V vector<Node*>
using namespace std;

extern FILE * yyin;
extern FILE * yyout;

void yyerror(const char*); 
int yylex();

Node* nullNode(int index);
Node* newnode(int index, const string name, const string detail);
Node* newnode(int index, const string name, Node* node);
Node* newnode(int index, Node* node, const string detail);
Node* newnode(int index, const string name, const string detail, Node* node);
Node* newnode(int index, const string name, const string detail, vector<Node*> nodes);

void outputTree(Node* node);
list<string> formatOutputTree(list<Node*> children, list<string> strformat);
void outputTable();
void outputSymbolTable();

static int mycount = 0;
static vector<Node*> ranged_nodes;
extern symbolTable *symboltable;

%}

// place any declarations here
%left '+' '-'
%left '*' '/'

%token <node> INT_DEX INT_HEX INT_OCT FLOAT SEMI COMMA GE LE
%token <node> EQ NE GT LT ASSIGNOP PLUS MINUS STAR ADDR
%token <node> DIV AND OR DOT NOT LP RP LB
%token <node> RB LC RC COMMENT COMMENTS AUTO BOOL BREAK
%token <node> CASE CATCH CHAR CLASS CONST CONTINUE CO_AWAIT DEFAULT
%token <node> DELETE DO DOUBLE ELSE ENUM EXTERN FALSE FOR
%token <node> FRIEND GOTO IF IMPORT INLINE INT LONG NAMESPACE
%token <node> NEW NULLPTR OPERATOR PRIVATE PROTECTED PUBLIC RETURN SHORT
%token <node> SIGNED SIZEOF STATIC STRING_DEFINE STRUCT SWITCH SYNCHRONIZED TEMPLATE
%token <node> THIS THROW TRUE TRY TYPEDEF UNION UNSIGNED USING
%token <node> VIRTUAL VOID WHILE TYPE ID ERROR_ID LETTER LETTERS
%token <node> QUETO STRING DOUBLEQUETO
%token <node> SHARP PE ME SE DE PP MM CL

%type <node> tree program external_declaration var_declaration init_declarator_list pointer paddress array array_sigle declarator
%type <node> fun_declaration declaration_specifiers params params_list var compound_stmt block_list block_item
%type <node> statement_list statement if_stmt while_stmt do_while_stmt for_stmt for_body for_condition
%type <node> return_stmt expression logical_expression assignment_expression simple_expression unary_expression postfix_expression
%type <node> relop additive_expression term factor call_func args number id array_size self_assign switch_stmt case_list
%type <node> list_struct mininum array_main array_special init_array_or_point_assignment content_of_list_struct
%type <node> struct_specifier struct_declaration_list struct_id struct_name_specifier

%locations

%union{
    Node * node;
}

%%

tree: 
	  program { outputTree($1); }
	;

program: 
	  external_declaration { $$=newnode(mycount++, "program", "program", $1); }
    | program external_declaration { $1->addChild($2); $$=$1; }
	;

external_declaration: 
	  var_declaration {$$=$1;}
	| fun_declaration {$$=$1;}
    ;

var_declaration: 
	  declaration_specifiers init_declarator_list SEMI { V v;v.push_back($1);v.push_back($2);$$=newnode(mycount++, "var_declaration", "var_declaration", v); }
    | struct_specifier SEMI {$$=newnode(mycount++, "var_declaration", "var_declaration", $1);}
	;

init_declarator_list: 
	  var { $$=newnode(mycount++, "init_declarator_list", "init_declarator_list", $1); }
    | assignment_expression { $$=newnode(mycount++, "init_declarator_list", "init_declarator_list", $1); }
	| init_array_or_point_assignment {$$=newnode(mycount++, "init_declarator_list", "init_declarator_list", $1); }
    | init_declarator_list COMMA assignment_expression { $1->addChild($3); $$=$1; }
	| init_declarator_list COMMA var { $1->addChild($3); $$=$1; }
	| init_declarator_list COMMA init_array_or_point_assignment { $1->addChild($3); $$=$1; }
    ;

//初始化数组 array={}
init_array_or_point_assignment:
	  array ASSIGNOP list_struct {V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
	| array ASSIGNOP LC RC {V v;v.push_back($1);$$ = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
	| pointer ASSIGNOP array {V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
	| array_sigle ASSIGNOP list_struct{V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++, "init_array_or_point_assignment", "init_array_or_point_assignment", v);}
	;

//列表式结构{1,2,3}
list_struct:
	  LC content_of_list_struct RC {$$ = newnode(mycount++, "list_struct", "list_struct", $2);}
	;

//嵌套定义{{}，2}
content_of_list_struct:
	  mininum {$$=newnode(mycount++,"content_of_list_struct", "content_of_list_struct", $1);}
	| list_struct {$$=newnode(mycount++,"content_of_list_struct", "content_of_list_struct", $1);}
	| content_of_list_struct COMMA mininum {$1->addChild($3);$$=$1;}
	| content_of_list_struct COMMA list_struct {$1->addChild($3);$$=$1;}
	;

//大括号里面的内容	
mininum:
	  LETTER { $$ = newnode(mycount++, "mininum", $1); }
	| STRING { $$ = newnode(mycount++, "mininum", $1); }
	| number { $$ = $1; }
	;

//指针的定义
pointer: 
	  STAR id { $$=newnode(mycount++, "pointer", "pointer", $2); }
	| STAR pointer { $$=newnode(mycount++, "pointer", "pointer", $2); }
	;

struct_specifier:
      STRUCT id LC struct_declaration_list RC {V v;v.push_back($2);v.push_back($4);$$=newnode(mycount++,"struct_specifier","struct_specifier",v);}
    | STRUCT id {$$=newnode(mycount++,"struct_specifier","struct_specifier",$2);}
    ;

struct_declaration_list:
      declaration_specifiers init_declarator_list SEMI { V v;v.push_back($1);v.push_back($2);$$=newnode(mycount++, "struct_declaration_list", "struct_declaration_list", v); }
    | declaration_specifiers init_declarator_list SEMI struct_declaration_list { $4->addChild($1);$4->addChild($2);$$=$4; }
    ;

struct_name_specifier:
      id id { V v;v.push_back($1);v.push_back($2);$$=newnode(mycount++,"struct_name_specifier","struct_name_specifier",v); }
	| id id ASSIGNOP id { V v;v.push_back($1);v.push_back($2);v.push_back($4);$$=newnode(mycount++,"struct_name_specifier_and_assignop","struct_name_specifier_and_assignop",v); }
    ;

struct_id:
      id DOT id { V v;v.push_back($1);v.push_back($3);$$=newnode(mycount++,"struct_id","struct_id",v); }
    ;

//definetion of address
paddress:
	  ADDR id { $$=newnode(mycount++, "address", "address", $2); }
	;

//数组的定义
array:
	  id array_main {V v; v.push_back($2); $$=newnode(mycount++, "array", "array", v);}
	| NEW INT array_main { V v; v.push_back($3); $$=newnode(mycount++, "array", "array", v);}
	| NEW CHAR array_main { V v; v.push_back($3); $$=newnode(mycount++, "array", "array", v);} 
	;

//为了int[]={}成立
array_sigle:
	  id array_special{V v; v.push_back($2); $$=newnode(mycount++, "array_sigle", "array_sigle", v);}
	;
//数组主要的几种表示方式
array_main: 
	  LB array_size RB array_main { V v;v.push_back($2);v.push_back($4);$$=newnode(mycount++, "array", "array", v); }
	| LB RB array_main { $$=newnode(mycount++, "array_main", "array_main", $3); }
	| LB array_size RB { $$=newnode(mycount++, "array_main", "array_main", $2); }
	;

//只适用于int a[] = {}的情况
array_special:
	  LB RB { V v;$$=newnode(mycount++, "array_special", "array_special", v); }
	;
	  

array_size:
	  INT_DEX { $$=newnode(mycount++, "array_size", $1); }
	;

declarator: 
	  LP RP {$$ = newnode(mycount++, "declarator", "declarator");}
    | LP params_list RP {$$ = newnode(mycount++, "declarator", "declarator", $2);}
    ;

fun_declaration: 
	  declaration_specifiers id declarator compound_stmt { V v;v.push_back($1);v.push_back($2);v.push_back($3);v.push_back($4);$$=newnode(mycount++, "fun_declaration", "fun_declaration", v);}
    ;

declaration_specifiers: 
	  INT { $$=newnode(mycount++, "INT", $1); }
    | VOID { $$=newnode(mycount++, "VOID", $1); }
    | FLOAT { $$=newnode(mycount++, "FLOAT", $1); }
	| BOOL { $$=newnode(mycount++, "BOOL", $1); }
	| CHAR { $$=newnode(mycount++, "CHAR", $1); }
	| DOUBLE { $$=newnode(mycount++, "DOUBLE", $1); }
	| LONG { $$=newnode(mycount++, "LONG", $1); }
	| SHORT { $$=newnode(mycount++, "SHORT", $1); }
	| STRING_DEFINE { $$=newnode(mycount++, "STRING_DEFINE", $1); }
    ;

params_list: 
	  params {$$=newnode(mycount++, "params_list", "params_list", $1); }
    | params COMMA params_list {$3->addChild($1); $$=$3;}
    ;

params: 
	  declaration_specifiers var { V v;v.push_back($1);v.push_back($2); $$=newnode(mycount++, "params", "params", v); }
    ;

var: 
	  id {$$=newnode(mycount++, "var", "id", $1);}
	| array {$$=newnode(mycount++, "var", "array", $1);}
	| pointer {$$=newnode(mycount++, "var", "pointer", $1);}
	| paddress {$$=newnode(mycount++, "var", "address", $1);}
	;

compound_stmt: 
	  LC RC { $$ = newnode(mycount++, "compound_stmt", ""); }
	| LC block_list RC { $$=newnode(mycount++, "compound_stmt", "compound_stmt", $2); }
	;

block_list: 
	  block_item { $$ = newnode(mycount++, "block_list", "block_list",$1); }
    | block_list block_item { $1->addChild($2); $$=$1; }
    ;

block_item: 
	  var_declaration {$$=$1;}
    | statement_list {$$=$1;}
    ;

statement_list: 
	  statement_list statement { $1->addChild($2); $$=$1; }
	| statement { $$=newnode(mycount++, "statement_list", "statement_list", $1); }
	;

statement: 
	  expression SEMI {$$=$1;}
    | compound_stmt {$$=$1;}
    | if_stmt {$$=$1;}
    | while_stmt {$$=$1;}
	| for_stmt {$$=$1;}
	| do_while_stmt {$$=$1;}
	| switch_stmt {$$=$1;}
	| BREAK SEMI {$$=newnode(mycount++, "BREAK", "break", $1);}
	| CONTINUE SEMI {$$=newnode(mycount++, "CONTINUE", "continue", $1);}
    | return_stmt {$$=$1;}
	| struct_name_specifier SEMI {$$=$1;}
    ;

if_stmt: 
	  IF LP expression RP statement ELSE statement { V v;v.push_back($3);v.push_back($5);v.push_back($7);$$ = newnode(mycount++, "if_stmt", "if_stmt", v);}
    | IF LP expression RP LC statement_list RC ELSE statement_list { V v;v.push_back($3);v.push_back($6);v.push_back($9);$$ = newnode(mycount++, "if_stmt", "if_stmt", v);}
    | IF LP expression RP LC statement_list RC ELSE LC statement_list RC { V v;v.push_back($3);v.push_back($6);v.push_back($10);$$ = newnode(mycount++, "if_stmt", "if_stmt", v);}
    | IF LP expression RP statement { V v;v.push_back($3);v.push_back($5);$$ = newnode(mycount++, "if_stmt", "if_stmt", v);}
    | IF LP expression RP LC statement_list RC { V v;v.push_back($3);v.push_back($6);$$ = newnode(mycount++, "if_stmt", "if_stmt", v);}
    ;

switch_stmt:
 	  SWITCH LP id RP LC case_list RC {V v;v.push_back($3);v.push_back($6);$$ = newnode(mycount++, "switch_stmt", "switch_stmt", v);} 
 	; 

case_list:
 	  CASE INT_DEX CL LC statement_list RC case_list { V v;v.push_back($2);v.push_back($5);v.push_back($7);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| CASE INT_DEX CL LC statement_list RC { V v;v.push_back($2);v.push_back($5);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| CASE INT_DEX CL statement_list case_list { V v;v.push_back($2);v.push_back($4);v.push_back($5);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| CASE INT_DEX CL statement_list { V v;v.push_back($2);v.push_back($4);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| CASE LETTER CL LC statement_list RC case_list { V v;v.push_back($2);v.push_back($5);v.push_back($7);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| CASE LETTER CL LC statement_list RC { V v;v.push_back($2);v.push_back($5);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| CASE LETTER CL statement_list case_list { V v;v.push_back($2);v.push_back($4);v.push_back($5);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| CASE LETTER CL statement_list { V v;v.push_back($2);v.push_back($4);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| DEFAULT CL LC statement_list RC { V v;v.push_back($4);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	| DEFAULT CL statement_list { V v;v.push_back($3);$$ = newnode(mycount++, "case_list", "case_list", v);}
 	;

while_stmt: 
	  WHILE LP expression RP statement { V v;v.push_back($3);v.push_back($5); $$ = newnode(mycount++, "while_stmt", "while_stmt", v); }
    | WHILE LP expression RP LC statement_list RC { V v;v.push_back($3);v.push_back($6); $$ = newnode(mycount++, "while_stmt", "while_stmt", v); }
    ;

do_while_stmt: 
	  DO LC statement_list RC WHILE LP expression RP SEMI { V v;v.push_back($3);v.push_back($7);$$=newnode(mycount++, "do_while_stmt", "do_while_stmt", v); }
	;

for_stmt: 
	  FOR for_condition for_body { V v;v.push_back($2);v.push_back($3);$$=newnode(mycount++, "for_stmt", "for_stmt", v); }
	;

for_body: 
	  statement { $$=newnode(mycount++, "for_body", "for_body",$1); }
	| LC statement_list RC { $$=newnode(mycount++, "for_body", "for_body", $2); }
	;

for_condition: 
	  LP expression SEMI expression SEMI expression RP {V v;v.push_back($2);v.push_back($4);v.push_back($6); $$=newnode(mycount++, "for_condition", "for_condition", v); }
	| LP var_declaration expression SEMI expression RP {V v;v.push_back($2);v.push_back($3);v.push_back($5); $$=newnode(mycount++, "for_condition", "for_condition", v); }
	| LP SEMI expression SEMI expression RP {V v;v.push_back(nullNode(mycount++));v.push_back($3);v.push_back($5); $$=newnode(mycount++, "for_condition", "for_condition", v); }
	| LP SEMI SEMI expression RP {V v;v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++));v.push_back($4); $$=newnode(mycount++, "for_condition", "for_condition", v); }
	| LP SEMI SEMI RP {V v;v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++));v.push_back(nullNode(mycount++)); $$=newnode(mycount++, "for_condition", "for_condition", v); }
	;


return_stmt: 
	  RETURN SEMI { $$ = newnode(mycount++, "return_stmt", "return_stmt"); }
	| RETURN expression SEMI { $$ = newnode(mycount++,"return_stmt", "return_stmt", $2); }
	;

expression: 
	  assignment_expression { $$=$1; }
	| simple_expression { $$=$1; }
	| logical_expression { $$=$1; }
    ;

logical_expression: 
	  expression AND expression { V v;v.push_back($1);v.push_back($3); $$=newnode(mycount++, "logical_and_expression", "logical_and_expression", v); }
	| expression OR expression { V v;v.push_back($1);v.push_back($3); $$=newnode(mycount++, "logical_or_expression", "logical_or_expression", v); }
	| NOT expression { $$=newnode(mycount++, "logical_not_expression", "logical_not_expression", $2); }
	;

assignment_expression: 
	  id ASSIGNOP expression { V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++,"assignment_expression","assignment_expression", v); }
	| id self_assign expression {V v;v.push_back($1);v.push_back($3); $2->addChildren(v); $$=$2;}
	| array ASSIGNOP additive_expression{V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++,"assignment_expression","assignment_expression", v);}
	| unary_expression  { $$=$1; }
	;

self_assign:
	  PE {$$=newnode(mycount++, "self_assign", "+=");}
	| ME {$$=newnode(mycount++, "self_assign", "-=");}
	| SE {$$=newnode(mycount++, "self_assign", "*=");}
	| DE {$$=newnode(mycount++, "self_assign", "/=");} 
	;

unary_expression: 
	  PP id {$$ = newnode(mycount++, "unary_expression", "++", $2);}
    | MM id {$$ = newnode(mycount++, "unary_expression", "--", $2);}
    | postfix_expression {$$=$1;}
    ;

postfix_expression: 
	  id PP {$$ = newnode(mycount++,"postfix_expression", "++", $1);}
    | id MM {$$ = newnode(mycount++,"postfix_expression", "--", $1);}
    ;

simple_expression: 
	  additive_expression { $$=$1; }
    | additive_expression relop additive_expression { V v;v.push_back($1);v.push_back($2);v.push_back($3); $$ = newnode(mycount++, "simple_expression", "simple_expression", v); }
    ;

relop:
	  LT { $$ = newnode(mycount++, "LT", "<"); }
    | LE { $$ = newnode(mycount++, "LE", "<="); }
    | GT { $$ = newnode(mycount++, "GT", ">"); }
    | GE { $$ = newnode(mycount++, "GE", ">="); }
    | EQ { $$ = newnode(mycount++, "EQ", "=="); }
    | NE { $$ = newnode(mycount++, "NE", "!="); }
    ;

additive_expression: 
	  term {$$=$1;}
    | additive_expression PLUS term { V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++, "additive_expression", "+", v); }
    | additive_expression MINUS term { V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++, "additive_expression", "-", v); }
    ;

term: 
	  factor {$$=$1;}
    | term STAR factor { V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++, "term", "*", v); }
    | term DIV factor { V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++, "term", "/", v); }
    ;

factor: 
	  LP expression RP { $$=$2; }
    | id { $$ = newnode(mycount++, "factor", "factor", $1); }
    | call_func { $$=$1; }
    | number { $$ = newnode(mycount++, "factor", "factor", $1); }
	| array{$$ = newnode(mycount++, "factor", "factor", $1); }
	| paddress { $$ = newnode(mycount++, "factor", "factor", $1); }
	| pointer { $$ = newnode(mycount++, "factor", "factor", $1); }
	;

call_func: 
	  id LP RP {$$ = newnode(mycount++, "call_func", "call_func", $1);}
    | id LP args RP { V v;v.push_back($1);v.push_back($3);$$ = newnode(mycount++, "call_func", "call_func", v);}
    ;

args: 
	  expression { $$=$1; }
    | expression COMMA args { V v;v.push_back($1);v.push_back($3); $$ = newnode(mycount++, "args", "args", v);}
    ;

number: 
	  INT_HEX { $$=newnode(mycount++, "INT_HEX", $1); }
	| INT_OCT { $$=newnode(mycount++, "INT_OCT", $1); }
	| INT_DEX { $$=newnode(mycount++, "INT_DEX", $1); }
	| FLOAT { $$=newnode(mycount++, "FLOAT", $1); }
	;

id:
	  ID {$$=newnode(mycount++, "ID", $1);}
	| struct_id {$$=$1;}
	;

%%
int main(int argc,char* argv[]) {
    yyin = fopen(argv[1],"r");
    yyparse();
	outputTable();
	outputSymbolTable();
	return 0;
}

void outputSymbolTable() {
	vector<string> list;
	list.push_back("  ");
	cout << endl;
	cout << "*********** symbol table ***********" << endl;
	symboltable->showTable(symboltable->root, list);
	cout << "************************************" << endl << endl;
}

void outputTable() {
	for (vector<Node*>::iterator it = ranged_nodes.begin(); it != ranged_nodes.end(); it++) {
		(*it)->outputNode();
	}
}

void outputTree(Node* node) {
	cout << "***************************** tree *****************************" << endl;
	// node->outputNode();
	list<string> strformat;
	// strformat.push_back("   ");
	formatOutputTree(node->children, strformat);
	cout << "****************************************************************" << endl;
}

list<string> formatOutputTree(list<Node*> children, list<string> strformat) {
	int num = children.size();
	if (num == 0) {
		if (strformat.size() > 0)
			strformat.pop_back();
		return strformat;
	}
	int count = 0;
	for (list<Node*>::iterator it=children.begin(); it!=children.end(); it++, count++) {
		for (list<string>::iterator i=strformat.begin(); i!=strformat.end(); i++) {
			cout << (*i);
		}
		if (count == num-1) {
			cout << "└─ " << (*it)->name << ":" << (*it)->detail << endl;
			strformat.push_back("   ");
		} else {
			cout << "├─ " << (*it)->name << ":" << (*it)->detail << endl;
			strformat.push_back("│  ");
		}
		strformat = formatOutputTree((*it)->children, strformat);
	}
	if (strformat.size() > 0)
		strformat.pop_back();
	return strformat;
}

Node* nullNode(int index) {
	Node *p = new Node(index, "NULL", "Empty node");
	ranged_nodes.push_back(p);
	return p;
}

Node* newnode(int index, const string name, const string detail) {
	Node *p = new Node(index, name, detail);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

Node* newnode(int index, const string name, Node* node) {
	Node *p = new Node(index, name, node->detail);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

Node* newnode(int index, Node* node, const string detail) {
	Node *p = new Node(index, node->name, detail);  // 防止指针为空
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

Node* newnode(int index, const string name, const string detail, Node* node) {
	Node *p = new Node(index, name, detail);
	p->addChild(node);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}

Node* newnode(int index, const string name, const string detail, vector<Node*> nodes) {
	Node *p = new Node(index, name, detail);
	p->addChildren(nodes);
	ranged_nodes.push_back(p);
	// outputTree(p);
	return p;
}


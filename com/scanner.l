%{
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Node.h"
using namespace std;
#define YYSTYPE Node*
#include "parser.hpp"
symbolTable *symboltable = new symbolTable();
vector<symbolNode* > typedefString;
bool innerStruct = false;  // 用于在词法中判断是否处于struct的定义内
string matchStructName = "";  // 用于在词法中传递一次匹配的struct对象 
%}

%option yylineno

INT_DEX [1-9][0-9]*|[0]
INT_HEX [0][Xx]([1-9][0-9]*|[0])
INT_OCT [0][0-7]*
FLOAT (([1-9][0-9]*)|([0]))[.][0-9]*

SEMI [;]
COMMA [,]
SHARP [#]

GE [>][=]
LE [<][=]
EQ [=][=]
NE [!][=]

PE [+][=]
ME [-][=]
SE [*][=]
DE [/][=]
PP [+][+]
MM [-][-]


GT [>]
LT [<]
ASSIGNOP [=]
PLUS [+]
MINUS [-]
STAR [*]
ADDR [&]
DIV [/]
AND [&][&]
OR [|][|]
DOT \.
NOT \!

LP \(
RP \)
LB \[
RB \]
LC \{
RC \}
CL \:

COMMENT  [/][/].*
COMMENTS "/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"

AUTO auto
BOOL bool
BREAK break
CASE case
CATCH catch
CHAR char
CLASS class
CONST const
CONTINUE continue
DEFAULT default
DELETE delete
DO do
DOUBLE double
ELSE else
ENUM enum
EXTERN extern
FALSE false
FOR for
FRIEND friend
GOTO goto
IF if
IMPORT import
INLINE inline
INT int
LONG long
NAMESPACE namespace
NEW new
NULLPTR nullptr
OPERATOR operator
PRIVATE private
PROTECTED protected
PUBLIC public
RETURN return
SHORT short
SIGNED signed
SIZEOF sizeof
STATIC static
STRING_DEFINE string
STRUCT struct
SWITCH switch
SYNCHRONIZED synchronized
TEMPLATE template
THIS this
THROW throw
TRUE true
TRY try
TYPEDEF typedef
UNION union
UNSIGNED unsigned
USING using
VIRTUAL virtual
VOID void
WHILE while
TYPE type


ID [a-zA-Z_][a-zA-Z_0-9]*
ERROR_ID [0-9]+[a-zA-Z_0-9]+

LETTER [\'].[\']

STRING [\"].*[\"]

SPACE  (\t|\0|\r|\ )+
LINEBREAK (\n)|(\r\n)

ETC .
%%

{INT_DEX} {
	symbolNode * pnew = new symbolNode();
	pnew -> setNodeName("ditigal");
	pnew->setNodeType("int");
	if(symboltable->statementNumber == 6)
	{
		symboltable->statementNumber = 7;
		int time = atoi(yytext);
		string name = symboltable->now->getNodeName();
		symboltable->now->setNodeLength(time);
		for(int a = 0 ;a< time ;a++ )
		{
				string temp = name + "["+to_string(a) + "]";
				symbolNode *pnew = new symbolNode(temp); 
				symboltable->insertNode(pnew);
		}
	}
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext), pnew);
	return INT_DEX;
}

{INT_HEX} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return INT_HEX;
}

{INT_OCT} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return INT_OCT;
}

{FLOAT} {
	symbolNode * pnew = new symbolNode();
	pnew->setNodeName("FLOAT");
	pnew->setNodeType("float");
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return FLOAT;
}

{SEMI} {

	if(symboltable->statementNumber == 2)
		symboltable->statementNumber = 0;

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return SEMI;
}

{COMMA} {
	if(symboltable->statementNumber == 2)
		symboltable->statementNumber = 1;
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return COMMA;
}

{SHARP} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return SHARP;
}

{GE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return GE;
}

{LE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return LE;
}

{EQ} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return EQ;
}

{NE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return NE;
}

{PE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return PE;
}

{ME} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return ME;
}
{SE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return SE;
}
{DE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return DE;
}
{PP} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return PP;
}

{MM} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return MM;
}

{GT} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return GT;
}

{LT} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return LT;
}

{ASSIGNOP} {

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return ASSIGNOP;
}

{PLUS} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return PLUS;
}

{MINUS} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return MINUS;
}

{STAR} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return STAR;
}

{ADDR} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return ADDR;
}


{DIV} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return DIV;
}

{AND} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return AND;
}

{OR} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return OR;
}

{DOT} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return DOT;
}

{NOT} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return NOT;
}

{LP} {

	if(symboltable->statementNumber == 2)
	{
		symboltable->down();
		symboltable->statementNumber = 0;
	}	

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return LP;
}

{RP} {
	if(symboltable->statementNumber == 2)
	{
		symboltable->statementNumber = 0;
	}	

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return RP;
}

{LB} {
	if(symboltable->statementNumber == 2)
	{
		symboltable->statementNumber = 6;
		symboltable->down();
	}
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return LB;
}

{RB} {
	if(symboltable->statementNumber == 7 || symboltable->statementNumber == 6)
	{
		symboltable->statementNumber = 2;
		symboltable->up();
	}
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return RB;
}

{LC} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return LC;
}

{RC} {

	if(symboltable->statementNumber == 0)
	{
		symboltable->up();
	}
	// else
	// {
	//  cout<<"System Error: Unreachable part"<<endl;
	// }
	//cout << string(yytext) << endl;
	innerStruct = false;
	yylval=new Node(string(yytext));
	return RC;
}

{CL} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return CL;
}

{COMMENT} {
	/* ignore */
}
{COMMENTS} {
	/* ignore */
}

{AUTO} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return AUTO;
}

{BOOL} {
	if(symboltable->statementNumber == 0)
		symboltable->statementNumber = 1;
	symbolNode * pnew = new symbolNode();
	pnew->setNodeName("BOOL");
	pnew->setNodeType("bool");
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext), pnew);
	return BOOL;
}

{BREAK} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return BREAK;
}

{CASE} {
	if(symboltable->statementNumber == 0){ 
		symbolNode * pnew = new symbolNode("case");
		symboltable->insertNode(pnew);
		symboltable->down();
	}
	// else{
	// 	 cout<<"System Error: Unreachable state"<<endl;
	// }
	

	// cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return CASE;
}

{CATCH} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return CATCH;
}

{CHAR} {

	if(symboltable->statementNumber == 0)
		symboltable->statementNumber = 1;
	// else
		 // cout<<"System Error: Unreachable state"<<endl;

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return CHAR;
}

{CLASS} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return CLASS;
}

{CONST} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return CONST;
}

{CONTINUE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return CONTINUE;
}

{DEFAULT} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return DEFAULT;
}

{DELETE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return DELETE;
}

{DO} {

	if(symboltable->statementNumber == 0)
	{
		symbolNode * pnew = new symbolNode("do");
		symboltable->insertNode(pnew);
		symboltable->down();
	}
	// else
	// {
	// 	 cout<<"System Error: Unreachable part"<<endl;
	// }

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return DO;
}

{DOUBLE} {

	if(symboltable->statementNumber == 0)
		symboltable->statementNumber = 1;
	// else
		// cout<<"System Error: Unreachable state"<<endl;
		
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return DOUBLE;
}

{ELSE} {
	if(symboltable->statementNumber == 0)
	{
		symbolNode * pnew = new symbolNode("else");
		symboltable->insertNode(pnew);
		symboltable->down();
	}
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return ELSE;
}

{ENUM} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return ENUM;
}

{EXTERN} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return EXTERN;
}

{FALSE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return FALSE;
}

{FOR} {

	if(symboltable->statementNumber == 0)
	{
		symbolNode * pnew = new symbolNode("for");
		symboltable->insertNode(pnew);
		symboltable->down();
	}
	// else
	// {
	// 	// cout<<"System Error: Unreachable part"<<endl;
	// }

	yylval=new Node(string(yytext));
	return FOR;
}

{FRIEND} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return FRIEND;
}

{GOTO} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return GOTO;
}

{IF} {

	if(symboltable->statementNumber == 0)
	{
		symbolNode * pnew = new symbolNode("if");
		symboltable->insertNode(pnew);
		symboltable->down();
	}
	// else
	// {
	// 	// cout<<"System Error: Unreachable part"<<endl;
	// }
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return IF;
}

{IMPORT} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return IMPORT;
}

{INLINE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return INLINE;
}

{INT} {
	if(symboltable->statementNumber == 0)
		symboltable->statementNumber = 1;
	// else
		// cout<<"System Error: Unreachable state"<<endl;

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return INT;
}

{LONG} {

	if(symboltable->statementNumber == 0)
		symboltable->statementNumber = 1;
	// else
		// cout<<"System Error: Unreachable state"<<endl;

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return LONG;
}

{NAMESPACE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return NAMESPACE;
}

{NEW} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return NEW;
}

{NULLPTR} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return NULLPTR;
}

{OPERATOR} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return OPERATOR;
}

{PRIVATE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return PRIVATE;
}

{PROTECTED} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return PROTECTED;
}

{PUBLIC} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return PUBLIC;
}

{RETURN} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return RETURN;
}

{SHORT} {

	if(symboltable->statementNumber == 0)
		symboltable->statementNumber = 1;
	//else
		// cout<<"System Error: Unreachable state"<<endl;

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return SHORT;
}

{SIGNED} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return SIGNED;
}

{SIZEOF} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return SIZEOF;
}

{STATIC} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return STATIC;
}

{STRING_DEFINE} {

	if(symboltable->statementNumber == 0)
		symboltable->statementNumber = 1;
	//else
		 // cout<<"System Error: Unreachable state"<<endl;

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return STRING_DEFINE;
}

{STRUCT} {
	if(symboltable->statementNumber == 0)
		symboltable->statementNumber = 3;
	//cout << string(yytext) << endl;
	 yylval=new Node(string(yytext));
	 return STRUCT;
}

{SWITCH} {
	if(symboltable->statementNumber == 0){ 
		symbolNode * pnew = new symbolNode("switch");
		symboltable->insertNode(pnew);
		symboltable->down();
	}
	// else{
	// 	// cout<<"System Error: Unreachable state"<<endl;
	// }

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return SWITCH;
}

{SYNCHRONIZED} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return SYNCHRONIZED;
}

{TEMPLATE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return TEMPLATE;
}

{THIS} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return THIS;
}

{THROW} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return THROW;
}

{TRUE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return TRUE;
}

{TRY} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return TRY;
}

{TYPEDEF} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return TYPEDEF;
}

{UNION} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return UNION;
}

{UNSIGNED} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return UNSIGNED;
}

{USING} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return USING;
}

{VIRTUAL} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return VIRTUAL;
}

{VOID} {
	if(symboltable->statementNumber == 0)        
		symboltable->statementNumber = 1;    
	// else        
		// cout<<"System Error: Unreachable state"<<endl;
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return VOID;
}

{WHILE} {

	if(symboltable->statementNumber == 0)
	{
		symbolNode * pnew = new symbolNode("while");
		symboltable->insertNode(pnew);
		symboltable->down();
	}
	// else
	// {
	// 	// cout<<"System Error: Unreachable part"<<endl;
	// }

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return WHILE;
}

{TYPE} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return TYPE;
}

{ID} {
	// cout<<symboltable->statementNumber<<"  "<<yytext<<endl;  // 输出状态转换信息
	symbolNode * pnew;
	switch(symboltable->statementNumber)
	{
		case 0:
		{
			for(int i = 0; i < typedefString.size(); i++)
			{
				if(typedefString.at(i)->getNodeName() == yytext)
				{
					symboltable->statementNumber = 4;
					matchStructName = yytext;
					break;
				}
			}
			// 处理变量声明时的语句
			// if(symboltable->findNode(symboltable->now, yytext) == NULL)
			// cout<<"System Error: Undefined Variable "<<yytext<<endl;
			break;
		}
		case 1:
		{
			pnew = new symbolNode(yytext);
			symboltable->insertNode(pnew);
			symboltable->statementNumber = 2;
			if (innerStruct)
			{
				pnew = new symbolNode(yytext);
				typedefString.at(typedefString.size() - 1 )->children.push_back(pnew);
			}
			break;
		}
		case 2:
		{
			pnew = symboltable->findNode(symboltable->now, yytext);
			if (pnew == NULL) {
				cout << "Error" << endl;
			}
			// cout<<"System Error: Unreachable state"<<endl;
			break;
		}
		case 3:
		{
			typedefString.push_back(new symbolNode(yytext));
			string pnew_name = yytext;
			pnew_name = pnew_name + "(struct)";
			symbolNode * pnew = new symbolNode(pnew_name);
			symboltable->insertNode(pnew);
			symboltable->down();
			symboltable->statementNumber = 0;
			innerStruct = true;
			break;
		}
		case 4:
		{
			symboltable->statementNumber = 2;
			symbolNode * pnew = new symbolNode(yytext);
			symboltable->insertNode(pnew);
			for( auto  point : typedefString)
			{
				if(point->getNodeName() == matchStructName)
				{
					for (auto temp : point->children)
					{
						pnew->giveChildren(temp->getNodeName());
					}
				}
			} 
			break;
		}
		default:
		{
			// cout<<"System Error: Unreachable state"<<endl;
			break;
		}
	}

	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext), pnew);
	return ID;
}

{ERROR_ID} {
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return ERROR_ID;
}

{LETTER} {
	symbolNode * pnew = new symbolNode();
	pnew->setNodeName("LEETER");
	pnew->setNodeType("char");
	//cout << string(yytext) << endl;
	yylval=new Node(string(yytext));
	return LETTER;
}


{STRING} {
	symbolNode * pnew = new symbolNode();
	pnew->setNodeName("STRING");
	pnew->setNodeType("string");
	// cout << string(yytext) << endl;
	yylval=new Node(string(yytext),pnew);
	return STRING;
}

{SPACE} {
	/* ignore */
}

{LINEBREAK} {
	/* ignore */
}
{ETC} {
	/* ignore */
}
%%

int yywrap(){ return 1; }

void yyerror(const char* msg) {
    //sprintf(stderr, "%s\n", msg);
    printf("%s, %s, Line %d\n", yytext, msg, yylineno);
}
/*
int main(){
	return 0;
}
*/
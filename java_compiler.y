%{
#include <stdio.h>	 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;

%}


%token STRING 
%token CLASS 
%token SYSTEM_OUT_PRINTLN
%token EXTENDS
%token RETURN
%token STATIC
%token PRIVATE
%token PUBLIC
%token MAIN
%token DO
%token IF
%token ELSE
%token NEW
%token THIS
%token VOID
%token WHILE
%token TYPE_INT
%token TYPE_BOOLEAN
%token TYPE_STRING
%token TYPE_TAB_INT;
%token TYPE_TAB_STRING;
%token LENGTH
%token PARENTHESE_OUVRANTE
%token PARENTHESE_FERMANTE 
%token ACCOLADE_OUVRANTE
%token ACCOLADE_FERMANTE 
%token BRACKET_OUVRANTE
%token BRACKET_FERMANTE 
%token BOOLEAN_LITERAL
%token IDENTIFIER
%token INTEGER_LITERAL
%token COMMENT_BLOCK
%token MULTILINE_COMMENT
%token VIRGULE;
%token POINT_VIRGULE;
%token NOT;
%token AND;
%token OR;
%token POINT;
%token AFFECT;
%token DIFFERENT; 
%token EQUAL; 
%token ADD;
%token MINUS; 
%token MULT;
%token DIV; 
%token MOD; 
%token MORE;
%token LESS;

%start programme

%%
programme 	            : MainClass  ClassesDeclaration
                        | MainClass
			            | MainClass  ClassesDeclaration error  {yyerror ("Declaration is Invalid!"); }	
			            ;  
MainClass               : CLASS IDENTIFIER ACCOLADE_OUVRANTE PUBLIC STATIC VOID MAIN PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement ACCOLADE_FERMANTE ACCOLADE_FERMANTE
                        | error IDENTIFIER ACCOLADE_OUVRANTE PUBLIC STATIC VOID MAIN PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement ACCOLADE_FERMANTE ACCOLADE_FERMANTE {yyerror ("Declaration is Invalid : missing class keyword"); }
                        | CLASS error ACCOLADE_OUVRANTE PUBLIC STATIC VOID MAIN PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement ACCOLADE_FERMANTE ACCOLADE_FERMANTE {yyerror ("Declaration is Invalid : class name is not found"); }
                        | CLASS IDENTIFIER error PUBLIC STATIC VOID MAIN PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement ACCOLADE_FERMANTE ACCOLADE_FERMANTE {yyerror ("Declaration is Invalid : '{' expected but not found"); }
                        | CLASS IDENTIFIER ACCOLADE_OUVRANTE PUBLIC STATIC VOID error PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement ACCOLADE_FERMANTE ACCOLADE_FERMANTE {yyerror ("Declaration is Invalid : class main not found"); }
                        | CLASS IDENTIFIER ACCOLADE_OUVRANTE PUBLIC STATIC VOID MAIN error TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement ACCOLADE_FERMANTE ACCOLADE_FERMANTE {yyerror ("Declaration is Invalid : '(' expected but not found"); }
                        | CLASS IDENTIFIER ACCOLADE_OUVRANTE PUBLIC STATIC VOID MAIN PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER error ACCOLADE_OUVRANTE Statement ACCOLADE_FERMANTE ACCOLADE_FERMANTE {yyerror ("Declaration is Invalid : ')' expected but not found"); }
                        | CLASS IDENTIFIER ACCOLADE_OUVRANTE PUBLIC STATIC VOID MAIN PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement error ACCOLADE_FERMANTE {yyerror ("Declaration is Invalid : '}' expected but not found"); }
                        | CLASS IDENTIFIER ACCOLADE_OUVRANTE PUBLIC STATIC VOID MAIN PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement ACCOLADE_FERMANTE error {yyerror ("Declaration is Invalid : '}' expected but not found"); }
                        | CLASS IDENTIFIER ACCOLADE_OUVRANTE PUBLIC STATIC VOID MAIN PARENTHESE_OUVRANTE TYPE_TAB_STRING IDENTIFIER PARENTHESE_FERMANTE ACCOLADE_OUVRANTE Statement Statements ACCOLADE_FERMANTE ACCOLADE_FERMANTE {yyerror ("Declaration is Invalid : Too much Statements"); }
                        ;
ClassesDeclaration      : ClassDeclaration ClassesDeclaration
                        | ClassDeclaration
                        ; 
ClassDeclaration        : CLASS IDENTIFIER ExtendStatement ACCOLADE_OUVRANTE VarsDeclaration MethodsDeclaration ACCOLADE_FERMANTE
                        | CLASS IDENTIFIER ExtendStatement error VarsDeclaration MethodsDeclaration ACCOLADE_FERMANTE { yyerror ("Declaration is Invalid: Missing '{'"); }
                        | CLASS IDENTIFIER ExtendStatement ACCOLADE_OUVRANTE VarsDeclaration MethodsDeclaration error { yyerror ("Declaration is Invalid: Missing '}'"); }
                        ;
ExtendStatement         : EXTENDS IDENTIFIER
                        | 
                        ;                        
MethodsDeclaration      : MethodDeclaration MethodsDeclaration
                        | 
                        ;
MethodDeclaration       : PUBLIC Types IDENTIFIER PARENTHESE_OUVRANTE ArgsDeclaration PARENTHESE_FERMANTE ACCOLADE_OUVRANTE VarsDeclaration Statements RETURN Expression POINT_VIRGULE ACCOLADE_FERMANTE
                        | PUBLIC Types IDENTIFIER error ArgsDeclaration PARENTHESE_FERMANTE ACCOLADE_OUVRANTE VarsDeclaration Statements RETURN Expression POINT_VIRGULE ACCOLADE_FERMANTE   {yyerror ("Declaration is Invalid : missing '('"); } 
                        | PUBLIC Types IDENTIFIER PARENTHESE_OUVRANTE ArgsDeclaration error ACCOLADE_OUVRANTE VarsDeclaration Statements RETURN Expression POINT_VIRGULE ACCOLADE_FERMANTE   {yyerror ("Declaration is Invalid : missing ')'"); } 
                        | PUBLIC Types IDENTIFIER PARENTHESE_OUVRANTE ArgsDeclaration PARENTHESE_FERMANTE error VarsDeclaration Statements RETURN Expression POINT_VIRGULE ACCOLADE_FERMANTE   {yyerror ("Declaration is Invalid : missing '{'"); } 
                        | PUBLIC Types IDENTIFIER PARENTHESE_OUVRANTE ArgsDeclaration PARENTHESE_FERMANTE ACCOLADE_OUVRANTE VarsDeclaration Statements error Expression POINT_VIRGULE ACCOLADE_FERMANTE   {yyerror ("Declaration is Invalid : missing return Statement"); } 
                        | PUBLIC Types IDENTIFIER PARENTHESE_OUVRANTE ArgsDeclaration PARENTHESE_FERMANTE ACCOLADE_OUVRANTE VarsDeclaration Statements RETURN Expression error ACCOLADE_FERMANTE   {yyerror ("Declaration is Invalid : missing ';'"); } 
                        | PUBLIC Types IDENTIFIER PARENTHESE_OUVRANTE ArgsDeclaration PARENTHESE_FERMANTE ACCOLADE_OUVRANTE VarsDeclaration Statements RETURN Expression POINT_VIRGULE error   {yyerror ("Declaration is Invalid : missing '}'"); } 
                        ;
ArgsDeclaration         : ArgsDeclaration2
                        | 
                        ;
ArgsDeclaration2        : ArgDeclaration VIRGULE ArgsDeclaration
                        | ArgDeclaration
                        ;
ArgDeclaration          : Types IDENTIFIER
                        ;
VarsDeclaration         : VarDeclaration VarsDeclaration
                        | 
                        ;
VarDeclaration          : Types IDENTIFIER POINT_VIRGULE
                        | Types IDENTIFIER error {yyerror ("Declaration is Invalid : missing ';'"); } 
                        ;  
Types                   : TYPE_BOOLEAN
                        | TYPE_INT
                        | TYPE_STRING
                        | TYPE_TAB_INT
                        | TYPE_TAB_STRING
                        | IDENTIFIER
                        | VOID
                        ;
Statements              : Statement Statements
                        |
                        ; 
Statement               : ACCOLADE_OUVRANTE Statements ACCOLADE_FERMANTE
                        | ACCOLADE_OUVRANTE Statements error {yyerror ("Declaration is Invalid : '}' expected but not found"); }
                        | IF PARENTHESE_OUVRANTE Expression PARENTHESE_FERMANTE Statement ELSE Statement
                        | IF error Expression PARENTHESE_FERMANTE Statement ELSE Statement {yyerror ("Declaration is Invalid : '(' expected but not found"); }
                        | IF PARENTHESE_OUVRANTE Expression error Statement ELSE Statement {yyerror ("Declaration is Invalid : ')' expected but not found"); }
                        | IF PARENTHESE_OUVRANTE Expression PARENTHESE_FERMANTE Statement ELSE error {yyerror ("Declaration is Invalid : missing else block"); }
                        | WHILE PARENTHESE_OUVRANTE Expression PARENTHESE_FERMANTE Statement
                        | WHILE error Expression PARENTHESE_FERMANTE Statement {yyerror ("Declaration is Invalid : '(' expected but not found"); }
                        | WHILE PARENTHESE_OUVRANTE Expression error Statement {yyerror ("Declaration is Invalid : ')' expected but not found"); }
                        | WHILE PARENTHESE_OUVRANTE Expression PARENTHESE_FERMANTE error {yyerror ("Declaration is Invalid : missing loop block"); }
                        | SYSTEM_OUT_PRINTLN PARENTHESE_OUVRANTE Expression PARENTHESE_FERMANTE POINT_VIRGULE
                        | SYSTEM_OUT_PRINTLN PARENTHESE_OUVRANTE PARENTHESE_FERMANTE POINT_VIRGULE
                        | SYSTEM_OUT_PRINTLN error PARENTHESE_FERMANTE POINT_VIRGULE {yyerror ("Declaration is Invalid : '(' expected but not found"); }
                        | SYSTEM_OUT_PRINTLN PARENTHESE_OUVRANTE error POINT_VIRGULE {yyerror ("Declaration is Invalid : ')' expected but not found"); }
                        | SYSTEM_OUT_PRINTLN PARENTHESE_OUVRANTE PARENTHESE_FERMANTE error {yyerror ("Declaration is Invalid : ';' expected but not found"); }
                        | SYSTEM_OUT_PRINTLN error Expression PARENTHESE_FERMANTE POINT_VIRGULE {yyerror ("Declaration is Invalid : '(' expected but not found"); }
                        | SYSTEM_OUT_PRINTLN PARENTHESE_OUVRANTE Expression error POINT_VIRGULE {yyerror ("Declaration is Invalid : ')' expected but not found"); }
                        | SYSTEM_OUT_PRINTLN PARENTHESE_OUVRANTE Expression PARENTHESE_FERMANTE error {yyerror ("Declaration is Invalid : ';' expected but not found"); }
                        | IDENTIFIER AFFECT Expression POINT_VIRGULE
                        | IDENTIFIER AFFECT Expression error {yyerror ("Declaration is Invalid : ';' expected but not found"); }
                        | IDENTIFIER BRACKET_OUVRANTE Expression BRACKET_FERMANTE AFFECT Expression POINT_VIRGULE
                        | IDENTIFIER BRACKET_OUVRANTE Expression error AFFECT Expression POINT_VIRGULE {yyerror ("Declaration is Invalid : ']' expected but not found"); }
                        | IDENTIFIER BRACKET_OUVRANTE Expression BRACKET_FERMANTE AFFECT Expression error {yyerror ("Declaration is Invalid : ';' expected but not found"); }
Expression              : Expression OpLogic Expression 
                        | Expression BRACKET_OUVRANTE Expression BRACKET_FERMANTE
                        | Expression error Expression BRACKET_FERMANTE  {yyerror ("Declaration is Invalid : missing '['"); }                     
                        | Expression BRACKET_OUVRANTE Expression error  {yyerror ("Declaration is Invalid : missing ']'"); }                     
                        | Expression POINT LENGTH
                        | Expression POINT IDENTIFIER PARENTHESE_OUVRANTE Exp2 PARENTHESE_FERMANTE
                        | Expression POINT IDENTIFIER PARENTHESE_OUVRANTE Exp2 error {yyerror ("Declaration is Invalid : missing ')'"); } 
                        | Expression POINT IDENTIFIER error Exp2 PARENTHESE_FERMANTE {yyerror ("Declaration is Invalid : missing '('"); } 
                        | INTEGER_LITERAL
                        | BOOLEAN_LITERAL
                        | IDENTIFIER
                        | THIS
                        | NEW TYPE_INT BRACKET_OUVRANTE Expression BRACKET_FERMANTE
                        | NEW TYPE_INT error Expression BRACKET_FERMANTE {yyerror ("Declaration is Invalid : missing '[' "); }
                        | NEW TYPE_INT BRACKET_OUVRANTE Expression error {yyerror ("Declaration is Invalid : missing ']' "); }
                        | NEW IDENTIFIER PARENTHESE_OUVRANTE PARENTHESE_FERMANTE
                        | NEW IDENTIFIER error PARENTHESE_FERMANTE {yyerror ("Declaration is Invalid : missing '(' "); }
                        | NEW IDENTIFIER PARENTHESE_OUVRANTE error {yyerror ("Declaration is Invalid : missing ')' "); }
                        | NOT Expression
                        | PARENTHESE_OUVRANTE Expression PARENTHESE_FERMANTE
                        | error Expression PARENTHESE_FERMANTE {yyerror ("Declaration is Invalid : missing '(' "); }
                        | PARENTHESE_OUVRANTE Expression error {yyerror ("Declaration is Invalid : missing ')' "); }
                        | STRING
                        ;

OpLogic                 : AND | LESS | ADD | MINUS | MULT ;
Exp1                    : Exp1 VIRGULE Expression
                        |
                        ;
Exp2                    : Expression Exp1
                        |
                        ;
%% 

int yyerror(char const *msg) {
	fprintf(stderr, "%s in line %d\n", msg, yylineno-1);
	return 0;
}

extern FILE *yyin;

int main()
{
    yyparse(); 
}
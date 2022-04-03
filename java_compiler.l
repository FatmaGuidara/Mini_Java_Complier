%{	
#include <stdio.h>	
#include <stdlib.h>
#include "java_compiler.tab.h"	                                                                         	
#include <math.h>	 			
%}


%option yylineno
delim                    [ \t]
chiffre                  [0-9]
lettre                   [a-zA-Z]
illegal_identifier       [0-9][A-Za-z0-9_]*
litboolean		     	 (true|false) 
id                       ({lettre}|_|$)({lettre}|{chiffre}|_|$)*
nb                       ("-")?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
string                   \"[^\"]*\"
bl                       {delim}+
iderrone                 {chiffre}({lettre}|{chiffre})*
parOuvrante              (\()
parFermante              (\))
accOuvrante              (\{)
accFermante              (\})
brackOuvrante            (\[)
brackFermante            (\])
comment_start            \/\*
comment_end              \*\/
comment_block            {comment_start}(.|\n)*{comment_end}
COMMENT_LINE             "//"

%%

{bl}                    /* pas d'actions */
"\\n" 			        ++yylineno;
"\""(.*)""\"            return STRING;
"System.out.println"    return SYSTEM_OUT_PRINTLN;
"class"               	return CLASS;
"extends"               return EXTENDS;
"return"                return RETURN;
"static"                return STATIC;
"private"               return PRIVATE;
"public"                return PUBLIC;
"main"                  return MAIN;
"do"                    return DO;
"else"                  return ELSE;
"if"                    return IF;
"new"                   return NEW;
"this"                  return THIS;
"void"                  return VOID;
"while"                 return WHILE;
"int"                   return TYPE_INT;
"boolean"               return TYPE_BOOLEAN;
"String"                return TYPE_STRING;
"int"([[:blank:]]*)"[]"	return TYPE_TAB_INT;
"String"([ ]*)"[]"		return TYPE_TAB_STRING;
"length"                return LENGTH;
{parOuvrante}			return PARENTHESE_OUVRANTE;
{parFermante}			return PARENTHESE_FERMANTE;
{accOuvrante}			return ACCOLADE_OUVRANTE;
{accFermante}			return ACCOLADE_FERMANTE;
{brackOuvrante}			return BRACKET_OUVRANTE;
{brackFermante}			return BRACKET_FERMANTE;
{litboolean}            return BOOLEAN_LITERAL;
{id}                    return IDENTIFIER;
{nb}                    return INTEGER_LITERAL;
"*/"            			{fprintf(stderr,"forgot to open \'%s\' on line :%d\n",yytext,yylineno);}
{comment_block}				return COMMENT_BLOCK; 
"/*"([^*]|\*+[^*/])*\*+"/"	return MULTILINE_COMMENT;
"/*"([^*]|\*+[^*/])*		{fprintf(stderr,"Mutiline Comment non closed expected */ \'%s\' on line :%d \n",yytext,yylineno);}
","						return VIRGULE;
";"						return POINT_VIRGULE;
"!"						return NOT;
"&&"					return AND;
"||"					return OR;
"."						return POINT;
"="						return AFFECT;
"!="					return DIFFERENT; 
"=="					return EQUAL; 
"+"						return ADD;
"-"						return MINUS; 
"*"						return MULT;
"/"						return DIV; 
"%"						return MOD; 
">" 					return MORE;
"<"						return LESS;


{iderrone}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
.						{fprintf(stderr,"Illegal character \'%s\' on line :%d\n",yytext,yylineno);}


%%
int yywrap()
{
	return(1);
}
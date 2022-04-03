
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     CLASS = 259,
     SYSTEM_OUT_PRINTLN = 260,
     EXTENDS = 261,
     RETURN = 262,
     STATIC = 263,
     PRIVATE = 264,
     PUBLIC = 265,
     MAIN = 266,
     DO = 267,
     IF = 268,
     ELSE = 269,
     NEW = 270,
     THIS = 271,
     VOID = 272,
     WHILE = 273,
     TYPE_INT = 274,
     TYPE_BOOLEAN = 275,
     TYPE_STRING = 276,
     TYPE_TAB_INT = 277,
     TYPE_TAB_STRING = 278,
     LENGTH = 279,
     PARENTHESE_OUVRANTE = 280,
     PARENTHESE_FERMANTE = 281,
     ACCOLADE_OUVRANTE = 282,
     ACCOLADE_FERMANTE = 283,
     BRACKET_OUVRANTE = 284,
     BRACKET_FERMANTE = 285,
     BOOLEAN_LITERAL = 286,
     IDENTIFIER = 287,
     INTEGER_LITERAL = 288,
     COMMENT_BLOCK = 289,
     MULTILINE_COMMENT = 290,
     VIRGULE = 291,
     POINT_VIRGULE = 292,
     NOT = 293,
     AND = 294,
     OR = 295,
     POINT = 296,
     AFFECT = 297,
     DIFFERENT = 298,
     EQUAL = 299,
     ADD = 300,
     MINUS = 301,
     MULT = 302,
     DIV = 303,
     MOD = 304,
     MORE = 305,
     LESS = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



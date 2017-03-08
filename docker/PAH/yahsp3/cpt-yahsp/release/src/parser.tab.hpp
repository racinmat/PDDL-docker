/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
     DEFINE_TOK = 258,
     DOMAIN_TOK = 259,
     REQUIREMENTS_TOK = 260,
     TYPES_TOK = 261,
     CONSTANTS_TOK = 262,
     PREDICATES_TOK = 263,
     FUNCTIONS_TOK = 264,
     PROBLEM_TOK = 265,
     DOMNAME_TOK = 266,
     OBJECTS_TOK = 267,
     INIT_TOK = 268,
     GOAL_TOK = 269,
     METRIC_TOK = 270,
     ACTION_TOK = 271,
     PARAMETERS_TOK = 272,
     VARS_TOK = 273,
     DURATION_TOK = 274,
     REAL_DURATION_TOK = 275,
     PRECONDITION_TOK = 276,
     EFFECT_TOK = 277,
     CONSTRAINTS_TOK = 278,
     EITHER_TOK = 279,
     AND_TOK = 280,
     NOT_TOK = 281,
     ATSTART_TOK = 282,
     ATEND_TOK = 283,
     OVERALL_TOK = 284,
     EQ_TOK = 285,
     LTE_TOK = 286,
     GTE_TOK = 287,
     LT_TOK = 288,
     GT_TOK = 289,
     INC_TOK = 290,
     DEC_TOK = 291,
     ASS_TOK = 292,
     ADD_TOK = 293,
     SUB_TOK = 294,
     MUL_TOK = 295,
     DIV_TOK = 296,
     FAM_TOK = 297,
     LP = 298,
     RP = 299,
     NAME_TOK = 300,
     NUMBER_TOK = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 46 "parser.y"

  char *string;
  int number;
  gdsl_list_t list;
  PDDLOperator *ope;



/* Line 2068 of yacc.c  */
#line 105 "/home/stolba/planners/PAH2014_local/yahsp3/cpt-yahsp/release/src/parser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE pddl_lval;



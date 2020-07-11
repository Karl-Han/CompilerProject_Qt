/* A Bison parser, made by GNU Bison 3.6.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    Token_if = 258,                /* Token_if  */
    Token_else = 259,              /* Token_else  */
    Token_int = 260,               /* Token_int  */
    Token_void = 261,              /* Token_void  */
    Token_while = 262,             /* Token_while  */
    Token_return = 263,            /* Token_return  */
    Token_plus = 264,              /* Token_plus  */
    Token_minus = 265,             /* Token_minus  */
    Token_multiply = 266,          /* Token_multiply  */
    Token_divide = 267,            /* Token_divide  */
    Token_less = 268,              /* Token_less  */
    Token_lessEqual = 269,         /* Token_lessEqual  */
    Token_more = 270,              /* Token_more  */
    Token_moreEqual = 271,         /* Token_moreEqual  */
    Token_equal = 272,             /* Token_equal  */
    Token_noEqual = 273,           /* Token_noEqual  */
    Token_assign = 274,            /* Token_assign  */
    Token_semicolon = 275,         /* Token_semicolon  */
    Token_comma = 276,             /* Token_comma  */
    Toekn_smallBracket_left = 277, /* Toekn_smallBracket_left  */
    Token_smallBracket_right = 278, /* Token_smallBracket_right  */
    Token_middleBracket_left = 279, /* Token_middleBracket_left  */
    Token_middleBracket_right = 280, /* Token_middleBracket_right  */
    Token_largeBracket_left = 281, /* Token_largeBracket_left  */
    Token_largeBracket_right = 282, /* Token_largeBracket_right  */
    Token_number = 283,            /* Token_number  */
    Token_comment = 284,           /* Token_comment  */
    Token_identifier = 285,        /* Token_identifier  */
    Token_space = 286,             /* Token_space  */
    Token_none = 287,              /* Token_none  */
    Token_func = 288,              /* Token_func  */
    Token_compound = 289,          /* Token_compound  */
    Token_var = 290,               /* Token_var  */
    Token_para = 291,              /* Token_para  */
    Token_call = 292,              /* Token_call  */
    Token_var_dec = 293            /* Token_var_dec  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define Token_if 258
#define Token_else 259
#define Token_int 260
#define Token_void 261
#define Token_while 262
#define Token_return 263
#define Token_plus 264
#define Token_minus 265
#define Token_multiply 266
#define Token_divide 267
#define Token_less 268
#define Token_lessEqual 269
#define Token_more 270
#define Token_moreEqual 271
#define Token_equal 272
#define Token_noEqual 273
#define Token_assign 274
#define Token_semicolon 275
#define Token_comma 276
#define Toekn_smallBracket_left 277
#define Token_smallBracket_right 278
#define Token_middleBracket_left 279
#define Token_middleBracket_right 280
#define Token_largeBracket_left 281
#define Token_largeBracket_right 282
#define Token_number 283
#define Token_comment 284
#define Token_identifier 285
#define Token_space 286
#define Token_none 287
#define Token_func 288
#define Token_compound 289
#define Token_var 290
#define Token_para 291
#define Token_call 292
#define Token_var_dec 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "parser.y"

    void* tn;

#line 146 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

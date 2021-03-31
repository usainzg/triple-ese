/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     TIDENTIFIER = 258,
     TINTEGER = 259,
     TDOUBLE = 260,
     TCEQ = 261,
     TCNE = 262,
     TCLT = 263,
     TCLE = 264,
     TCGT = 265,
     TCGE = 266,
     TEQUAL = 267,
     TLPAREN = 268,
     TRPAREN = 269,
     TCOMMA = 270,
     TPLUS = 271,
     TMINUS = 272,
     TMUL = 273,
     TDIV = 274,
     TCOLON = 275,
     TSEMIC = 276,
     TASSIG = 277,
     RPROGRAM = 278,
     RIS = 279,
     RBEGIN = 280,
     RENDPROGRAM = 281,
     RVAR = 282,
     RINTEGER = 283,
     RFLOAT = 284,
     RIF = 285,
     RTHEN = 286,
     RELSE = 287,
     RENDIF = 288,
     RDO = 289,
     RWHILE = 290,
     RENDWHILE = 291
   };
#endif
/* Tokens.  */
#define TIDENTIFIER 258
#define TINTEGER 259
#define TDOUBLE 260
#define TCEQ 261
#define TCNE 262
#define TCLT 263
#define TCLE 264
#define TCGT 265
#define TCGE 266
#define TEQUAL 267
#define TLPAREN 268
#define TRPAREN 269
#define TCOMMA 270
#define TPLUS 271
#define TMINUS 272
#define TMUL 273
#define TDIV 274
#define TCOLON 275
#define TSEMIC 276
#define TASSIG 277
#define RPROGRAM 278
#define RIS 279
#define RBEGIN 280
#define RENDPROGRAM 281
#define RVAR 282
#define RINTEGER 283
#define RFLOAT 284
#define RIF 285
#define RTHEN 286
#define RELSE 287
#define RENDIF 288
#define RDO 289
#define RWHILE 290
#define RENDWHILE 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 31 "parser.y"
{
    string *str ; 
    vector<string> *list ;
    expresionstruct *expr ;
    int number ;
    vector<int> *lent ;
}
/* Line 1529 of yacc.c.  */
#line 129 "parser.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


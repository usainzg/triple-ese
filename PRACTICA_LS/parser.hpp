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
     TMUL = 261,
     TDIV = 262,
     TPLUS = 263,
     TMINUS = 264,
     TSEMIC = 265,
     TASSIG = 266,
     TLBRACE = 267,
     TRBRACE = 268,
     TLPAREN = 269,
     TRPAREN = 270,
     TCOMMA = 271,
     RPROGRAM = 272,
     RPROCEDURE = 273,
     RFLOAT = 274,
     RINTEGER = 275,
     RWHILE = 276,
     RUNTIL = 277,
     RIF = 278,
     RELSE = 279,
     RFOREVER = 280,
     RDO = 281,
     RSKIP = 282,
     REXIT = 283,
     RREAD = 284,
     RPRINTLN = 285,
     TCGLE = 286,
     TCLT = 287,
     TCLE = 288,
     TCGT = 289,
     TCGE = 290,
     TEQUAL = 291,
     TNEQUAL = 292
   };
#endif
/* Tokens.  */
#define TIDENTIFIER 258
#define TINTEGER 259
#define TDOUBLE 260
#define TMUL 261
#define TDIV 262
#define TPLUS 263
#define TMINUS 264
#define TSEMIC 265
#define TASSIG 266
#define TLBRACE 267
#define TRBRACE 268
#define TLPAREN 269
#define TRPAREN 270
#define TCOMMA 271
#define RPROGRAM 272
#define RPROCEDURE 273
#define RFLOAT 274
#define RINTEGER 275
#define RWHILE 276
#define RUNTIL 277
#define RIF 278
#define RELSE 279
#define RFOREVER 280
#define RDO 281
#define RSKIP 282
#define REXIT 283
#define RREAD 284
#define RPRINTLN 285
#define TCGLE 286
#define TCLT 287
#define TCLE 288
#define TCGT 289
#define TCGE 290
#define TEQUAL 291
#define TNEQUAL 292




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "parser.y"
{
    string *str ; 
}
/* Line 1529 of yacc.c.  */
#line 127 "parser.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


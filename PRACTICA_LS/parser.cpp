/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 3 "parser.y"

   #include <stdio.h>
   #include <iostream>
   #include <vector>
   #include <string>
   using namespace std; 
   
   extern int yylex();
   extern int yylineno;
   extern char *yytext;
   void yyerror (const char *msg) {
        printf("line %d: %s\n", yylineno, msg) ;
   }

   #include "Codigo.hpp"
   #include "Structs.hpp"

   Codigo codigo;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 26 "parser.y"
{
    std::string *str;
    lista_ident_strct *lident;
    resto_lista_id_strct *rlident;
    tipo_strct *tp;
    clase_par_strct *cp;
    lista_sentencias_strct *lsent;
    sentencia_strct *sent;
    m_strct *m;
    variable_strct *var;
    expresion_strct *expr; 
}
/* Line 193 of yacc.c.  */
#line 203 "parser.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 216 "parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,    13,    14,    20,    21,    24,    28,
      29,    31,    33,    36,    37,    38,    48,    52,    53,    54,
      60,    62,    64,    66,    72,    73,    76,    77,    82,    91,
     100,   116,   122,   125,   131,   137,   138,   140,   144,   148,
     152,   156,   160,   164,   168,   172,   176,   180,   182,   184,
     186
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    -1,    17,     3,    40,    41,    46,    12,
      54,    13,    -1,    -1,    45,    43,    42,    10,    41,    -1,
      -1,     3,    44,    -1,    16,     3,    44,    -1,    -1,    20,
      -1,    19,    -1,    47,    46,    -1,    -1,    -1,    18,     3,
      48,    49,    41,    46,    12,    54,    13,    -1,    14,    50,
      15,    -1,    -1,    -1,    45,    52,    43,    51,    53,    -1,
      35,    -1,    33,    -1,    31,    -1,    10,    45,    52,    43,
      53,    -1,    -1,    55,    54,    -1,    -1,    57,    11,    58,
      10,    -1,    23,    58,    12,    56,    54,    13,    56,    10,
      -1,    21,    25,    12,    56,    54,    13,    56,    10,    -1,
      26,    12,    56,    54,    13,    22,    56,    58,    24,    12,
      56,    54,    13,    56,    10,    -1,    27,    23,    58,    56,
      10,    -1,    28,    10,    -1,    29,    14,    57,    15,    10,
      -1,    30,    14,    58,    15,    10,    -1,    -1,     3,    -1,
      58,    36,    58,    -1,    58,    34,    58,    -1,    58,    32,
      58,    -1,    58,    35,    58,    -1,    58,    33,    58,    -1,
      58,    37,    58,    -1,    58,     8,    58,    -1,    58,     9,
      58,    -1,    58,     6,    58,    -1,    58,     7,    58,    -1,
      57,    -1,     4,    -1,     5,    -1,    14,    58,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    69,    76,    75,    78,    81,    90,    97,
     100,   101,   104,   105,   108,   108,   112,   113,   117,   116,
     122,   123,   124,   127,   128,   131,   133,   136,   144,   153,
     163,   175,   183,   190,   196,   206,   208,   212,   222,   232,
     242,   252,   262,   272,   281,   290,   299,   308,   316,   323,
     330
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENTIFIER", "TINTEGER", "TDOUBLE",
  "TMUL", "TDIV", "TPLUS", "TMINUS", "TSEMIC", "TASSIG", "TLBRACE",
  "TRBRACE", "TLPAREN", "TRPAREN", "TCOMMA", "RPROGRAM", "RPROCEDURE",
  "RFLOAT", "RINTEGER", "RWHILE", "RUNTIL", "RIF", "RELSE", "RFOREVER",
  "RDO", "RSKIP", "REXIT", "RREAD", "RPRINTLN", "TCGLE", "TCLT", "TCLE",
  "TCGT", "TCGE", "TEQUAL", "TNEQUAL", "$accept", "programa", "@1",
  "declaraciones", "@2", "lista_de_ident", "resto_lista_id", "tipo",
  "decl_de_subprogs", "decl_de_subprograma", "@3", "argumentos",
  "lista_de_param", "@4", "clase_par", "resto_lis_de_param",
  "lista_de_sentencias", "sentencia", "M", "variable", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    40,    39,    42,    41,    41,    43,    44,    44,
      45,    45,    46,    46,    48,    47,    49,    49,    51,    50,
      52,    52,    52,    53,    53,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     0,     5,     0,     2,     3,     0,
       1,     1,     2,     0,     0,     9,     3,     0,     0,     5,
       1,     1,     1,     5,     0,     2,     0,     4,     8,     8,
      15,     5,     2,     5,     5,     0,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     6,    11,    10,    13,     0,
       0,     0,    13,     9,     4,    14,    26,    12,     0,     7,
       0,    17,    36,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     9,     6,     0,     6,     0,    48,    49,
       0,    47,     0,    35,     0,    32,     0,     0,     3,    25,
       0,     8,     5,     0,     0,    13,    35,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,    26,
      35,     0,     0,     0,    22,    21,    20,     0,    16,     0,
      26,    50,    45,    46,    43,    44,    26,    39,    41,    38,
      40,    37,    42,     0,     0,     0,     0,    27,    18,    26,
       0,     0,     0,    31,    33,    34,    24,     0,    35,    35,
      35,     0,    19,    15,     0,     0,     0,     0,    29,    28,
       0,     0,     0,    24,    35,    23,    26,     0,    35,     0,
      30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     5,     8,    20,    14,    19,     9,    11,    12,
      21,    36,    54,   106,    77,   112,    30,    31,    69,    41,
      42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yytype_int16 yypact[] =
{
     -13,    19,    25,   -75,   -75,   -10,   -75,   -75,    11,    28,
      29,    22,    11,    30,   -75,   -75,   178,   -75,    45,   -75,
      41,    38,   -75,    40,     9,    42,    32,    57,    58,    60,
      55,   178,    64,    30,   -10,   -10,   -10,    59,   -75,   -75,
       9,   -75,    54,   -75,     9,   -75,    73,     9,   -75,   -75,
       9,   -75,   -75,   -15,    65,    11,   -75,    91,     9,     9,
       9,     9,   -75,     9,     9,     9,     9,     9,     9,   178,
     143,    66,   105,   123,   -75,   -75,   -75,    28,   -75,    67,
     178,   -75,    50,    50,     1,     1,   178,   143,   156,   156,
     156,   156,   156,    71,    75,    82,    84,   -75,   -75,   178,
      88,    89,    81,   -75,   -75,   -75,    85,    92,   -75,   -75,
     -75,   -10,   -75,   -75,    94,    97,     9,   -15,   -75,   -75,
     137,    28,    96,    85,   -75,   -75,   178,   102,   -75,    99,
     -75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -75,   -75,   -75,    -8,   -75,   -74,    83,   -33,    -6,   -75,
     -75,   -75,   -75,   -75,     0,    -5,   -30,   -75,   -51,   -16,
     -23
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      32,    49,    53,    98,     1,    80,    17,    58,    59,     6,
       7,    86,    22,    38,    39,    32,    74,    57,    75,    94,
      76,    70,     3,    40,    72,     4,    52,    73,    55,    10,
      71,    13,    15,    63,    16,    82,    83,    84,    85,    93,
      87,    88,    89,    90,    91,    92,    18,   123,    33,    79,
     100,    34,    35,    32,    43,    44,   101,   114,   115,   116,
      58,    59,    60,    61,    32,    37,    62,    45,    48,   107,
      32,    56,    46,   126,    47,    50,    22,   129,   117,    99,
      78,    95,    63,    32,   102,   103,    63,    64,    65,    66,
      67,    68,   104,   120,   105,   111,   127,    58,    59,    60,
      61,   108,   109,   110,   118,   113,    81,   119,   124,   130,
      32,    58,    59,    60,    61,   128,    51,   121,   125,     0,
      96,     0,     0,    63,    64,    65,    66,    67,    68,    58,
      59,    60,    61,    97,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    58,    59,    60,    61,     0,     0,    58,
      59,    60,    61,     0,     0,    63,    64,    65,    66,    67,
      68,   122,    58,    59,    60,    61,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    63,    64,    65,    66,    67,
      68,    22,     0,     0,     0,     0,     0,     0,    63,    -1,
      -1,    -1,    -1,    -1,     0,     0,     0,     0,     0,    23,
       0,    24,     0,     0,    25,    26,    27,    28,    29
};

static const yytype_int16 yycheck[] =
{
      16,    31,    35,    77,    17,    56,    12,     6,     7,    19,
      20,    62,     3,     4,     5,    31,    31,    40,    33,    70,
      35,    44,     3,    14,    47,     0,    34,    50,    36,    18,
      46,     3,     3,    32,    12,    58,    59,    60,    61,    69,
      63,    64,    65,    66,    67,    68,    16,   121,     3,    55,
      80,    10,    14,    69,    12,    23,    86,   108,   109,   110,
       6,     7,     8,     9,    80,    25,    12,    10,    13,    99,
      86,    12,    14,   124,    14,    11,     3,   128,   111,    12,
      15,    15,    32,    99,    13,    10,    32,    33,    34,    35,
      36,    37,    10,   116,    10,    10,   126,     6,     7,     8,
       9,    13,    13,    22,    10,    13,    15,    10,    12,    10,
     126,     6,     7,     8,     9,    13,    33,   117,   123,    -1,
      15,    -1,    -1,    32,    33,    34,    35,    36,    37,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,     6,     7,     8,     9,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    32,    33,    34,    35,    36,
      37,    24,     6,     7,     8,     9,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    32,    33,    34,    35,    36,
      37,     3,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    23,    -1,    -1,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    39,     3,     0,    40,    19,    20,    41,    45,
      18,    46,    47,     3,    43,     3,    12,    46,    16,    44,
      42,    48,     3,    21,    23,    26,    27,    28,    29,    30,
      54,    55,    57,     3,    10,    14,    49,    25,     4,     5,
      14,    57,    58,    12,    23,    10,    14,    14,    13,    54,
      11,    44,    41,    45,    50,    41,    12,    58,     6,     7,
       8,     9,    12,    32,    33,    34,    35,    36,    37,    56,
      58,    57,    58,    58,    31,    33,    35,    52,    15,    46,
      56,    15,    58,    58,    58,    58,    56,    58,    58,    58,
      58,    58,    58,    54,    56,    15,    15,    10,    43,    12,
      54,    54,    13,    10,    10,    10,    51,    54,    13,    13,
      22,    10,    53,    13,    56,    56,    56,    45,    10,    10,
      58,    52,    24,    43,    12,    53,    56,    54,    13,    56,
      10
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 70 "parser.y"
    { codigo.add_inst(*(yyvsp[(1) - (2)].str) + " " + *(yyvsp[(2) - (2)].str) + ";"); ;}
    break;

  case 3:
#line 72 "parser.y"
    { codigo.add_inst("halt;"); codigo.escribir(); ;}
    break;

  case 4:
#line 76 "parser.y"
    { codigo.add_decls((yyvsp[(2) - (2)].lident)->lnom, (yyvsp[(1) - (2)].tp)->clase); delete (yyvsp[(1) - (2)].tp); delete (yyvsp[(2) - (2)].lident); ;}
    break;

  case 7:
#line 82 "parser.y"
    { 
        (yyval.lident) = new lista_ident_strct; 
        (yyval.lident)->lnom = codigo.ini_lista(*(yyvsp[(1) - (2)].str));
        (yyval.lident)->lnom = *codigo.unir((yyval.lident)->lnom, (yyvsp[(2) - (2)].rlident)->lnom);
        delete (yyvsp[(2) - (2)].rlident);
    ;}
    break;

  case 8:
#line 91 "parser.y"
    {
        (yyval.rlident) = new resto_lista_id_strct;
        (yyval.rlident)->lnom = codigo.ini_lista(*(yyvsp[(2) - (3)].str));
        (yyval.rlident)->lnom = *codigo.unir((yyval.rlident)->lnom, (yyvsp[(3) - (3)].rlident)->lnom);
        delete (yyvsp[(3) - (3)].rlident);
    ;}
    break;

  case 9:
#line 97 "parser.y"
    { (yyval.rlident) = new resto_lista_id_strct; (yyval.rlident)->lnom = codigo.ini_lista(""); ;}
    break;

  case 10:
#line 100 "parser.y"
    { (yyval.tp) = new tipo_strct; (yyval.tp)->clase = "ent"; ;}
    break;

  case 11:
#line 101 "parser.y"
    { (yyval.tp) = new tipo_strct; (yyval.tp)->clase = "real"; ;}
    break;

  case 14:
#line 108 "parser.y"
    { codigo.add_inst(*(yyvsp[(1) - (2)].str) + " " + *(yyvsp[(2) - (2)].str));}
    break;

  case 15:
#line 109 "parser.y"
    { codigo.add_inst("endproc;"); ;}
    break;

  case 18:
#line 117 "parser.y"
    { codigo.add_params((yyvsp[(3) - (3)].lident)->lnom, (yyvsp[(2) - (3)].cp)->tipo, (yyvsp[(1) - (3)].tp)->clase); delete (yyvsp[(1) - (3)].tp); delete (yyvsp[(2) - (3)].cp); delete (yyvsp[(3) - (3)].lident); ;}
    break;

  case 20:
#line 122 "parser.y"
    { (yyval.cp) = new clase_par_strct; (yyval.cp)->tipo = "ref"; ;}
    break;

  case 21:
#line 123 "parser.y"
    { (yyval.cp) = new clase_par_strct; (yyval.cp)->tipo = "val"; ;}
    break;

  case 22:
#line 124 "parser.y"
    { (yyval.cp) = new clase_par_strct; (yyval.cp)->tipo = "ref"; ;}
    break;

  case 25:
#line 132 "parser.y"
    { (yyval.lsent) = new lista_sentencias_strct; (yyval.lsent)->exits = *codigo.unir((yyvsp[(1) - (2)].sent)->exits, (yyvsp[(2) - (2)].lsent)->exits); delete (yyvsp[(1) - (2)].sent); delete (yyvsp[(2) - (2)].lsent); ;}
    break;

  case 26:
#line 133 "parser.y"
    { (yyval.lsent) = new lista_sentencias_strct; (yyval.lsent)->exits = codigo.ini_lista(0); ;}
    break;

  case 27:
#line 137 "parser.y"
    {
        codigo.add_inst((yyvsp[(1) - (4)].var)->nom + " := " + (yyvsp[(3) - (4)].expr)->nom + ";");
		(yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
		delete (yyvsp[(1) - (4)].var); delete (yyvsp[(3) - (4)].expr);
    ;}
    break;

  case 28:
#line 145 "parser.y"
    {
        codigo.completar_insts((yyvsp[(2) - (8)].expr)->trues, (yyvsp[(4) - (8)].m)->ref);
		codigo.completar_insts((yyvsp[(2) - (8)].expr)->falses, (yyvsp[(7) - (8)].m)->ref);
		(yyval.sent) = new sentencia_strct; 
        (yyval.sent)->exits = (yyvsp[(5) - (8)].lsent)->exits;
        (yyval.sent)->skips = (yyvsp[(5) - (8)].lsent)->skips;
		delete (yyvsp[(2) - (8)].expr); delete (yyvsp[(4) - (8)].m); delete (yyvsp[(5) - (8)].lsent); delete (yyvsp[(7) - (8)].m);
    ;}
    break;

  case 29:
#line 154 "parser.y"
    {
        codigo.add_inst("goto" + to_string((yyvsp[(4) - (8)].m)->ref) + ";");
		codigo.completar_insts((yyvsp[(5) - (8)].lsent)->exits, (yyvsp[(7) - (8)].m)->ref + 1);
		(yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
		delete (yyvsp[(4) - (8)].m); delete (yyvsp[(5) - (8)].lsent); delete (yyvsp[(7) - (8)].m);

    ;}
    break;

  case 30:
#line 164 "parser.y"
    {
        codigo.completar_insts((yyvsp[(8) - (15)].expr)->trues, (yyvsp[(7) - (15)].m)->ref);
        codigo.completar_insts((yyvsp[(8) - (15)].expr)->falses, (yyvsp[(3) - (15)].m)->ref);
		codigo.completar_insts((yyvsp[(4) - (15)].lsent)->skips, (yyvsp[(7) - (15)].m)->ref);
        codigo.completar_insts((yyvsp[(4) - (15)].lsent)->exits, (yyvsp[(14) - (15)].m)->ref);
        codigo.completar_insts((yyvsp[(12) - (15)].lsent)->exits, (yyvsp[(14) - (15)].m)->ref);
		(yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
		delete (yyvsp[(3) - (15)].m); delete (yyvsp[(4) - (15)].lsent); delete (yyvsp[(7) - (15)].m); delete (yyvsp[(8) - (15)].expr); delete (yyvsp[(12) - (15)].lsent); delete (yyvsp[(14) - (15)].m);
    ;}
    break;

  case 31:
#line 176 "parser.y"
    {
        codigo.completar_insts((yyvsp[(3) - (5)].expr)->falses, (yyvsp[(4) - (5)].m)->ref);
        (yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
        delete (yyvsp[(3) - (5)].expr); delete (yyvsp[(4) - (5)].m);
    ;}
    break;

  case 32:
#line 184 "parser.y"
    {
        (yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(codigo.obten_ref());
        (yyval.sent)->skips = codigo.ini_lista(0);
        codigo.add_inst("goto");
    ;}
    break;

  case 33:
#line 191 "parser.y"
    {
        codigo.add_inst("read " + (yyvsp[(3) - (5)].var)->nom + ";");
		(yyval.sent) = new sentencia_strct; (yyval.sent)->exits = codigo.ini_lista(0);
		delete (yyvsp[(3) - (5)].var);
    ;}
    break;

  case 34:
#line 197 "parser.y"
    {
        codigo.add_inst("write " + (yyvsp[(3) - (5)].expr)->nom + ";");
		codigo.add_inst("writeln;");
		(yyval.sent) = new sentencia_strct; 
        (yyval.sent)->exits = codigo.ini_lista(0);
		delete (yyvsp[(3) - (5)].expr);
    ;}
    break;

  case 35:
#line 206 "parser.y"
    { (yyval.m) = new m_strct; (yyval.m)->ref = codigo.obten_ref(); ;}
    break;

  case 36:
#line 208 "parser.y"
    { (yyval.var) = new variable_strct; (yyval.var)->nom = *(yyvsp[(1) - (1)].str); ;}
    break;

  case 37:
#line 213 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[(1) - (3)].expr)->nom + " == " + (yyvsp[(3) - (3)].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 38:
#line 223 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[(1) - (3)].expr)->nom + " > " + (yyvsp[(3) - (3)].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 39:
#line 233 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[(1) - (3)].expr)->nom + " < " + (yyvsp[(3) - (3)].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 40:
#line 243 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[(1) - (3)].expr)->nom + " >= " + (yyvsp[(3) - (3)].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 41:
#line 253 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[(1) - (3)].expr)->nom + " <= " + (yyvsp[(3) - (3)].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 42:
#line 263 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[(1) - (3)].expr)->nom + " /= " + (yyvsp[(3) - (3)].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 43:
#line 273 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.nuevo_id();
        codigo.add_inst((yyval.expr)->nom + " := " + (yyvsp[(1) - (3)].expr)->nom + " + " + (yyvsp[(3) - (3)].expr)->nom + ";");
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 44:
#line 282 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.nuevo_id();
        codigo.add_inst((yyval.expr)->nom + " := " + (yyvsp[(1) - (3)].expr)->nom + " - " + (yyvsp[(3) - (3)].expr)->nom + ";");
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 45:
#line 291 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.nuevo_id();
        codigo.add_inst((yyval.expr)->nom + " := " + (yyvsp[(1) - (3)].expr)->nom + " * " + (yyvsp[(3) - (3)].expr)->nom + ";");
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 46:
#line 300 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.nuevo_id();
        codigo.add_inst((yyval.expr)->nom + " := " + (yyvsp[(1) - (3)].expr)->nom + " / " + (yyvsp[(3) - (3)].expr)->nom + ";");
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[(1) - (3)].expr); delete (yyvsp[(3) - (3)].expr);
    ;}
    break;

  case 47:
#line 309 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = (yyvsp[(1) - (1)].var)->nom;
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[(1) - (1)].var);
    ;}
    break;

  case 48:
#line 317 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = *(yyvsp[(1) - (1)].str);
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
    ;}
    break;

  case 49:
#line 324 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = *(yyvsp[(1) - (1)].str);
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
    ;}
    break;

  case 50:
#line 331 "parser.y"
    {
        (yyval.expr) = (yyvsp[(2) - (3)].expr); delete (yyvsp[(2) - (3)].expr);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1887 "parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}




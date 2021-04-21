/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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
   
   Codigo codigo;

#line 90 "parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIDENTIFIER = 3,                /* TIDENTIFIER  */
  YYSYMBOL_TINTEGER = 4,                   /* TINTEGER  */
  YYSYMBOL_TDOUBLE = 5,                    /* TDOUBLE  */
  YYSYMBOL_TMUL = 6,                       /* TMUL  */
  YYSYMBOL_TDIV = 7,                       /* TDIV  */
  YYSYMBOL_TPLUS = 8,                      /* TPLUS  */
  YYSYMBOL_TMINUS = 9,                     /* TMINUS  */
  YYSYMBOL_TSEMIC = 10,                    /* TSEMIC  */
  YYSYMBOL_TASSIG = 11,                    /* TASSIG  */
  YYSYMBOL_TLBRACE = 12,                   /* TLBRACE  */
  YYSYMBOL_TRBRACE = 13,                   /* TRBRACE  */
  YYSYMBOL_TLPAREN = 14,                   /* TLPAREN  */
  YYSYMBOL_TRPAREN = 15,                   /* TRPAREN  */
  YYSYMBOL_TCOMMA = 16,                    /* TCOMMA  */
  YYSYMBOL_RPROGRAM = 17,                  /* RPROGRAM  */
  YYSYMBOL_RPROCEDURE = 18,                /* RPROCEDURE  */
  YYSYMBOL_RFLOAT = 19,                    /* RFLOAT  */
  YYSYMBOL_RINTEGER = 20,                  /* RINTEGER  */
  YYSYMBOL_RWHILE = 21,                    /* RWHILE  */
  YYSYMBOL_RUNTIL = 22,                    /* RUNTIL  */
  YYSYMBOL_RIF = 23,                       /* RIF  */
  YYSYMBOL_RELSE = 24,                     /* RELSE  */
  YYSYMBOL_RFOREVER = 25,                  /* RFOREVER  */
  YYSYMBOL_RDO = 26,                       /* RDO  */
  YYSYMBOL_RSKIP = 27,                     /* RSKIP  */
  YYSYMBOL_REXIT = 28,                     /* REXIT  */
  YYSYMBOL_RREAD = 29,                     /* RREAD  */
  YYSYMBOL_RPRINTLN = 30,                  /* RPRINTLN  */
  YYSYMBOL_TCGLE = 31,                     /* TCGLE  */
  YYSYMBOL_TCLT = 32,                      /* TCLT  */
  YYSYMBOL_TCLE = 33,                      /* TCLE  */
  YYSYMBOL_TCGT = 34,                      /* TCGT  */
  YYSYMBOL_TCGE = 35,                      /* TCGE  */
  YYSYMBOL_TEQUAL = 36,                    /* TEQUAL  */
  YYSYMBOL_TNEQUAL = 37,                   /* TNEQUAL  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_programa = 39,                  /* programa  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_declaraciones = 41,             /* declaraciones  */
  YYSYMBOL_42_2 = 42,                      /* $@2  */
  YYSYMBOL_lista_de_ident = 43,            /* lista_de_ident  */
  YYSYMBOL_resto_lista_id = 44,            /* resto_lista_id  */
  YYSYMBOL_tipo = 45,                      /* tipo  */
  YYSYMBOL_decl_de_subprogs = 46,          /* decl_de_subprogs  */
  YYSYMBOL_decl_de_subprograma = 47,       /* decl_de_subprograma  */
  YYSYMBOL_48_3 = 48,                      /* $@3  */
  YYSYMBOL_argumentos = 49,                /* argumentos  */
  YYSYMBOL_lista_de_param = 50,            /* lista_de_param  */
  YYSYMBOL_51_4 = 51,                      /* $@4  */
  YYSYMBOL_clase_par = 52,                 /* clase_par  */
  YYSYMBOL_resto_lis_de_param = 53,        /* resto_lis_de_param  */
  YYSYMBOL_54_5 = 54,                      /* $@5  */
  YYSYMBOL_lista_de_sentencias = 55,       /* lista_de_sentencias  */
  YYSYMBOL_sentencia = 56,                 /* sentencia  */
  YYSYMBOL_M = 57,                         /* M  */
  YYSYMBOL_variable = 58,                  /* variable  */
  YYSYMBOL_expr = 59                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    68,    75,    74,    77,    80,    89,    96,
      99,   100,   103,   104,   107,   107,   111,   112,   116,   115,
     121,   122,   123,   127,   126,   129,   132,   140,   145,   153,
     162,   171,   183,   191,   198,   206,   217,   219,   223,   233,
     243,   253,   263,   273,   283,   292,   301,   310,   319,   327,
     334,   341
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TIDENTIFIER",
  "TINTEGER", "TDOUBLE", "TMUL", "TDIV", "TPLUS", "TMINUS", "TSEMIC",
  "TASSIG", "TLBRACE", "TRBRACE", "TLPAREN", "TRPAREN", "TCOMMA",
  "RPROGRAM", "RPROCEDURE", "RFLOAT", "RINTEGER", "RWHILE", "RUNTIL",
  "RIF", "RELSE", "RFOREVER", "RDO", "RSKIP", "REXIT", "RREAD", "RPRINTLN",
  "TCGLE", "TCLT", "TCLE", "TCGT", "TCGE", "TEQUAL", "TNEQUAL", "$accept",
  "programa", "$@1", "declaraciones", "$@2", "lista_de_ident",
  "resto_lista_id", "tipo", "decl_de_subprogs", "decl_de_subprograma",
  "$@3", "argumentos", "lista_de_param", "$@4", "clase_par",
  "resto_lis_de_param", "$@5", "lista_de_sentencias", "sentencia", "M",
  "variable", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,     4,    10,   -76,   -76,    12,   -76,   -76,     5,    17,
      26,    34,     5,    33,   -76,   -76,   186,   -76,    47,   -76,
      42,    40,   -76,    30,     8,    44,    35,   -76,    45,    46,
      48,   186,    51,    33,    12,    12,    12,    52,   -76,   -76,
       8,   -76,    69,   -76,     8,    53,    63,     8,   -76,   -76,
       8,   -76,   -76,   -17,    54,     5,   -76,    83,     8,     8,
       8,     8,   -76,     8,     8,     8,     8,     8,     8,   186,
     137,   -76,    65,   115,   125,   -76,   -76,   -76,    17,   -76,
      55,   186,   -76,    36,    36,     2,     2,   186,   137,   169,
     169,   169,   169,   169,    70,    72,    75,    76,   -76,   -76,
     186,    74,    82,    77,   -76,   -76,   -76,    86,    87,   -76,
     -76,   -76,    12,   -76,   -76,    97,    98,     8,   -17,   -76,
     -76,   131,    17,   100,   -76,   -76,    86,   186,   -76,    96,
     -76,   103,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     1,     6,    11,    10,    13,     0,
       0,     0,    13,     9,     4,    14,    27,    12,     0,     7,
       0,    17,    37,     0,     0,     0,     0,    36,     0,     0,
       0,    27,     0,     9,     6,     0,     6,     0,    49,    50,
       0,    48,     0,    36,     0,     0,     0,     0,     3,    26,
       0,     8,     5,     0,     0,    13,    36,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,    27,
      36,    33,     0,     0,     0,    22,    21,    20,     0,    16,
       0,    27,    51,    46,    47,    44,    45,    27,    40,    42,
      39,    41,    38,    43,     0,     0,     0,     0,    28,    18,
      27,     0,     0,     0,    32,    34,    35,    25,     0,    36,
      36,    36,     0,    19,    15,     0,     0,     0,     0,    30,
      29,     0,     0,     0,    23,    36,    25,    27,    24,     0,
      36,     0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -76,   -76,   -76,    -8,   -76,   -75,    81,   -33,    -7,   -76,
     -76,   -76,   -76,   -76,     7,     0,   -76,   -30,   -76,   -37,
     -16,   -23
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     5,     8,    20,    14,    19,     9,    11,    12,
      21,    36,    54,   107,    78,   113,   126,    30,    31,    45,
      41,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    49,    53,    99,     1,    17,    69,     3,    58,    59,
       4,    22,    38,    39,    75,    32,    76,    57,    77,    81,
      13,    70,    40,    10,    73,    87,    52,    74,    55,    15,
      72,     6,     7,    95,    63,    83,    84,    85,    86,    94,
      88,    89,    90,    91,    92,    93,    16,   124,    80,    18,
      33,   101,    34,    32,    35,    37,    43,   102,    44,    46,
      47,    48,    50,    71,    56,    32,    22,   100,    63,    79,
     108,    32,   115,   116,   117,    58,    59,    60,    61,   118,
      96,    62,   104,   103,    32,   105,   106,   109,   127,    58,
      59,    60,    61,   131,   121,   110,   112,   129,    82,   111,
     114,    63,    64,    65,    66,    67,    68,   119,   120,   130,
       0,    32,   125,   132,    51,    63,    64,    65,    66,    67,
      68,    58,    59,    60,    61,   122,   128,     0,     0,     0,
      97,    58,    59,    60,    61,    98,     0,    58,    59,    60,
      61,     0,     0,    58,    59,    60,    61,    63,    64,    65,
      66,    67,    68,     0,     0,   123,     0,    63,    64,    65,
      66,    67,    68,    63,    64,    65,    66,    67,    68,    63,
      64,    65,    66,    67,    68,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    -1,    -1,    -1,    -1,    -1,    23,     0,    24,
       0,     0,    25,    26,    27,    28,    29
};

static const yytype_int16 yycheck[] =
{
      16,    31,    35,    78,    17,    12,    43,     3,     6,     7,
       0,     3,     4,     5,    31,    31,    33,    40,    35,    56,
       3,    44,    14,    18,    47,    62,    34,    50,    36,     3,
      46,    19,    20,    70,    32,    58,    59,    60,    61,    69,
      63,    64,    65,    66,    67,    68,    12,   122,    55,    16,
       3,    81,    10,    69,    14,    25,    12,    87,    23,    14,
      14,    13,    11,    10,    12,    81,     3,    12,    32,    15,
     100,    87,   109,   110,   111,     6,     7,     8,     9,   112,
      15,    12,    10,    13,   100,    10,    10,    13,   125,     6,
       7,     8,     9,   130,   117,    13,    10,   127,    15,    22,
      13,    32,    33,    34,    35,    36,    37,    10,    10,    13,
      -1,   127,    12,    10,    33,    32,    33,    34,    35,    36,
      37,     6,     7,     8,     9,   118,   126,    -1,    -1,    -1,
      15,     6,     7,     8,     9,    10,    -1,     6,     7,     8,
       9,    -1,    -1,     6,     7,     8,     9,    32,    33,    34,
      35,    36,    37,    -1,    -1,    24,    -1,    32,    33,    34,
      35,    36,    37,    32,    33,    34,    35,    36,    37,    32,
      33,    34,    35,    36,    37,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    21,    -1,    23,
      -1,    -1,    26,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    39,     3,     0,    40,    19,    20,    41,    45,
      18,    46,    47,     3,    43,     3,    12,    46,    16,    44,
      42,    48,     3,    21,    23,    26,    27,    28,    29,    30,
      55,    56,    58,     3,    10,    14,    49,    25,     4,     5,
      14,    58,    59,    12,    23,    57,    14,    14,    13,    55,
      11,    44,    41,    45,    50,    41,    12,    59,     6,     7,
       8,     9,    12,    32,    33,    34,    35,    36,    37,    57,
      59,    10,    58,    59,    59,    31,    33,    35,    52,    15,
      46,    57,    15,    59,    59,    59,    59,    57,    59,    59,
      59,    59,    59,    59,    55,    57,    15,    15,    10,    43,
      12,    55,    55,    13,    10,    10,    10,    51,    55,    13,
      13,    22,    10,    53,    13,    57,    57,    57,    45,    10,
      10,    59,    52,    24,    43,    12,    54,    57,    53,    55,
      13,    57,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    39,    42,    41,    41,    43,    44,    44,
      45,    45,    46,    46,    48,    47,    49,    49,    51,    50,
      52,    52,    52,    54,    53,    53,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     8,     0,     5,     0,     2,     3,     0,
       1,     1,     2,     0,     0,     9,     3,     0,     0,     5,
       1,     1,     1,     0,     6,     0,     2,     0,     4,     8,
       8,    15,     5,     3,     5,     5,     0,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 69 "parser.y"
    { codigo.add_inst(*(yyvsp[-1].str) + " " + *(yyvsp[0].str) + ";"); }
#line 1503 "parser.cpp"
    break;

  case 3: /* programa: RPROGRAM TIDENTIFIER $@1 declaraciones decl_de_subprogs TLBRACE lista_de_sentencias TRBRACE  */
#line 71 "parser.y"
    { codigo.add_inst("halt;"); codigo.escribir(); }
#line 1509 "parser.cpp"
    break;

  case 4: /* $@2: %empty  */
#line 75 "parser.y"
    { codigo.add_decls((yyvsp[0].lident)->lnom, (yyvsp[-1].tp)->clase); delete (yyvsp[-1].tp); delete (yyvsp[0].lident); }
#line 1515 "parser.cpp"
    break;

  case 7: /* lista_de_ident: TIDENTIFIER resto_lista_id  */
#line 81 "parser.y"
    { 
        (yyval.lident) = new lista_ident_strct; 
        (yyval.lident)->lnom = codigo.ini_lista(*(yyvsp[-1].str));
        (yyval.lident)->lnom = *codigo.unir((yyval.lident)->lnom, (yyvsp[0].rlident)->lnom);
        delete (yyvsp[0].rlident);
    }
#line 1526 "parser.cpp"
    break;

  case 8: /* resto_lista_id: TCOMMA TIDENTIFIER resto_lista_id  */
#line 90 "parser.y"
    {
        (yyval.rlident) = new resto_lista_id_strct;
        (yyval.rlident)->lnom = codigo.ini_lista(*(yyvsp[-1].str));
        (yyval.rlident)->lnom = *codigo.unir((yyval.rlident)->lnom, (yyvsp[0].rlident)->lnom);
        delete (yyvsp[0].rlident);
    }
#line 1537 "parser.cpp"
    break;

  case 9: /* resto_lista_id: %empty  */
#line 96 "parser.y"
                  { (yyval.rlident) = new resto_lista_id_strct; (yyval.rlident)->lnom = codigo.ini_lista(""); }
#line 1543 "parser.cpp"
    break;

  case 10: /* tipo: RINTEGER  */
#line 99 "parser.y"
                { (yyval.tp) = new tipo_strct; (yyval.tp)->clase = "ent"; }
#line 1549 "parser.cpp"
    break;

  case 11: /* tipo: RFLOAT  */
#line 100 "parser.y"
             { (yyval.tp) = new tipo_strct; (yyval.tp)->clase = "real"; }
#line 1555 "parser.cpp"
    break;

  case 14: /* $@3: %empty  */
#line 107 "parser.y"
                                              { codigo.add_inst(*(yyvsp[-1].str) + " " + *(yyvsp[0].str) + ";"); }
#line 1561 "parser.cpp"
    break;

  case 15: /* decl_de_subprograma: RPROCEDURE TIDENTIFIER $@3 argumentos declaraciones decl_de_subprogs TLBRACE lista_de_sentencias TRBRACE  */
#line 108 "parser.y"
                                                         { codigo.add_inst("endproc;"); }
#line 1567 "parser.cpp"
    break;

  case 18: /* $@4: %empty  */
#line 116 "parser.y"
    { codigo.add_params((yyvsp[0].lident)->lnom, (yyvsp[-1].cp)->tipo, (yyvsp[-2].tp)->clase); delete (yyvsp[-2].tp); delete (yyvsp[-1].cp); delete (yyvsp[0].lident); }
#line 1573 "parser.cpp"
    break;

  case 20: /* clase_par: TCGE  */
#line 121 "parser.y"
         { (yyval.cp) = new clase_par_strct; (yyval.cp)->tipo = "ref"; }
#line 1579 "parser.cpp"
    break;

  case 21: /* clase_par: TCLE  */
#line 122 "parser.y"
           { (yyval.cp) = new clase_par_strct; (yyval.cp)->tipo = "val"; }
#line 1585 "parser.cpp"
    break;

  case 22: /* clase_par: TCGLE  */
#line 123 "parser.y"
            { (yyval.cp) = new clase_par_strct; (yyval.cp)->tipo = "ref"; }
#line 1591 "parser.cpp"
    break;

  case 23: /* $@5: %empty  */
#line 127 "parser.y"
    { codigo.add_params((yyvsp[0].lident)->lnom, (yyvsp[-1].cp)->tipo, (yyvsp[-2].tp)->clase); delete (yyvsp[-2].tp); delete (yyvsp[-1].cp); delete (yyvsp[0].lident); }
#line 1597 "parser.cpp"
    break;

  case 26: /* lista_de_sentencias: sentencia lista_de_sentencias  */
#line 133 "parser.y"
    { 
        (yyval.lsent) = new lista_sentencias_strct; 
        (yyval.lsent)->exits = *codigo.unir((yyvsp[-1].sent)->exits, (yyvsp[0].lsent)->exits); 
        (yyval.lsent)->skips = *codigo.unir((yyvsp[-1].sent)->skips, (yyvsp[0].lsent)->skips);
        delete (yyvsp[-1].sent); delete (yyvsp[0].lsent);
    }
#line 1608 "parser.cpp"
    break;

  case 27: /* lista_de_sentencias: %empty  */
#line 140 "parser.y"
    { 
        (yyval.lsent) = new lista_sentencias_strct; (yyval.lsent)->exits = codigo.ini_lista(0); (yyval.lsent)->skips = codigo.ini_lista(0); 
    }
#line 1616 "parser.cpp"
    break;

  case 28: /* sentencia: variable TASSIG expr TSEMIC  */
#line 146 "parser.y"
    {
        codigo.add_inst((yyvsp[-3].var)->nom + " := " + (yyvsp[-1].expr)->nom + ";");
		(yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
		delete (yyvsp[-3].var); delete (yyvsp[-1].expr);
    }
#line 1628 "parser.cpp"
    break;

  case 29: /* sentencia: RIF expr TLBRACE M lista_de_sentencias TRBRACE M TSEMIC  */
#line 154 "parser.y"
    {
        codigo.completar_insts((yyvsp[-6].expr)->trues, (yyvsp[-4].m)->ref);
		codigo.completar_insts((yyvsp[-6].expr)->falses, (yyvsp[-1].m)->ref);
		(yyval.sent) = new sentencia_strct; 
        (yyval.sent)->exits = (yyvsp[-3].lsent)->exits;
        (yyval.sent)->skips = (yyvsp[-3].lsent)->skips;
		delete (yyvsp[-6].expr); delete (yyvsp[-4].m); delete (yyvsp[-3].lsent); delete (yyvsp[-1].m);
    }
#line 1641 "parser.cpp"
    break;

  case 30: /* sentencia: RWHILE RFOREVER TLBRACE M lista_de_sentencias TRBRACE M TSEMIC  */
#line 163 "parser.y"
    {
        codigo.add_inst("goto" + to_string((yyvsp[-4].m)->ref) + ";");
		codigo.completar_insts((yyvsp[-3].lsent)->exits, (yyvsp[-1].m)->ref + 1);
		(yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
		delete (yyvsp[-4].m); delete (yyvsp[-3].lsent); delete (yyvsp[-1].m);
    }
#line 1654 "parser.cpp"
    break;

  case 31: /* sentencia: RDO TLBRACE M lista_de_sentencias TRBRACE RUNTIL M expr RELSE TLBRACE M lista_de_sentencias TRBRACE M TSEMIC  */
#line 172 "parser.y"
    {
        codigo.completar_insts((yyvsp[-7].expr)->trues, (yyvsp[-4].m)->ref);
        codigo.completar_insts((yyvsp[-7].expr)->falses, (yyvsp[-12].m)->ref);
		codigo.completar_insts((yyvsp[-11].lsent)->skips, (yyvsp[-8].m)->ref);
        codigo.completar_insts((yyvsp[-11].lsent)->exits, (yyvsp[-1].m)->ref);
        codigo.completar_insts((yyvsp[-3].lsent)->exits, (yyvsp[-1].m)->ref);
		(yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
		delete (yyvsp[-12].m); delete (yyvsp[-11].lsent); delete (yyvsp[-8].m); delete (yyvsp[-7].expr); delete (yyvsp[-4].m); delete (yyvsp[-3].lsent); delete (yyvsp[-1].m);
    }
#line 1670 "parser.cpp"
    break;

  case 32: /* sentencia: RSKIP RIF expr M TSEMIC  */
#line 184 "parser.y"
    {
        codigo.completar_insts((yyvsp[-2].expr)->falses, (yyvsp[-1].m)->ref);
        (yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = (yyvsp[-2].expr)->trues;
        delete (yyvsp[-2].expr); delete (yyvsp[-1].m);
    }
#line 1682 "parser.cpp"
    break;

  case 33: /* sentencia: REXIT M TSEMIC  */
#line 192 "parser.y"
    {
        (yyval.sent) = new sentencia_strct;
		(yyval.sent)->exits = codigo.ini_lista(codigo.obten_ref());
        (yyval.sent)->skips = codigo.ini_lista(0);
        codigo.add_inst("goto");
    }
#line 1693 "parser.cpp"
    break;

  case 34: /* sentencia: RREAD TLPAREN variable TRPAREN TSEMIC  */
#line 199 "parser.y"
    {
        codigo.add_inst("read " + (yyvsp[-2].var)->nom + ";");
		(yyval.sent) = new sentencia_strct; 
        (yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
		delete (yyvsp[-2].var);
    }
#line 1705 "parser.cpp"
    break;

  case 35: /* sentencia: RPRINTLN TLPAREN expr TRPAREN TSEMIC  */
#line 207 "parser.y"
    {
        codigo.add_inst("write " + (yyvsp[-2].expr)->nom + ";");
		codigo.add_inst("writeln;");
		(yyval.sent) = new sentencia_strct; 
        (yyval.sent)->exits = codigo.ini_lista(0);
        (yyval.sent)->skips = codigo.ini_lista(0);
		delete (yyvsp[-2].expr);
    }
#line 1718 "parser.cpp"
    break;

  case 36: /* M: %empty  */
#line 217 "parser.y"
   { (yyval.m) = new m_strct; (yyval.m)->ref = codigo.obten_ref(); }
#line 1724 "parser.cpp"
    break;

  case 37: /* variable: TIDENTIFIER  */
#line 219 "parser.y"
                       { (yyval.var) = new variable_strct; (yyval.var)->nom = *(yyvsp[0].str); }
#line 1730 "parser.cpp"
    break;

  case 38: /* expr: expr TEQUAL expr  */
#line 224 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[-2].expr)->nom + " == " + (yyvsp[0].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1744 "parser.cpp"
    break;

  case 39: /* expr: expr TCGT expr  */
#line 234 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[-2].expr)->nom + " > " + (yyvsp[0].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1758 "parser.cpp"
    break;

  case 40: /* expr: expr TCLT expr  */
#line 244 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[-2].expr)->nom + " < " + (yyvsp[0].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1772 "parser.cpp"
    break;

  case 41: /* expr: expr TCGE expr  */
#line 254 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[-2].expr)->nom + " >= " + (yyvsp[0].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1786 "parser.cpp"
    break;

  case 42: /* expr: expr TCLE expr  */
#line 264 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[-2].expr)->nom + " <= " + (yyvsp[0].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1800 "parser.cpp"
    break;

  case 43: /* expr: expr TNEQUAL expr  */
#line 274 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.ini_nom();
        (yyval.expr)->trues = codigo.ini_lista(codigo.obten_ref());
        (yyval.expr)->falses = codigo.ini_lista(codigo.obten_ref()+1);
        codigo.add_inst("if " + (yyvsp[-2].expr)->nom + " /= " + (yyvsp[0].expr)->nom + " goto");
        codigo.add_inst("goto");
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1814 "parser.cpp"
    break;

  case 44: /* expr: expr TPLUS expr  */
#line 284 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.nuevo_id();
        codigo.add_inst((yyval.expr)->nom + " := " + (yyvsp[-2].expr)->nom + " + " + (yyvsp[0].expr)->nom + ";");
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        //delete $1; delete $3;
    }
#line 1827 "parser.cpp"
    break;

  case 45: /* expr: expr TMINUS expr  */
#line 293 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.nuevo_id();
        codigo.add_inst((yyval.expr)->nom + " := " + (yyvsp[-2].expr)->nom + " - " + (yyvsp[0].expr)->nom + ";");
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1840 "parser.cpp"
    break;

  case 46: /* expr: expr TMUL expr  */
#line 302 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.nuevo_id();
        codigo.add_inst((yyval.expr)->nom + " := " + (yyvsp[-2].expr)->nom + " * " + (yyvsp[0].expr)->nom + ";");
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1853 "parser.cpp"
    break;

  case 47: /* expr: expr TDIV expr  */
#line 311 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = codigo.nuevo_id();
        codigo.add_inst((yyval.expr)->nom + " := " + (yyvsp[-2].expr)->nom + " / " + (yyvsp[0].expr)->nom + ";");
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[-2].expr); delete (yyvsp[0].expr);
    }
#line 1866 "parser.cpp"
    break;

  case 48: /* expr: variable  */
#line 320 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = (yyvsp[0].var)->nom;
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
        delete (yyvsp[0].var);
    }
#line 1878 "parser.cpp"
    break;

  case 49: /* expr: TINTEGER  */
#line 328 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = *(yyvsp[0].str);
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
    }
#line 1889 "parser.cpp"
    break;

  case 50: /* expr: TDOUBLE  */
#line 335 "parser.y"
    {
        (yyval.expr) = new expresion_strct;
        (yyval.expr)->nom = *(yyvsp[0].str);
        (yyval.expr)->trues = codigo.ini_lista(0);
        (yyval.expr)->falses = codigo.ini_lista(0);
    }
#line 1900 "parser.cpp"
    break;

  case 51: /* expr: TLPAREN expr TRPAREN  */
#line 342 "parser.y"
    {
        (yyval.expr) = (yyvsp[-1].expr); delete (yyvsp[-1].expr);
    }
#line 1908 "parser.cpp"
    break;


#line 1912 "parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}


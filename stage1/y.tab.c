/* A Bison parser, made by GNU Bison 3.6.2.  */

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
#define YYBISON_VERSION "3.6.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

/*
 * Token_if = 128, Token_else, Token_int, 
 * 	Token_void, Token_while, Token_return,
 * Token_plus, Token_minus, Token_multiply, Token_divide,
 * 	Token_less, Token_lessEqual, Token_more, Token_moreEqual,
 * 	Token_equal, Token_noEqual, Token_assign, Token_semicolon,
 * 	Token_comma, Toekn_smallBracket_left, Token_smallBracket_right,
 * 	Token_middleBracket_left, Token_middleBracket_right, 
 * 	Token_largeBracket_left, Token_largeBracket_right,
 * Token_number, Token_comment, Token_identifier, Token_space, Token_none
 */
 /*
  * Extra token
  * Token_func_dec, Token_compound, Token_var_dec, Token_para
  */
#include "token.h"
#include <stdio.h>
// y reduce to x
#define TRAN(x,y) // printf("%s reduce to %s\n", y, x)
// yydebug = 1;
TreeNode* root;


#line 96 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 228 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Token_if = 3,                   /* Token_if  */
  YYSYMBOL_Token_else = 4,                 /* Token_else  */
  YYSYMBOL_Token_int = 5,                  /* Token_int  */
  YYSYMBOL_Token_void = 6,                 /* Token_void  */
  YYSYMBOL_Token_while = 7,                /* Token_while  */
  YYSYMBOL_Token_return = 8,               /* Token_return  */
  YYSYMBOL_Token_plus = 9,                 /* Token_plus  */
  YYSYMBOL_Token_minus = 10,               /* Token_minus  */
  YYSYMBOL_Token_multiply = 11,            /* Token_multiply  */
  YYSYMBOL_Token_divide = 12,              /* Token_divide  */
  YYSYMBOL_Token_less = 13,                /* Token_less  */
  YYSYMBOL_Token_lessEqual = 14,           /* Token_lessEqual  */
  YYSYMBOL_Token_more = 15,                /* Token_more  */
  YYSYMBOL_Token_moreEqual = 16,           /* Token_moreEqual  */
  YYSYMBOL_Token_equal = 17,               /* Token_equal  */
  YYSYMBOL_Token_noEqual = 18,             /* Token_noEqual  */
  YYSYMBOL_Token_assign = 19,              /* Token_assign  */
  YYSYMBOL_Token_semicolon = 20,           /* Token_semicolon  */
  YYSYMBOL_Token_comma = 21,               /* Token_comma  */
  YYSYMBOL_Toekn_smallBracket_left = 22,   /* Toekn_smallBracket_left  */
  YYSYMBOL_Token_smallBracket_right = 23,  /* Token_smallBracket_right  */
  YYSYMBOL_Token_middleBracket_left = 24,  /* Token_middleBracket_left  */
  YYSYMBOL_Token_middleBracket_right = 25, /* Token_middleBracket_right  */
  YYSYMBOL_Token_largeBracket_left = 26,   /* Token_largeBracket_left  */
  YYSYMBOL_Token_largeBracket_right = 27,  /* Token_largeBracket_right  */
  YYSYMBOL_Token_number = 28,              /* Token_number  */
  YYSYMBOL_Token_comment = 29,             /* Token_comment  */
  YYSYMBOL_Token_identifier = 30,          /* Token_identifier  */
  YYSYMBOL_Token_space = 31,               /* Token_space  */
  YYSYMBOL_Token_none = 32,                /* Token_none  */
  YYSYMBOL_Token_func = 33,                /* Token_func  */
  YYSYMBOL_Token_compound = 34,            /* Token_compound  */
  YYSYMBOL_Token_var = 35,                 /* Token_var  */
  YYSYMBOL_Token_para = 36,                /* Token_para  */
  YYSYMBOL_Token_call = 37,                /* Token_call  */
  YYSYMBOL_Token_var_dec = 38,             /* Token_var_dec  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_dec_list = 41,                  /* dec_list  */
  YYSYMBOL_dec_list_sub = 42,              /* dec_list_sub  */
  YYSYMBOL_declaration = 43,               /* declaration  */
  YYSYMBOL_var_dec = 44,                   /* var_dec  */
  YYSYMBOL_type = 45,                      /* type  */
  YYSYMBOL_func_dec = 46,                  /* func_dec  */
  YYSYMBOL_params = 47,                    /* params  */
  YYSYMBOL_params_list = 48,               /* params_list  */
  YYSYMBOL_params_list_sub = 49,           /* params_list_sub  */
  YYSYMBOL_param = 50,                     /* param  */
  YYSYMBOL_compoud_st = 51,                /* compoud_st  */
  YYSYMBOL_local_dec = 52,                 /* local_dec  */
  YYSYMBOL_stmt_list = 53,                 /* stmt_list  */
  YYSYMBOL_statement = 54,                 /* statement  */
  YYSYMBOL_exp_st = 55,                    /* exp_st  */
  YYSYMBOL_selection_st = 56,              /* selection_st  */
  YYSYMBOL_iteration_st = 57,              /* iteration_st  */
  YYSYMBOL_return_st = 58,                 /* return_st  */
  YYSYMBOL_exp = 59,                       /* exp  */
  YYSYMBOL_var = 60,                       /* var  */
  YYSYMBOL_simple_exp = 61,                /* simple_exp  */
  YYSYMBOL_relop = 62,                     /* relop  */
  YYSYMBOL_additive_exp = 63,              /* additive_exp  */
  YYSYMBOL_addop = 64,                     /* addop  */
  YYSYMBOL_term = 65,                      /* term  */
  YYSYMBOL_mulop = 66,                     /* mulop  */
  YYSYMBOL_factor = 67,                    /* factor  */
  YYSYMBOL_call = 68,                      /* call  */
  YYSYMBOL_args = 69,                      /* args  */
  YYSYMBOL_arg_list = 70,                  /* arg_list  */
  YYSYMBOL_arg_list_sub = 71               /* arg_list_sub  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   98

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

#define YYMAXUTOK   293


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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINEYYN -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    84,    84,    87,    90,    91,    94,    95,    98,    99,
     102,   103,   106,   107,   110,   111,   114,   117,   118,   122,
     123,   126,   129,   130,   133,   134,   137,   138,   139,   140,
     141,   144,   145,   148,   149,   152,   155,   156,   159,   160,
     163,   164,   167,   168,   171,   172,   173,   174,   175,   176,
     179,   180,   183,   184,   187,   188,   191,   192,   195,   196,
     197,   198,   201,   204,   205,   208,   211,   212
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
  "\"end of file\"", "error", "\"invalid token\"", "Token_if",
  "Token_else", "Token_int", "Token_void", "Token_while", "Token_return",
  "Token_plus", "Token_minus", "Token_multiply", "Token_divide",
  "Token_less", "Token_lessEqual", "Token_more", "Token_moreEqual",
  "Token_equal", "Token_noEqual", "Token_assign", "Token_semicolon",
  "Token_comma", "Toekn_smallBracket_left", "Token_smallBracket_right",
  "Token_middleBracket_left", "Token_middleBracket_right",
  "Token_largeBracket_left", "Token_largeBracket_right", "Token_number",
  "Token_comment", "Token_identifier", "Token_space", "Token_none",
  "Token_func", "Token_compound", "Token_var", "Token_para", "Token_call",
  "Token_var_dec", "$accept", "program", "dec_list", "dec_list_sub",
  "declaration", "var_dec", "type", "func_dec", "params", "params_list",
  "params_list_sub", "param", "compoud_st", "local_dec", "stmt_list",
  "statement", "exp_st", "selection_st", "iteration_st", "return_st",
  "exp", "var", "simple_exp", "relop", "additive_exp", "addop", "term",
  "mulop", "factor", "call", "args", "arg_list", "arg_list_sub", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-16)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACTSTATE-NUM -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       0,   -73,   -73,    39,     2,   -73,     0,   -73,   -19,   -73,
     -73,    39,     8,    11,   -73,   -73,     0,    35,   -73,     3,
      10,    31,   -13,   -73,    30,   -73,    32,   -73,    40,    11,
     -73,   -73,   -73,   -73,    48,    51,   -73,    33,    50,   -73,
     -73,   -73,   -73,    58,    41,    30,    30,   -73,    52,    53,
      30,    30,   -73,   -73,   -73,    30,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,    30,    30,   -73,   -73,    30,    54,
      43,    55,   -73,    59,    46,    60,    61,   -73,   -73,    64,
      63,   -73,    57,   -73,   -73,    56,    50,   -73,    65,   -73,
      39,   -73,    68,    11,    11,    30,   -73,   -73,   -73,    66,
      59,   -73,    71,   -73,    64,   -73,   -73,    11,   -73,   -73
};

  /* YYDEFACTSTATE-NUM -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    10,    11,    23,     0,     2,     5,     6,     0,     7,
      13,    23,     0,    25,     1,     3,     5,     0,    22,     0,
       0,     0,     0,    32,     0,    61,    40,    27,     0,    25,
      26,    28,    29,    30,     0,    59,    39,    43,    51,    55,
      60,     4,     8,     0,     0,     0,     0,    36,     0,     0,
      64,     0,    21,    24,    31,     0,    52,    53,    44,    45,
      46,    47,    48,    49,     0,     0,    56,    57,     0,    11,
       0,     0,    14,    18,     0,     0,     0,    37,    58,    67,
       0,    63,     0,    38,    59,    42,    50,    54,    19,    12,
       0,    16,     0,     0,     0,     0,    65,    62,    41,     0,
      18,     9,    33,    35,    67,    20,    17,     0,    66,    34
};

  /* YYPGOTONTERM-NUM.  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -73,    74,    79,    25,    -3,   -73,   -73,   -73,
      -8,    -9,     4,    82,    67,   -72,   -73,   -73,   -73,   -73,
     -21,   -52,   -73,   -73,    34,   -73,    29,   -73,    27,   -73,
     -73,   -73,    -7
};

  /* YYDEFGOTONTERM-NUM.  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,    15,    16,     7,     8,     9,    71,    72,
      91,    73,    27,    13,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    64,    37,    65,    38,    68,    39,    40,
      80,    81,    96
};

  /* YYTABLEYYPACT[STATE-NUM] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      12,    48,    14,    49,    10,     1,     2,    47,    12,    24,
      10,    17,    84,    84,    20,    25,    84,    26,    21,    22,
      10,   102,   103,    42,    75,    76,     3,    44,    11,    79,
      82,    23,    45,    24,    83,   109,    11,     3,    19,    25,
      70,    26,    56,    57,     1,     2,    58,    59,    60,    61,
      62,    63,    24,    46,    50,    42,    51,    43,    25,    44,
      26,    66,    67,     1,    69,    56,    57,    52,    54,    74,
      55,    92,    77,    88,   104,   107,    78,   -15,    89,     6,
      90,   100,    98,    93,    94,    95,    97,    70,   101,    99,
      41,   105,   106,    18,    86,    87,    53,   108,    85
};

static const yytype_int8 yycheck[] =
{
       3,    22,     0,    24,     0,     5,     6,    20,    11,    22,
       6,    30,    64,    65,     3,    28,    68,    30,     7,     8,
      16,    93,    94,    20,    45,    46,    26,    24,     3,    50,
      51,    20,    22,    22,    55,   107,    11,    26,    30,    28,
      43,    30,     9,    10,     5,     6,    13,    14,    15,    16,
      17,    18,    22,    22,    22,    20,    24,    22,    28,    24,
      30,    11,    12,     5,     6,     9,    10,    27,    20,    28,
      19,    25,    20,    30,    95,     4,    23,    23,    23,     0,
      21,    90,    25,    23,    23,    21,    23,    90,    20,    24,
      16,    25,   100,    11,    65,    68,    29,   104,    64
};

  /* YYSTOSSTATE-NUM -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,    26,    40,    41,    43,    44,    45,    46,
      51,    44,    45,    52,     0,    42,    43,    30,    52,    30,
       3,     7,     8,    20,    22,    28,    30,    51,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    63,    65,    67,
      68,    42,    20,    22,    24,    22,    22,    20,    59,    59,
      22,    24,    27,    53,    20,    19,     9,    10,    13,    14,
      15,    16,    17,    18,    62,    64,    11,    12,    66,     6,
      45,    47,    48,    50,    28,    59,    59,    20,    23,    59,
      69,    70,    59,    59,    60,    63,    65,    67,    30,    23,
      21,    49,    25,    23,    23,    21,    71,    23,    25,    24,
      50,    20,    54,    54,    59,    25,    49,     4,    71,    54
};

  /* YYR1YYN -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    42,    42,    43,    43,    44,    44,
      45,    45,    46,    46,    47,    47,    48,    49,    49,    50,
      50,    51,    52,    52,    53,    53,    54,    54,    54,    54,
      54,    55,    55,    56,    56,    57,    58,    58,    59,    59,
      60,    60,    61,    61,    62,    62,    62,    62,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      67,    67,    68,    69,    69,    70,    71,    71
};

  /* YYR2YYN -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     1,     3,     6,
       1,     1,     5,     1,     1,     1,     2,     3,     0,     2,
       4,     4,     2,     0,     2,     0,     1,     1,     1,     1,
       1,     2,     1,     5,     7,     5,     2,     3,     3,     1,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     4,     1,     0,     2,     3,     0
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


/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
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

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


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
  case 2:
#line 84 "parser.y"
                                                        {TRAN("program", "dec_list"); (yyval.tn) = (yyvsp[0].tn); root = (yyval.tn);}
#line 1632 "y.tab.c"
    break;

  case 3:
#line 87 "parser.y"
                                                        {TRAN("dec_list","dec, dec_list_sub");TreeNode* tn = (yyvsp[-1].tn); tn->sibling = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1638 "y.tab.c"
    break;

  case 4:
#line 90 "parser.y"
                                                        {TRAN("dec_list_sub","dec, dec_list_sub");TreeNode* tn = (yyvsp[-1].tn); tn->sibling = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1644 "y.tab.c"
    break;

  case 5:
#line 91 "parser.y"
                                                        {TRAN("dec_list_sub","epsilon"); (yyval.tn) = NULL; }
#line 1650 "y.tab.c"
    break;

  case 6:
#line 94 "parser.y"
                                                        {TRAN("dec","var_dec"); (yyval.tn) = (yyvsp[0].tn); }
#line 1656 "y.tab.c"
    break;

  case 7:
#line 95 "parser.y"
                                                        {TRAN("dec","func_dec"); (yyval.tn) = (yyvsp[0].tn); }
#line 1662 "y.tab.c"
    break;

  case 8:
#line 98 "parser.y"
                                                                        {TRAN("var_dec","var ID;");TreeNode* tn = getTreeNode(Token_var_dec); tn->child[0] = (yyvsp[-2].tn); tn->child[1] = (yyvsp[-1].tn); (yyval.tn) = tn;}
#line 1668 "y.tab.c"
    break;

  case 9:
#line 99 "parser.y"
                                                                                                                                {TRAN("var_dec","var ID[];");TreeNode* tn = getTreeNode(Token_var_dec); tn->child[0] = (yyvsp[-5].tn); tn->child[1] = (yyvsp[-4].tn); tn->child[2] = (yyvsp[-2].tn); (yyval.tn) = tn;}
#line 1674 "y.tab.c"
    break;

  case 10:
#line 102 "parser.y"
                                                        {TRAN("type", "Token_int"); (yyval.tn) = (yyvsp[0].tn); }
#line 1680 "y.tab.c"
    break;

  case 11:
#line 103 "parser.y"
                                                        {TRAN("type", "Token_void"); (yyval.tn) = (yyvsp[0].tn); }
#line 1686 "y.tab.c"
    break;

  case 12:
#line 106 "parser.y"
                                                                                                        {TRAN("func_dec","func()");TreeNode* tn = getTreeNode(Token_func); tn->child[0] = (yyvsp[-4].tn); tn->child[1] = (yyvsp[-3].tn); tn->child[2] = (yyvsp[-1].tn); (yyval.tn) = tn;}
#line 1692 "y.tab.c"
    break;

  case 13:
#line 107 "parser.y"
                                                        {TRAN("func_dec","compoud"); (yyval.tn) = (yyvsp[0].tn); }
#line 1698 "y.tab.c"
    break;

  case 14:
#line 110 "parser.y"
                                                        {TRAN("params","params_list"); (yyval.tn) = (yyvsp[0].tn); }
#line 1704 "y.tab.c"
    break;

  case 15:
#line 111 "parser.y"
                                                        {TRAN("params","void"); (yyval.tn) = (yyvsp[0].tn); }
#line 1710 "y.tab.c"
    break;

  case 16:
#line 114 "parser.y"
                                                        {TRAN("params_list","param params_list_sub");TreeNode* tn = (yyvsp[-1].tn); tn->sibling = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1716 "y.tab.c"
    break;

  case 17:
#line 117 "parser.y"
                                                                {TRAN("params_list_sub",",param params_list_sub");TreeNode* tn = (yyvsp[-1].tn); tn->sibling = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1722 "y.tab.c"
    break;

  case 18:
#line 118 "parser.y"
                                                        {TRAN("params_list_sub","epsilon"); (yyval.tn) = NULL; }
#line 1728 "y.tab.c"
    break;

  case 19:
#line 122 "parser.y"
                                                        {TRAN("param","var ID");TreeNode* tn = getTreeNode(Token_para); tn->child[0] = (yyvsp[-1].tn); tn->child[1] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1734 "y.tab.c"
    break;

  case 20:
#line 123 "parser.y"
                                                                                                        {TRAN("param","var ID[]");TreeNode* tn = getTreeNode(Token_para); tn->child[0] = (yyvsp[-3].tn); tn->child[1] = (yyvsp[-2].tn); tn->child[2] = (TreeNode*)0x1; (yyval.tn) = tn;}
#line 1740 "y.tab.c"
    break;

  case 21:
#line 126 "parser.y"
                                                                                                {TRAN("compoud","{ local_dec stmt_list }");TreeNode* tn = getTreeNode(Token_compound); tn->child[0] = (yyvsp[-2].tn); tn->child[1] = (yyvsp[-1].tn); (yyval.tn) = tn;}
#line 1746 "y.tab.c"
    break;

  case 22:
#line 129 "parser.y"
                                                        {TRAN("local_dec","var_dec local_dec");TreeNode* tn = (yyvsp[-1].tn); tn->sibling = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1752 "y.tab.c"
    break;

  case 23:
#line 130 "parser.y"
                                                        {TRAN("local_dec","epsilon"); (yyval.tn) = NULL; }
#line 1758 "y.tab.c"
    break;

  case 24:
#line 133 "parser.y"
                                                        {TRAN("stmt_list","statement stmt_list");TreeNode* tn = (yyvsp[-1].tn); if(tn == NULL) tn = (yyvsp[0].tn); else tn->sibling = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1764 "y.tab.c"
    break;

  case 25:
#line 134 "parser.y"
                                                        {TRAN("stmt_list","epsilon"); (yyval.tn) = NULL; }
#line 1770 "y.tab.c"
    break;

  case 26:
#line 137 "parser.y"
                                                        {TRAN("statement","exp_st"); (yyval.tn) = (yyvsp[0].tn); }
#line 1776 "y.tab.c"
    break;

  case 27:
#line 138 "parser.y"
                                                        {TRAN("statement","compoud"); (yyval.tn) = (yyvsp[0].tn); }
#line 1782 "y.tab.c"
    break;

  case 28:
#line 139 "parser.y"
                                                        {TRAN("statement","selection_st"); (yyval.tn) = (yyvsp[0].tn); }
#line 1788 "y.tab.c"
    break;

  case 29:
#line 140 "parser.y"
                                                        {TRAN("statement","iteration_st"); (yyval.tn) = (yyvsp[0].tn); }
#line 1794 "y.tab.c"
    break;

  case 30:
#line 141 "parser.y"
                                                        {TRAN("statement","return_st"); (yyval.tn) = (yyvsp[0].tn); }
#line 1800 "y.tab.c"
    break;

  case 31:
#line 144 "parser.y"
                                                                        {TRAN("exp_st","exp;"); (yyval.tn) = (yyvsp[-1].tn); }
#line 1806 "y.tab.c"
    break;

  case 32:
#line 145 "parser.y"
                                                                        {TRAN("exp_st",";"); (yyval.tn) = NULL; }
#line 1812 "y.tab.c"
    break;

  case 33:
#line 148 "parser.y"
                                                                                                {TRAN("selection_st","if exp"); TreeNode* tn = getTreeNode(Token_if); tn->child[0] = (yyvsp[-2].tn); tn->child[1] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1818 "y.tab.c"
    break;

  case 34:
#line 149 "parser.y"
                                                                                                                        {TRAN("selection_st","if_else"); TreeNode* tn = getTreeNode(Token_if); tn->child[0] = (yyvsp[-4].tn); tn->child[1] = (yyvsp[-2].tn); tn->child[2] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1824 "y.tab.c"
    break;

  case 35:
#line 152 "parser.y"
                                                                                                        {TRAN("iteration_st","while exp");TreeNode* tn = getTreeNode(Token_while); tn->child[0] = (yyvsp[-2].tn); tn->child[1] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1830 "y.tab.c"
    break;

  case 36:
#line 155 "parser.y"
                                                                        {TRAN("return_st","return;");TreeNode* tn = getTreeNode(Token_return); (yyval.tn) = tn;}
#line 1836 "y.tab.c"
    break;

  case 37:
#line 156 "parser.y"
                                                                        {TRAN("return_st","return exp;");TreeNode* tn = getTreeNode(Token_return); tn->child[0] = (yyvsp[-1].tn); (yyval.tn) = tn;}
#line 1842 "y.tab.c"
    break;

  case 38:
#line 159 "parser.y"
                                                        {TRAN("exp","var = exp");TreeNode* tn = getTreeNode(Token_assign); tn->child[0] = (yyvsp[-2].tn); tn->child[1] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1848 "y.tab.c"
    break;

  case 39:
#line 160 "parser.y"
                                                        {TRAN("exp","simple_exp");(yyval.tn) = (yyvsp[0].tn);}
#line 1854 "y.tab.c"
    break;

  case 40:
#line 163 "parser.y"
                                                        {TRAN("var","identifier");TreeNode* tn = getTreeNode(Token_var); tn->child[0] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1860 "y.tab.c"
    break;

  case 41:
#line 164 "parser.y"
                                                                                                {TRAN("var","identifier[]");TreeNode* tn = getTreeNode(Token_var); tn->child[0] = (yyvsp[-3].tn); tn->child[1] = (yyvsp[-1].tn); (yyval.tn) = tn;}
#line 1866 "y.tab.c"
    break;

  case 42:
#line 167 "parser.y"
                                                        {TRAN("simple_exp","additive_exp lop additive_exp");TreeNode* tn = (yyvsp[-1].tn); tn->child[0] = (yyvsp[-2].tn); tn->child[1] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1872 "y.tab.c"
    break;

  case 43:
#line 168 "parser.y"
                                                        {TRAN("simple_exp","additive_exp"); (yyval.tn) = (yyvsp[0].tn); }
#line 1878 "y.tab.c"
    break;

  case 44:
#line 171 "parser.y"
                                                        {TRAN("relop","<"); (yyval.tn) = (yyvsp[0].tn); }
#line 1884 "y.tab.c"
    break;

  case 45:
#line 172 "parser.y"
                                                        {TRAN("relop","<="); (yyval.tn) = (yyvsp[0].tn); }
#line 1890 "y.tab.c"
    break;

  case 46:
#line 173 "parser.y"
                                                        {TRAN("relop",">"); (yyval.tn) = (yyvsp[0].tn); }
#line 1896 "y.tab.c"
    break;

  case 47:
#line 174 "parser.y"
                                                        {TRAN("relop",">="); (yyval.tn) = (yyvsp[0].tn); }
#line 1902 "y.tab.c"
    break;

  case 48:
#line 175 "parser.y"
                                                        {TRAN("relop","=="); (yyval.tn) = (yyvsp[0].tn); }
#line 1908 "y.tab.c"
    break;

  case 49:
#line 176 "parser.y"
                                                        {TRAN("relop","!="); (yyval.tn) = (yyvsp[0].tn); }
#line 1914 "y.tab.c"
    break;

  case 50:
#line 179 "parser.y"
                                                        {TRAN("additive_exp","additive_exp addop term");TreeNode* tn = (yyvsp[-1].tn); tn->child[0] = (yyvsp[-2].tn); tn->child[1] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1920 "y.tab.c"
    break;

  case 51:
#line 180 "parser.y"
                                                        {TRAN("additive_exp","term"); (yyval.tn) = (yyvsp[0].tn); }
#line 1926 "y.tab.c"
    break;

  case 52:
#line 183 "parser.y"
                                                        {TRAN("addop","+"); (yyval.tn) = (yyvsp[0].tn); }
#line 1932 "y.tab.c"
    break;

  case 53:
#line 184 "parser.y"
                                                        {TRAN("addop","-"); (yyval.tn) = (yyvsp[0].tn); }
#line 1938 "y.tab.c"
    break;

  case 54:
#line 187 "parser.y"
                                                        {TRAN("term","term mulop factor");TreeNode* tn = (yyvsp[-1].tn); tn->child[0] = (yyvsp[-2].tn); tn->child[1] = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 1944 "y.tab.c"
    break;

  case 55:
#line 188 "parser.y"
                                                        {TRAN("term","factor"); (yyval.tn) = (yyvsp[0].tn); }
#line 1950 "y.tab.c"
    break;

  case 56:
#line 191 "parser.y"
                                                        {TRAN("mulop","*"); (yyval.tn) = (yyvsp[0].tn); }
#line 1956 "y.tab.c"
    break;

  case 57:
#line 192 "parser.y"
                                                        {TRAN("mulop","/"); (yyval.tn) = (yyvsp[0].tn); }
#line 1962 "y.tab.c"
    break;

  case 58:
#line 195 "parser.y"
                                                                                                {TRAN("factor","(exp)"); (yyval.tn) = (yyvsp[-1].tn); }
#line 1968 "y.tab.c"
    break;

  case 59:
#line 196 "parser.y"
                                                        {TRAN("factor","var"); (yyval.tn) = (yyvsp[0].tn); }
#line 1974 "y.tab.c"
    break;

  case 60:
#line 197 "parser.y"
                                                        {TRAN("factor","call"); (yyval.tn) = (yyvsp[0].tn); }
#line 1980 "y.tab.c"
    break;

  case 61:
#line 198 "parser.y"
                                                        {TRAN("factor","num"); (yyval.tn) = (yyvsp[0].tn); }
#line 1986 "y.tab.c"
    break;

  case 62:
#line 201 "parser.y"
                                                                                                {TRAN("call","id, args"); TreeNode* tn = getTreeNode(Token_call); tn->child[0] = (yyvsp[-3].tn); tn->child[1] = (yyvsp[-1].tn); (yyval.tn) = tn;}
#line 1992 "y.tab.c"
    break;

  case 63:
#line 204 "parser.y"
                                                        {TRAN("args","arg_list"); (yyval.tn) = (yyvsp[0].tn); }
#line 1998 "y.tab.c"
    break;

  case 64:
#line 205 "parser.y"
                                                        {TRAN("args","epsilon"); (yyval.tn) = NULL; }
#line 2004 "y.tab.c"
    break;

  case 65:
#line 208 "parser.y"
                                                        {TRAN("arg_list","exp, arg_list_sub");TreeNode* tn = (yyvsp[-1].tn); tn->sibling = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 2010 "y.tab.c"
    break;

  case 66:
#line 211 "parser.y"
                                                                {TRAN("arg_list_sub","comma, exp, arg_list_sub");TreeNode* tn = (yyvsp[-1].tn); tn->sibling = (yyvsp[0].tn); (yyval.tn) = tn;}
#line 2016 "y.tab.c"
    break;

  case 67:
#line 212 "parser.y"
                                                        {TRAN("arg_list_sub","epsilon"); (yyval.tn) = NULL; }
#line 2022 "y.tab.c"
    break;


#line 2026 "y.tab.c"

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
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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

#line 214 "parser.y"


// int main() 	{
//     yyparse();
//     TreeNode* tn = root;
//     return 0;
// }

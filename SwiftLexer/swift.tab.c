/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include "nodes.h"
using namespace std;

void yyerror(const char* s);
int yylex(void);


#line 85 "swift.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    INT_DECIMAL = 258,             /* INT_DECIMAL  */
    FLOAT_HEX = 259,               /* FLOAT_HEX  */
    FLOAT_DEC = 260,               /* FLOAT_DEC  */
    INT_BINARY = 261,              /* INT_BINARY  */
    INT_OCTAL = 262,               /* INT_OCTAL  */
    INT_HEXADECIMAL = 263,         /* INT_HEXADECIMAL  */
    STRING_C = 264,                /* STRING_C  */
    ID = 265,                      /* ID  */
    INT_KW = 266,                  /* INT_KW  */
    LET_KW = 267,                  /* LET_KW  */
    VAR_KW = 268,                  /* VAR_KW  */
    FUNC = 269,                    /* FUNC  */
    PUBLIC = 270,                  /* PUBLIC  */
    FILE_PRIVATE = 271,            /* FILE_PRIVATE  */
    PRIVATE = 272,                 /* PRIVATE  */
    CLASS = 273,                   /* CLASS  */
    SWITCH = 274,                  /* SWITCH  */
    CASE = 275,                    /* CASE  */
    DEFAULT = 276,                 /* DEFAULT  */
    FOR = 277,                     /* FOR  */
    IN = 278,                      /* IN  */
    WHILE = 279,                   /* WHILE  */
    IF = 280,                      /* IF  */
    ELSE_IF = 281,                 /* ELSE_IF  */
    ELSE = 282,                    /* ELSE  */
    RETURN = 283,                  /* RETURN  */
    DEINIT = 284,                  /* DEINIT  */
    STAIC = 285,                   /* STAIC  */
    VOID = 286,                    /* VOID  */
    EQ = 287,                      /* EQ  */
    NE = 288,                      /* NE  */
    GE = 289,                      /* GE  */
    LE = 290,                      /* LE  */
    UNMINUS = 291                  /* UNMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_DECIMAL = 3,                /* INT_DECIMAL  */
  YYSYMBOL_FLOAT_HEX = 4,                  /* FLOAT_HEX  */
  YYSYMBOL_FLOAT_DEC = 5,                  /* FLOAT_DEC  */
  YYSYMBOL_INT_BINARY = 6,                 /* INT_BINARY  */
  YYSYMBOL_INT_OCTAL = 7,                  /* INT_OCTAL  */
  YYSYMBOL_INT_HEXADECIMAL = 8,            /* INT_HEXADECIMAL  */
  YYSYMBOL_STRING_C = 9,                   /* STRING_C  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_INT_KW = 11,                    /* INT_KW  */
  YYSYMBOL_LET_KW = 12,                    /* LET_KW  */
  YYSYMBOL_VAR_KW = 13,                    /* VAR_KW  */
  YYSYMBOL_FUNC = 14,                      /* FUNC  */
  YYSYMBOL_PUBLIC = 15,                    /* PUBLIC  */
  YYSYMBOL_FILE_PRIVATE = 16,              /* FILE_PRIVATE  */
  YYSYMBOL_PRIVATE = 17,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 18,                     /* CLASS  */
  YYSYMBOL_SWITCH = 19,                    /* SWITCH  */
  YYSYMBOL_CASE = 20,                      /* CASE  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_IN = 23,                        /* IN  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ELSE_IF = 26,                   /* ELSE_IF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_RETURN = 28,                    /* RETURN  */
  YYSYMBOL_DEINIT = 29,                    /* DEINIT  */
  YYSYMBOL_STAIC = 30,                     /* STAIC  */
  YYSYMBOL_VOID = 31,                      /* VOID  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '='  */
  YYSYMBOL_EQ = 34,                        /* EQ  */
  YYSYMBOL_NE = 35,                        /* NE  */
  YYSYMBOL_36_ = 36,                       /* '>'  */
  YYSYMBOL_37_ = 37,                       /* '<'  */
  YYSYMBOL_GE = 38,                        /* GE  */
  YYSYMBOL_LE = 39,                        /* LE  */
  YYSYMBOL_40_ = 40,                       /* '+'  */
  YYSYMBOL_41_ = 41,                       /* '-'  */
  YYSYMBOL_42_ = 42,                       /* '*'  */
  YYSYMBOL_43_ = 43,                       /* '/'  */
  YYSYMBOL_UNMINUS = 44,                   /* UNMINUS  */
  YYSYMBOL_45_ = 45,                       /* '['  */
  YYSYMBOL_46_ = 46,                       /* ']'  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* ':'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53___ = 53,                     /* '_'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_stmt_list = 56,                 /* stmt_list  */
  YYSYMBOL_stmt = 57,                      /* stmt  */
  YYSYMBOL_expr = 58,                      /* expr  */
  YYSYMBOL_primary_expr = 59,              /* primary_expr  */
  YYSYMBOL_expr_list = 60,                 /* expr_list  */
  YYSYMBOL_expr_list_e = 61,               /* expr_list_e  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_decl_items = 63,                /* decl_items  */
  YYSYMBOL_decl_item = 64,                 /* decl_item  */
  YYSYMBOL_decl = 65,                      /* decl  */
  YYSYMBOL_func_id = 66,                   /* func_id  */
  YYSYMBOL_func_param = 67,                /* func_param  */
  YYSYMBOL_func_param_list = 68,           /* func_param_list  */
  YYSYMBOL_func_param_list_e = 69,         /* func_param_list_e  */
  YYSYMBOL_func_arg = 70,                  /* func_arg  */
  YYSYMBOL_func_arg_list = 71,             /* func_arg_list  */
  YYSYMBOL_func_arg_list_nonempty = 72,    /* func_arg_list_nonempty  */
  YYSYMBOL_access_modifier = 73,           /* access_modifier  */
  YYSYMBOL_class_decl_list = 74,           /* class_decl_list  */
  YYSYMBOL_class_member = 75,              /* class_member  */
  YYSYMBOL_class_decl_list_e = 76,         /* class_decl_list_e  */
  YYSYMBOL_if_stmt = 77,                   /* if_stmt  */
  YYSYMBOL_switch_statement = 78,          /* switch_statement  */
  YYSYMBOL_switch_case_list = 79,          /* switch_case_list  */
  YYSYMBOL_switch_case = 80,               /* switch_case  */
  YYSYMBOL_for_stmt = 81,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 82                 /* while_stmt  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   388

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      48,    49,    42,    40,    32,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    47,
      37,    33,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,    53,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    34,    35,    38,
      39,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    34,    37,    39,    43,    44,    45,    46,
      47,    48,    49,    50,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    84,    85,
      88,    90,    93,    94,    98,    99,   103,   104,   105,   106,
     110,   111,   112,   113,   114,   115,   116,   120,   123,   124,
     125,   129,   130,   133,   135,   139,   140,   143,   145,   149,
     150,   153,   155,   156,   157,   162,   163,   167,   168,   169,
     172,   174,   178,   179,   180,   184,   188,   189,   193,   194,
     197,   199
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_DECIMAL",
  "FLOAT_HEX", "FLOAT_DEC", "INT_BINARY", "INT_OCTAL", "INT_HEXADECIMAL",
  "STRING_C", "ID", "INT_KW", "LET_KW", "VAR_KW", "FUNC", "PUBLIC",
  "FILE_PRIVATE", "PRIVATE", "CLASS", "SWITCH", "CASE", "DEFAULT", "FOR",
  "IN", "WHILE", "IF", "ELSE_IF", "ELSE", "RETURN", "DEINIT", "STAIC",
  "VOID", "','", "'='", "EQ", "NE", "'>'", "'<'", "GE", "LE", "'+'", "'-'",
  "'*'", "'/'", "UNMINUS", "'['", "']'", "';'", "'('", "')'", "':'", "'{'",
  "'}'", "'_'", "$accept", "program", "stmt_list", "stmt", "expr",
  "primary_expr", "expr_list", "expr_list_e", "type", "decl_items",
  "decl_item", "decl", "func_id", "func_param", "func_param_list",
  "func_param_list_e", "func_arg", "func_arg_list",
  "func_arg_list_nonempty", "access_modifier", "class_decl_list",
  "class_member", "class_decl_list_e", "if_stmt", "switch_statement",
  "switch_case_list", "switch_case", "for_stmt", "while_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    30,    94,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     7,    51,    51,    54,    74,     6,     6,     6,
      38,    45,    15,     6,     6,   -87,   287,   -87,    43,    48,
     -87,   -87,   -87,   -87,   123,    26,    73,   -87,    73,   -87,
      67,   178,   160,   197,     6,     6,   -87,   302,    76,   236,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,   -87,   -87,    -2,    29,   331,   -87,    85,   104,
       6,    21,    51,    16,    90,     6,   144,   253,   270,   -87,
     -87,   343,   136,   136,   136,   136,   136,   136,   146,   146,
      76,    76,   317,    19,   131,   -87,   127,   106,     6,   -87,
     123,   331,   -87,   -87,   135,   128,   -87,   114,   108,     6,
     130,    28,   -87,   216,   132,    23,   139,   -87,   154,   135,
     156,    -2,    44,   331,   -87,   140,     6,   108,   -87,   -87,
     -87,   157,   250,   158,   -87,   155,   331,    25,   144,   -87,
     -87,   144,   -87,   171,   144,   144,   135,   -87,   135,   -87,
     173,   144,   149,   331,   172,   144,   126,   -87,   -87,   -87,
       6,   144,   -87,   174,   144,   175,   176,   -87,   -87,    42,
     189,   180,   -87,   191,   -87,   331,   -87,   -87,   192,   -87,
     -87,   194,   195,   -87,     6,   -87,   -87,   144,   144,   215,
     214,   213,   230,   -87,   -87,   -87
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,     3,    28,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,    14,     0,     0,
       8,     9,    10,    11,    67,     0,    50,    44,    51,    57,
       0,     0,     0,     0,     0,     0,    12,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     6,    63,    35,    66,    69,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      37,    25,    19,    20,    21,    22,    23,    24,    15,    16,
      17,    18,     0,     0,     0,    61,    64,     0,     0,    36,
       0,    46,    43,    42,     0,    47,    45,     0,    71,     0,
       0,     0,    86,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,    65,    70,     0,     0,    71,    72,    73,
      74,     0,     0,    71,    76,     0,    38,     0,     0,    85,
      87,     0,    91,     0,     0,     0,     0,    58,     0,    62,
       0,     0,     0,    48,     0,     0,     0,    77,    75,    56,
       0,     0,    89,     0,     0,     0,     0,    59,    60,     0,
       0,     0,    55,     0,    78,    39,    88,    90,     0,    82,
      83,     0,     0,    54,    40,    79,    84,     0,     0,    41,
       0,     0,     0,    49,    52,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   -87,   -73,   -17,   -87,    82,   -87,   -59,   269,
     212,   -86,   -87,   179,   -87,   -87,   199,   -87,   -87,   -87,
     -87,   164,   187,   -87,   -87,   -87,   190,   -87,   -87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    25,    26,    27,   137,   190,   105,    36,
      37,    28,    29,    95,    96,    97,    67,    68,    69,   132,
     133,   134,   135,    30,    31,   111,   112,    32,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    42,    43,   114,    -2,    47,    48,    49,    93,     5,
       6,     7,     8,     9,    10,    11,    12,    66,     5,     6,
       7,     8,     9,    10,    11,    12,   107,    77,    78,   118,
       3,   102,   103,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   125,   157,    23,   109,   110,
     143,    94,   181,   101,    24,    34,    23,   160,   113,    70,
     147,    35,    46,    24,    39,   162,   104,   108,   163,   119,
     174,   165,   166,   182,   144,   161,    71,    34,   170,    98,
     139,   123,   173,    66,    40,   150,    44,   167,   176,   168,
      63,   178,   136,    45,     4,   151,    64,     5,     6,     7,
       8,     9,    10,    11,    12,    72,    13,    14,    15,   153,
     109,   110,    16,    17,   191,   192,    18,    73,    19,    20,
      21,    61,    22,   128,   129,   130,     5,     6,     7,     8,
       9,    10,    11,    65,    99,    23,   100,   131,    13,    14,
      15,   120,    24,   175,    16,   102,   103,     5,     6,     7,
       8,     9,    10,    11,    12,   122,    13,    14,    15,   121,
     -80,   126,    16,    17,    23,   127,    18,   136,    19,    20,
      21,    24,    22,   128,   129,   130,    57,    58,    59,    60,
     138,    61,   171,    75,   142,    23,   152,   131,    59,    60,
     145,    61,    24,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   146,    61,   148,   159,   155,   169,
     -81,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,   164,    61,   172,   184,   177,   179,   180,    74,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,   183,    61,   185,   186,   187,   188,   160,    76,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     193,    61,    13,    14,    15,   194,   189,   141,    16,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     156,    61,   195,    38,   106,    80,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,   158,    61,   124,
     149,   140,   115,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   154,    61,     0,     0,     0,   116,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     0,    61,     0,    62,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,    61,     0,    79,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     0,    61,   117,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     0,    61,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,    61
};

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    76,     0,    22,    23,    24,    10,     3,
       4,     5,     6,     7,     8,     9,    10,    34,     3,     4,
       5,     6,     7,     8,     9,    10,    10,    44,    45,    10,
       0,    10,    11,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   104,   132,    41,    20,    21,
      27,    53,    10,    70,    48,    48,    41,    32,    75,    33,
     119,    10,    47,    48,    10,   138,    45,    51,   141,    50,
     156,   144,   145,    31,    51,    50,    50,    48,   151,    50,
      52,    98,   155,   100,    10,    41,    48,   146,   161,   148,
      47,   164,   109,    48,     0,    51,    48,     3,     4,     5,
       6,     7,     8,     9,    10,    32,    12,    13,    14,   126,
      20,    21,    18,    19,   187,   188,    22,    50,    24,    25,
      26,    45,    28,    15,    16,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    49,    41,    32,    29,    12,    13,
      14,    10,    48,   160,    18,    10,    11,     3,     4,     5,
       6,     7,     8,     9,    10,    49,    12,    13,    14,    32,
      52,    33,    18,    19,    41,    51,    22,   184,    24,    25,
      26,    48,    28,    15,    16,    17,    40,    41,    42,    43,
      50,    45,    33,    23,    52,    41,    46,    29,    42,    43,
      51,    45,    48,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    50,    45,    50,    52,    51,    36,
      52,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    51,    45,    52,    45,    52,    52,    52,    51,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    52,    45,    52,    52,    51,    51,    32,    51,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      46,    45,    12,    13,    14,    52,   184,    51,    18,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      30,    45,    52,    14,    72,    49,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,   133,    45,   100,
     121,   111,    49,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,   127,    45,    -1,    -1,    -1,    49,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    -1,    47,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    -1,    47,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    46,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    12,    13,    14,    18,    19,    22,    24,
      25,    26,    28,    41,    48,    57,    58,    59,    65,    66,
      77,    78,    81,    82,    48,    10,    63,    64,    63,    10,
      10,    58,    58,    58,    48,    48,    47,    58,    58,    58,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    45,    47,    47,    48,    10,    58,    70,    71,    72,
      33,    50,    32,    50,    51,    23,    51,    58,    58,    47,
      49,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    10,    53,    67,    68,    69,    50,    49,
      32,    58,    10,    11,    45,    62,    64,    10,    51,    20,
      21,    79,    80,    58,    57,    49,    49,    46,    10,    50,
      10,    32,    49,    58,    70,    62,    33,    51,    15,    16,
      17,    29,    73,    74,    75,    76,    58,    60,    50,    52,
      80,    51,    52,    27,    51,    51,    50,    62,    50,    67,
      41,    51,    46,    58,    76,    51,    30,    65,    75,    52,
      32,    50,    57,    57,    51,    57,    57,    62,    62,    36,
      57,    33,    52,    57,    65,    58,    57,    52,    57,    52,
      52,    10,    31,    52,    45,    52,    52,    51,    51,    60,
      61,    57,    57,    46,    52,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    66,    67,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    75,
      76,    76,    77,    77,    77,    78,    79,    79,    80,    80,
      81,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     2,     2,     1,     1,
       1,     1,     2,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       0,     1,     1,     1,     1,     3,     3,     3,     5,     9,
       2,     2,    10,    10,     7,     7,     6,     2,     3,     4,
       4,     1,     3,     0,     1,     3,     1,     0,     1,     1,
       3,     0,     1,     1,     1,     2,     1,     2,     3,     4,
       0,     1,     7,     7,     8,     5,     1,     2,     4,     3,
       7,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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

#line 1388 "swift.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 202 "parser.y"

void yyerror(const char* s){
 std::cerr << s << std::endl;
} 

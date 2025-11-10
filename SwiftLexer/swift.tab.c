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
#line 7 "parser.y"

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include "nodes.h"
using namespace std;

void yyerror(const char* s);
int yylex(void);

std::vector<StmtNode*>* root = nullptr;


#line 87 "swift.tab.c"

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

#include "swift.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LET_KW = 3,                     /* LET_KW  */
  YYSYMBOL_VAR_KW = 4,                     /* VAR_KW  */
  YYSYMBOL_FUNC = 5,                       /* FUNC  */
  YYSYMBOL_CLASS = 6,                      /* CLASS  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_IN = 10,                        /* IN  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_SWITCH = 13,                    /* SWITCH  */
  YYSYMBOL_CASE = 14,                      /* CASE  */
  YYSYMBOL_DEFAULT = 15,                   /* DEFAULT  */
  YYSYMBOL_NIL = 16,                       /* NIL  */
  YYSYMBOL_BREAK = 17,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 18,                  /* CONTINUE  */
  YYSYMBOL_ARROW = 19,                     /* ARROW  */
  YYSYMBOL_TRUE = 20,                      /* TRUE  */
  YYSYMBOL_FALSE = 21,                     /* FALSE  */
  YYSYMBOL_INT_DEC = 22,                   /* INT_DEC  */
  YYSYMBOL_INT_BINARY = 23,                /* INT_BINARY  */
  YYSYMBOL_INT_OCTAL = 24,                 /* INT_OCTAL  */
  YYSYMBOL_INT_HEXADECIMAL = 25,           /* INT_HEXADECIMAL  */
  YYSYMBOL_ID = 26,                        /* ID  */
  YYSYMBOL_STRING_C = 27,                  /* STRING_C  */
  YYSYMBOL_INT_KW = 28,                    /* INT_KW  */
  YYSYMBOL_BOOL_KW = 29,                   /* BOOL_KW  */
  YYSYMBOL_UINT_KW = 30,                   /* UINT_KW  */
  YYSYMBOL_FLOAT_KW = 31,                  /* FLOAT_KW  */
  YYSYMBOL_DOUBLE_KW = 32,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 33,                 /* STRING_KW  */
  YYSYMBOL_34___ = 34,                     /* '_'  */
  YYSYMBOL_PUBLIC = 35,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 36,                   /* PRIVATE  */
  YYSYMBOL_FILE_PRIVATE = 37,              /* FILE_PRIVATE  */
  YYSYMBOL_STATIC = 38,                    /* STATIC  */
  YYSYMBOL_INIT = 39,                      /* INIT  */
  YYSYMBOL_DEINIT = 40,                    /* DEINIT  */
  YYSYMBOL_FLOAT_HEX = 41,                 /* FLOAT_HEX  */
  YYSYMBOL_FLOAT_DEC = 42,                 /* FLOAT_DEC  */
  YYSYMBOL_43_ = 43,                       /* ','  */
  YYSYMBOL_44_ = 44,                       /* '='  */
  YYSYMBOL_OR = 45,                        /* OR  */
  YYSYMBOL_AND = 46,                       /* AND  */
  YYSYMBOL_EQ = 47,                        /* EQ  */
  YYSYMBOL_NE = 48,                        /* NE  */
  YYSYMBOL_49_ = 49,                       /* '>'  */
  YYSYMBOL_50_ = 50,                       /* '<'  */
  YYSYMBOL_GE = 51,                        /* GE  */
  YYSYMBOL_LE = 52,                        /* LE  */
  YYSYMBOL_53_ = 53,                       /* '+'  */
  YYSYMBOL_54_ = 54,                       /* '-'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '%'  */
  YYSYMBOL_NOT = 58,                       /* NOT  */
  YYSYMBOL_UNMINUS = 59,                   /* UNMINUS  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_61_ = 61,                       /* '['  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* ';'  */
  YYSYMBOL_64_ = 64,                       /* ']'  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ':'  */
  YYSYMBOL_67_ = 67,                       /* '{'  */
  YYSYMBOL_68_ = 68,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_program = 70,                   /* program  */
  YYSYMBOL_top_stmt_list = 71,             /* top_stmt_list  */
  YYSYMBOL_top_stmt = 72,                  /* top_stmt  */
  YYSYMBOL_stmt_list = 73,                 /* stmt_list  */
  YYSYMBOL_stmt = 74,                      /* stmt  */
  YYSYMBOL_expr = 75,                      /* expr  */
  YYSYMBOL_expr_list = 76,                 /* expr_list  */
  YYSYMBOL_expr_list_e = 77,               /* expr_list_e  */
  YYSYMBOL_type = 78,                      /* type  */
  YYSYMBOL_decl_items = 79,                /* decl_items  */
  YYSYMBOL_decl_item = 80,                 /* decl_item  */
  YYSYMBOL_var_decl = 81,                  /* var_decl  */
  YYSYMBOL_func_decl = 82,                 /* func_decl  */
  YYSYMBOL_class_decl = 83,                /* class_decl  */
  YYSYMBOL_func_param = 84,                /* func_param  */
  YYSYMBOL_func_param_list = 85,           /* func_param_list  */
  YYSYMBOL_func_param_list_e = 86,         /* func_param_list_e  */
  YYSYMBOL_func_arg = 87,                  /* func_arg  */
  YYSYMBOL_func_arg_list = 88,             /* func_arg_list  */
  YYSYMBOL_func_arg_list_nonempty = 89,    /* func_arg_list_nonempty  */
  YYSYMBOL_access_modifier = 90,           /* access_modifier  */
  YYSYMBOL_class_decl_list = 91,           /* class_decl_list  */
  YYSYMBOL_class_member = 92,              /* class_member  */
  YYSYMBOL_class_decl_list_e = 93,         /* class_decl_list_e  */
  YYSYMBOL_if_stmt = 94,                   /* if_stmt  */
  YYSYMBOL_switch_stmt = 95,               /* switch_stmt  */
  YYSYMBOL_switch_case_list = 96,          /* switch_case_list  */
  YYSYMBOL_switch_case = 97,               /* switch_case  */
  YYSYMBOL_for_stmt = 98,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 99,                /* while_stmt  */
  YYSYMBOL_block = 100                     /* block  */
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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
       2,     2,     2,     2,     2,     2,     2,    57,     2,     2,
      65,    62,    55,    53,    43,    54,    60,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    63,
      50,    44,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    64,     2,    34,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,    68,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    35,
      36,    37,    38,    39,    40,    41,    42,    45,    46,    47,
      48,    51,    52,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    73,    74,    79,    80,    81,    84,    85,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   133,   134,   138,
     139,   143,   144,   145,   146,   147,   148,   149,   153,   154,
     158,   159,   160,   164,   165,   169,   170,   174,   175,   179,
     180,   181,   185,   186,   190,   191,   195,   196,   200,   201,
     205,   206,   210,   211,   212,   213,   217,   218,   222,   223,
     224,   225,   226,   229,   235,   236,   240,   241,   242,   246,
     250,   251,   255,   256,   260,   264,   268
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
  "\"end of file\"", "error", "\"invalid token\"", "LET_KW", "VAR_KW",
  "FUNC", "CLASS", "RETURN", "ELSE", "FOR", "IN", "WHILE", "IF", "SWITCH",
  "CASE", "DEFAULT", "NIL", "BREAK", "CONTINUE", "ARROW", "TRUE", "FALSE",
  "INT_DEC", "INT_BINARY", "INT_OCTAL", "INT_HEXADECIMAL", "ID",
  "STRING_C", "INT_KW", "BOOL_KW", "UINT_KW", "FLOAT_KW", "DOUBLE_KW",
  "STRING_KW", "'_'", "PUBLIC", "PRIVATE", "FILE_PRIVATE", "STATIC",
  "INIT", "DEINIT", "FLOAT_HEX", "FLOAT_DEC", "','", "'='", "OR", "AND",
  "EQ", "NE", "'>'", "'<'", "GE", "LE", "'+'", "'-'", "'*'", "'/'", "'%'",
  "NOT", "UNMINUS", "'.'", "'['", "')'", "';'", "']'", "'('", "':'", "'{'",
  "'}'", "$accept", "program", "top_stmt_list", "top_stmt", "stmt_list",
  "stmt", "expr", "expr_list", "expr_list_e", "type", "decl_items",
  "decl_item", "var_decl", "func_decl", "class_decl", "func_param",
  "func_param_list", "func_param_list_e", "func_arg", "func_arg_list",
  "func_arg_list_nonempty", "access_modifier", "class_decl_list",
  "class_member", "class_decl_list_e", "if_stmt", "switch_stmt",
  "switch_case_list", "switch_case", "for_stmt", "while_stmt", "block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-129)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     215,     5,     5,     9,    23,    76,    29,   265,   265,   265,
     -48,    20,  -129,  -129,  -129,    14,  -129,  -129,   265,   265,
     265,   265,   107,  -129,  -129,   215,   108,   350,    46,    51,
      52,  -129,  -129,  -129,  -129,   -21,    70,  -129,    70,    54,
     -42,  -129,   370,   106,   133,   133,   305,  -129,  -129,   283,
     -17,   -17,   409,    74,    56,   390,  -129,  -129,   108,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,    96,   265,  -129,  -129,  -129,  -129,   265,    60,
       5,     4,    98,    17,  -129,   265,   241,  -129,   117,    59,
      16,   409,  -129,    66,    83,   265,  -129,  -129,   409,   425,
     440,   -27,   -27,   -27,   -27,   -27,   -27,    50,    50,   -17,
     -17,    68,   329,   409,  -129,  -129,  -129,  -129,  -129,  -129,
      60,    85,  -129,   -24,   105,  -129,    92,    80,    69,  -129,
    -129,  -129,    71,     8,    64,  -129,    75,   133,   149,  -129,
     -11,   265,    81,     7,  -129,   265,  -129,   283,   409,   283,
    -129,    90,   265,    91,    60,    93,     4,   -16,    17,  -129,
      36,    84,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,   -29,    71,  -129,  -129,   409,  -129,   101,  -129,   409,
      60,  -129,    60,  -129,    60,  -129,    97,  -129,  -129,     4,
      71,  -129,  -129,  -129,  -129,    71,  -129,   102,  -129,  -129,
      71,  -129
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    20,    44,    22,    21,     0,     0,
      49,     0,     0,     2,     3,     0,     8,     0,     0,     0,
       0,    12,    13,    14,    15,     0,    63,    58,    64,     0,
       0,    16,     0,     0,     0,     0,     0,    18,    19,    78,
      38,    39,    47,    50,     0,     0,     1,     4,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     6,     7,     0,     0,
       0,    74,     0,    82,    17,     0,     0,   105,    96,     0,
      44,    77,    80,     0,    79,     0,    43,    46,    35,    37,
      36,    29,    30,    31,    32,    33,    34,    25,    26,    27,
      28,    41,     0,    60,    56,    51,    52,    53,    54,    55,
       0,    61,    59,     0,     0,    72,    75,     0,     0,    83,
      85,    84,     0,     0,    82,    87,     0,     0,     0,     8,
       0,     0,     0,     0,   100,     0,    45,     0,    48,    78,
      40,     0,     0,     0,     0,     0,     0,     0,    82,    93,
       0,     0,    88,    89,    86,    68,   104,   106,     9,    97,
      98,     0,     0,    99,   101,    76,    81,     0,    57,    62,
       0,    69,     0,    73,     0,    66,     0,    90,    91,    74,
       0,   103,    42,    70,    71,     0,    67,     0,   102,    65,
       0,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,  -129,   143,    86,   -15,    -1,    32,  -129,  -104,
     172,   110,  -128,  -124,  -129,    39,  -129,     3,    49,    48,
    -129,  -129,  -129,    65,    40,    61,  -129,  -129,    62,  -129,
    -129,   -45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    22,    23,    24,    25,    26,    27,    53,    54,   121,
      36,    37,    28,    29,    30,   125,   126,   127,    92,    93,
      94,   133,   134,   135,   136,    31,    32,   143,   144,    33,
      34,    87
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,     8,   153,   184,    42,   162,    44,    45,    46,   163,
      58,     1,     2,     3,    95,    47,   151,    50,    51,    52,
      55,   141,   142,    78,    82,    83,    68,    69,    70,    71,
     123,    35,   187,    72,    73,    39,   188,   190,   124,     1,
       2,     3,   154,    72,    73,    79,   160,   161,    91,    40,
     181,    86,   129,   130,   131,    43,    86,   132,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   139,   112,   141,   142,   173,   193,   113,   194,    49,
     195,    49,   145,    48,   137,   -94,   114,   159,   115,   116,
     117,   118,   166,   119,   148,   170,    12,    13,    14,   129,
     130,   131,    15,    16,   132,    70,    71,    56,    -5,    75,
      72,    73,   185,    80,    76,    77,    85,    95,    17,    81,
      96,   120,   111,   168,   128,   140,   147,   191,   146,   152,
      18,   155,   -95,   149,    19,   156,   158,    20,    86,    41,
      52,    21,   157,   165,   175,   198,    91,   172,    91,   189,
     199,   179,     1,     2,   178,   201,     5,   180,     6,   182,
       7,     8,     9,   192,   200,   196,    10,    11,    57,    12,
      13,    14,   138,   171,    38,    15,    16,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
     122,    17,   197,    72,    73,   183,   176,   177,   186,   164,
      86,   169,     0,    18,     0,   174,     0,    19,     0,     0,
      20,     0,     0,     0,    21,     0,     0,   167,     1,     2,
       3,     4,     5,     0,     6,     0,     7,     8,     9,     0,
       0,     0,    10,    11,     0,    12,    13,    14,     0,     0,
       0,    15,    16,     0,     1,     2,     0,     0,     5,     0,
       6,     0,     7,     8,     9,     0,     0,    17,    10,    11,
       0,    12,    13,    14,     0,     0,     0,    15,    16,    18,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
      21,     0,     0,    17,     0,    12,    13,    14,     0,     0,
       0,    15,    16,     0,     0,    18,     0,     0,     0,    19,
       0,     0,    20,    12,    13,    14,    21,    17,     0,    90,
      16,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,    19,     0,    17,    20,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,    21,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,     0,    72,    73,     0,     0,     0,
       0,     0,    89,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,     0,    72,
      73,     0,     0,   150,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,     0,
      72,    73,     0,    74,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,     0,
      72,    73,     0,    84,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,     0,
      72,    73,    97,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,     0,    72,
      73,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,     0,    72,    73,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,     0,
      72,    73
};

static const yytype_int16 yycheck[] =
{
      45,    12,    26,    19,     5,   133,     7,     8,     9,   133,
      25,     3,     4,     5,    43,    63,   120,    18,    19,    20,
      21,    14,    15,    44,    66,    67,    53,    54,    55,    56,
      26,    26,   160,    60,    61,    26,   160,    66,    34,     3,
       4,     5,    66,    60,    61,    66,    38,    39,    49,    26,
     154,    67,    35,    36,    37,    26,    67,    40,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    86,    73,    14,    15,    68,   180,    78,   182,    65,
     184,    65,    66,    63,    85,    68,    26,   132,    28,    29,
      30,    31,   137,    33,    95,   140,    20,    21,    22,    35,
      36,    37,    26,    27,    40,    55,    56,     0,     0,    63,
      60,    61,   157,    43,    63,    63,    10,    43,    42,    65,
      64,    61,    26,   138,    26,     8,    43,   172,    62,    44,
      54,    26,    68,    65,    58,    43,    67,    61,    67,    63,
     141,    65,    62,    68,   145,   190,   147,    66,   149,    65,
     195,   152,     3,     4,    64,   200,     7,    66,     9,    66,
      11,    12,    13,    62,    62,    68,    17,    18,    25,    20,
      21,    22,    86,   141,     2,    26,    27,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      80,    42,   189,    60,    61,   156,   147,   149,   158,   134,
      67,   140,    -1,    54,    -1,   143,    -1,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    -1,    68,     3,     4,
       5,     6,     7,    -1,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    -1,     3,     4,    -1,    -1,     7,    -1,
       9,    -1,    11,    12,    13,    -1,    -1,    42,    17,    18,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    27,    54,
      -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    42,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    -1,    -1,    54,    -1,    -1,    -1,    58,
      -1,    -1,    61,    20,    21,    22,    65,    42,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    58,    -1,    42,    61,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    67,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    60,
      61,    -1,    -1,    64,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      60,    61,    -1,    63,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      60,    61,    -1,    63,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      60,    61,    62,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    60,
      61,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    60,    61,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      60,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    11,    12,    13,
      17,    18,    20,    21,    22,    26,    27,    42,    54,    58,
      61,    65,    70,    71,    72,    73,    74,    75,    81,    82,
      83,    94,    95,    98,    99,    26,    79,    80,    79,    26,
      26,    63,    75,    26,    75,    75,    75,    63,    63,    65,
      75,    75,    75,    76,    77,    75,     0,    72,    74,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    60,    61,    63,    63,    63,    63,    44,    66,
      43,    65,    66,    67,    63,    10,    67,   100,   100,    67,
      26,    75,    87,    88,    89,    43,    64,    62,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    26,    75,    75,    26,    28,    29,    30,    31,    33,
      61,    78,    80,    26,    34,    84,    85,    86,    26,    35,
      36,    37,    40,    90,    91,    92,    93,    75,    73,    74,
       8,    14,    15,    96,    97,    66,    62,    43,    75,    65,
      64,    78,    44,    26,    66,    26,    43,    62,    67,   100,
      38,    39,    81,    82,    92,    68,   100,    68,    74,    94,
     100,    76,    66,    68,    97,    75,    87,    88,    64,    75,
      66,    78,    66,    84,    19,   100,    93,    81,    82,    65,
      66,   100,    62,    78,    78,    78,    68,    86,   100,   100,
      62,   100
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    79,    79,
      80,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    93,    93,    94,    94,    94,    95,
      96,    96,    97,    97,    98,    99,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     3,     6,     3,     1,     4,     3,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     5,     2,     2,     8,     6,     7,     5,     3,
       4,     4,     1,     3,     0,     1,     3,     1,     0,     1,
       1,     3,     0,     1,     1,     1,     2,     1,     2,     2,
       3,     3,     6,     2,     0,     1,     3,     5,     5,     5,
       1,     2,     4,     3,     5,     3,     3
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
  case 2: /* program: top_stmt_list  */
#line 69 "parser.y"
                        {root = (yyvsp[0].SL); (yyval.SL) = (yyvsp[0].SL);}
#line 1375 "swift.tab.c"
    break;

  case 3: /* top_stmt_list: top_stmt  */
#line 73 "parser.y"
                         { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1381 "swift.tab.c"
    break;

  case 4: /* top_stmt_list: stmt_list top_stmt  */
#line 74 "parser.y"
                         { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1387 "swift.tab.c"
    break;

  case 5: /* top_stmt: stmt  */
#line 79 "parser.y"
                     { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1393 "swift.tab.c"
    break;

  case 6: /* top_stmt: func_decl ';'  */
#line 80 "parser.y"
                     { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1399 "swift.tab.c"
    break;

  case 7: /* top_stmt: class_decl ';'  */
#line 81 "parser.y"
                     { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1405 "swift.tab.c"
    break;

  case 8: /* stmt_list: stmt  */
#line 84 "parser.y"
                     { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1411 "swift.tab.c"
    break;

  case 9: /* stmt_list: stmt_list stmt  */
#line 85 "parser.y"
                     { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1417 "swift.tab.c"
    break;

  case 10: /* stmt: expr ';'  */
#line 89 "parser.y"
                       { (yyval.stmtNode) = StmtNode::createExprAsStmt((yyvsp[-1].exprNode)); }
#line 1423 "swift.tab.c"
    break;

  case 11: /* stmt: var_decl ';'  */
#line 90 "parser.y"
                       { (yyval.stmtNode) = (yyvsp[-1].stmtNode);}
#line 1429 "swift.tab.c"
    break;

  case 12: /* stmt: if_stmt  */
#line 91 "parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1435 "swift.tab.c"
    break;

  case 13: /* stmt: switch_stmt  */
#line 92 "parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1441 "swift.tab.c"
    break;

  case 14: /* stmt: for_stmt  */
#line 93 "parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1447 "swift.tab.c"
    break;

  case 15: /* stmt: while_stmt  */
#line 94 "parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1453 "swift.tab.c"
    break;

  case 16: /* stmt: RETURN ';'  */
#line 95 "parser.y"
                       { (yyval.stmtNode) = StmtNode::createReturnStmt(nullptr); }
#line 1459 "swift.tab.c"
    break;

  case 17: /* stmt: RETURN expr ';'  */
#line 96 "parser.y"
                       { (yyval.stmtNode) = StmtNode::createReturnStmt((yyvsp[-1].exprNode)); }
#line 1465 "swift.tab.c"
    break;

  case 18: /* stmt: BREAK ';'  */
#line 97 "parser.y"
                       { (yyval.stmtNode) = StmtNode::createBreakStmt(); }
#line 1471 "swift.tab.c"
    break;

  case 19: /* stmt: CONTINUE ';'  */
#line 98 "parser.y"
                       { (yyval.stmtNode) = StmtNode::createContinueStmt(); }
#line 1477 "swift.tab.c"
    break;

  case 20: /* expr: INT_DEC  */
#line 102 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createInt((yyvsp[0].Int)); }
#line 1483 "swift.tab.c"
    break;

  case 21: /* expr: FLOAT_DEC  */
#line 103 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createFloat((yyvsp[0].Float)); }
#line 1489 "swift.tab.c"
    break;

  case 22: /* expr: STRING_C  */
#line 104 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createId((yyvsp[0].Id)); }
#line 1495 "swift.tab.c"
    break;

  case 23: /* expr: TRUE  */
#line 105 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBool((yyvsp[0].boolVal)); }
#line 1501 "swift.tab.c"
    break;

  case 24: /* expr: FALSE  */
#line 106 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBool((yyvsp[0].boolVal)); }
#line 1507 "swift.tab.c"
    break;

  case 25: /* expr: expr '+' expr  */
#line 107 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Add); }
#line 1513 "swift.tab.c"
    break;

  case 26: /* expr: expr '-' expr  */
#line 108 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Sub); }
#line 1519 "swift.tab.c"
    break;

  case 27: /* expr: expr '*' expr  */
#line 109 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Mul); }
#line 1525 "swift.tab.c"
    break;

  case 28: /* expr: expr '/' expr  */
#line 110 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Div); }
#line 1531 "swift.tab.c"
    break;

  case 29: /* expr: expr EQ expr  */
#line 111 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Eq); }
#line 1537 "swift.tab.c"
    break;

  case 30: /* expr: expr NE expr  */
#line 112 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Ne); }
#line 1543 "swift.tab.c"
    break;

  case 31: /* expr: expr '>' expr  */
#line 113 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Gt); }
#line 1549 "swift.tab.c"
    break;

  case 32: /* expr: expr '<' expr  */
#line 114 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Lt); }
#line 1555 "swift.tab.c"
    break;

  case 33: /* expr: expr GE expr  */
#line 115 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Ge); }
#line 1561 "swift.tab.c"
    break;

  case 34: /* expr: expr LE expr  */
#line 116 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Le); }
#line 1567 "swift.tab.c"
    break;

  case 35: /* expr: expr '=' expr  */
#line 117 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Eq); }
#line 1573 "swift.tab.c"
    break;

  case 36: /* expr: expr AND expr  */
#line 118 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::And); }
#line 1579 "swift.tab.c"
    break;

  case 37: /* expr: expr OR expr  */
#line 119 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Or); }
#line 1585 "swift.tab.c"
    break;

  case 38: /* expr: '-' expr  */
#line 120 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createUnOperation((yyvsp[0].exprNode),ExprType::UMinus); }
#line 1591 "swift.tab.c"
    break;

  case 39: /* expr: NOT expr  */
#line 121 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createUnOperation((yyvsp[0].exprNode),ExprType::Not); }
#line 1597 "swift.tab.c"
    break;

  case 40: /* expr: expr '[' expr ']'  */
#line 122 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createSubscriptNode((yyvsp[-3].exprNode),(yyvsp[-1].exprNode)); }
#line 1603 "swift.tab.c"
    break;

  case 41: /* expr: expr '.' ID  */
#line 123 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createFiledAccessNode((yyvsp[-2].exprNode),(yyvsp[0].Id)); }
#line 1609 "swift.tab.c"
    break;

  case 42: /* expr: expr '.' ID '(' func_arg_list ')'  */
#line 124 "parser.y"
                                        { ExprNode* a = ExprNode::createFiledAccessNode((yyvsp[-5].exprNode),(yyvsp[-3].Id)); (yyval.exprNode) = ExprNode::createFuncCall((yyvsp[-1].EL),(yyvsp[-3].Id),a);}
#line 1615 "swift.tab.c"
    break;

  case 43: /* expr: '[' expr_list_e ']'  */
#line 125 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createArray((yyvsp[-1].EL));}
#line 1621 "swift.tab.c"
    break;

  case 44: /* expr: ID  */
#line 126 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createId((yyvsp[0].Id));}
#line 1627 "swift.tab.c"
    break;

  case 45: /* expr: ID '(' func_arg_list ')'  */
#line 127 "parser.y"
                                        { (yyval.exprNode) = ExprNode::createFuncCall((yyvsp[-1].EL),(yyvsp[-3].Id),nullptr);}
#line 1633 "swift.tab.c"
    break;

  case 46: /* expr: '(' expr ')'  */
#line 128 "parser.y"
                                        { (yyval.exprNode) = (yyvsp[-1].exprNode);}
#line 1639 "swift.tab.c"
    break;

  case 47: /* expr_list: expr  */
#line 133 "parser.y"
                          { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1645 "swift.tab.c"
    break;

  case 48: /* expr_list: expr_list ',' expr  */
#line 134 "parser.y"
                          { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1651 "swift.tab.c"
    break;

  case 49: /* expr_list_e: %empty  */
#line 138 "parser.y"
                { (yyval.EL) = nullptr; }
#line 1657 "swift.tab.c"
    break;

  case 50: /* expr_list_e: expr_list  */
#line 139 "parser.y"
                { (yyval.EL) = (yyvsp[0].EL); }
#line 1663 "swift.tab.c"
    break;

  case 51: /* type: INT_KW  */
#line 143 "parser.y"
                    {(yyval.Id) = (yyvsp[0].Id); }
#line 1669 "swift.tab.c"
    break;

  case 52: /* type: BOOL_KW  */
#line 144 "parser.y"
                    {(yyval.Id) = (yyvsp[0].Id); }
#line 1675 "swift.tab.c"
    break;

  case 53: /* type: UINT_KW  */
#line 145 "parser.y"
                    {(yyval.Id) = (yyvsp[0].Id); }
#line 1681 "swift.tab.c"
    break;

  case 54: /* type: FLOAT_KW  */
#line 146 "parser.y"
                    {(yyval.Id) = (yyvsp[0].Id); }
#line 1687 "swift.tab.c"
    break;

  case 55: /* type: STRING_KW  */
#line 147 "parser.y"
                    {(yyval.Id) = (yyvsp[0].Id); }
#line 1693 "swift.tab.c"
    break;

  case 56: /* type: ID  */
#line 148 "parser.y"
                    {(yyval.Id) = (yyvsp[0].Id); }
#line 1699 "swift.tab.c"
    break;

  case 57: /* type: '[' type ']'  */
#line 149 "parser.y"
                    {(yyval.Id) = (yyvsp[-1].Id); }
#line 1705 "swift.tab.c"
    break;

  case 58: /* decl_items: decl_item  */
#line 153 "parser.y"
                                { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1711 "swift.tab.c"
    break;

  case 59: /* decl_items: decl_items ',' decl_item  */
#line 154 "parser.y"
                                { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1717 "swift.tab.c"
    break;

  case 60: /* decl_item: ID '=' expr  */
#line 158 "parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-2].Id),(yyvsp[0].exprNode),nullptr); }
#line 1723 "swift.tab.c"
    break;

  case 61: /* decl_item: ID ':' type  */
#line 159 "parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-2].Id),nullptr,(yyvsp[0].Id)); }
#line 1729 "swift.tab.c"
    break;

  case 62: /* decl_item: ID ':' type '=' expr  */
#line 160 "parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-4].Id),(yyvsp[0].exprNode),(yyvsp[-2].Id));   }
#line 1735 "swift.tab.c"
    break;

  case 63: /* var_decl: LET_KW decl_items  */
#line 164 "parser.y"
                        { (yyval.stmtNode) = StmtNode::createDeclStmt((yyvsp[0].EL), StmtType::letDecl); }
#line 1741 "swift.tab.c"
    break;

  case 64: /* var_decl: VAR_KW decl_items  */
#line 165 "parser.y"
                        { (yyval.stmtNode) = StmtNode::createDeclStmt((yyvsp[0].EL), StmtType::varDecl); }
#line 1747 "swift.tab.c"
    break;

  case 65: /* func_decl: FUNC ID '(' func_param_list_e ')' ARROW type block  */
#line 169 "parser.y"
                                                       { (yyval.stmtNode) = StmtNode::createFuncDecl((yyvsp[-6].Id),(yyvsp[-4].EL),(yyvsp[-1].Id),(yyvsp[0].SL)); }
#line 1753 "swift.tab.c"
    break;

  case 66: /* func_decl: FUNC ID '(' func_param_list_e ')' block  */
#line 170 "parser.y"
                                                         { (yyval.stmtNode) = StmtNode::createFuncDecl((yyvsp[-4].Id),(yyvsp[-2].EL),nullptr,(yyvsp[0].SL)); }
#line 1759 "swift.tab.c"
    break;

  case 67: /* class_decl: CLASS ID ':' ID '{' class_decl_list_e '}'  */
#line 174 "parser.y"
                                              { (yyval.stmtNode) = StmtNode::createClassDecl((yyvsp[-5].Id),(yyvsp[-3].Id),(yyvsp[-1].SL));}
#line 1765 "swift.tab.c"
    break;

  case 68: /* class_decl: CLASS ID '{' class_decl_list_e '}'  */
#line 175 "parser.y"
                                              { (yyval.stmtNode) = StmtNode::createClassDecl((yyvsp[-3].Id),nullptr,(yyvsp[-1].SL));}
#line 1771 "swift.tab.c"
    break;

  case 69: /* func_param: ID ':' type  */
#line 179 "parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),nullptr,(yyvsp[0].Id)); }
#line 1777 "swift.tab.c"
    break;

  case 70: /* func_param: ID ID ':' type  */
#line 180 "parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),(yyvsp[-3].Id),(yyvsp[0].Id)); }
#line 1783 "swift.tab.c"
    break;

  case 71: /* func_param: '_' ID ':' type  */
#line 181 "parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),(yyvsp[-3].Id),(yyvsp[0].Id)); }
#line 1789 "swift.tab.c"
    break;

  case 72: /* func_param_list: func_param  */
#line 185 "parser.y"
                                     { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1795 "swift.tab.c"
    break;

  case 73: /* func_param_list: func_param_list ',' func_param  */
#line 186 "parser.y"
                                     { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1801 "swift.tab.c"
    break;

  case 74: /* func_param_list_e: %empty  */
#line 190 "parser.y"
                      { (yyval.EL) = nullptr; }
#line 1807 "swift.tab.c"
    break;

  case 75: /* func_param_list_e: func_param_list  */
#line 191 "parser.y"
                      { (yyval.EL) = (yyvsp[0].EL); }
#line 1813 "swift.tab.c"
    break;

  case 76: /* func_arg: ID ':' expr  */
#line 195 "parser.y"
                { (yyval.exprNode) = ExprNode::createFuncArgExpr((yyvsp[-2].Id),(yyvsp[0].exprNode)); }
#line 1819 "swift.tab.c"
    break;

  case 77: /* func_arg: expr  */
#line 196 "parser.y"
                { (yyval.exprNode) = ExprNode::createFuncArgExpr(nullptr,(yyvsp[0].exprNode)); }
#line 1825 "swift.tab.c"
    break;

  case 78: /* func_arg_list: %empty  */
#line 200 "parser.y"
                             { (yyval.EL) = nullptr; }
#line 1831 "swift.tab.c"
    break;

  case 79: /* func_arg_list: func_arg_list_nonempty  */
#line 201 "parser.y"
                             { (yyval.EL) = (yyvsp[0].EL); }
#line 1837 "swift.tab.c"
    break;

  case 80: /* func_arg_list_nonempty: func_arg  */
#line 205 "parser.y"
                                           { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1843 "swift.tab.c"
    break;

  case 81: /* func_arg_list_nonempty: func_arg_list_nonempty ',' func_arg  */
#line 206 "parser.y"
                                           { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1849 "swift.tab.c"
    break;

  case 82: /* access_modifier: %empty  */
#line 210 "parser.y"
                   { (yyval.Id) = nullptr; }
#line 1855 "swift.tab.c"
    break;

  case 83: /* access_modifier: PUBLIC  */
#line 211 "parser.y"
                   { (yyval.Id) = (yyvsp[0].Id); }
#line 1861 "swift.tab.c"
    break;

  case 84: /* access_modifier: FILE_PRIVATE  */
#line 212 "parser.y"
                   { (yyval.Id) = (yyvsp[0].Id); }
#line 1867 "swift.tab.c"
    break;

  case 85: /* access_modifier: PRIVATE  */
#line 213 "parser.y"
                   { (yyval.Id) = (yyvsp[0].Id); }
#line 1873 "swift.tab.c"
    break;

  case 86: /* class_decl_list: class_decl_list class_member  */
#line 217 "parser.y"
                                 { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1879 "swift.tab.c"
    break;

  case 87: /* class_decl_list: class_member  */
#line 218 "parser.y"
                   { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1885 "swift.tab.c"
    break;

  case 88: /* class_member: access_modifier var_decl  */
#line 222 "parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-1].Id),false,StmtType::classMemberVar);}
#line 1891 "swift.tab.c"
    break;

  case 89: /* class_member: access_modifier func_decl  */
#line 223 "parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-1].Id),false,StmtType::classMemberFunc);}
#line 1897 "swift.tab.c"
    break;

  case 90: /* class_member: access_modifier STATIC var_decl  */
#line 224 "parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-2].Id),true,StmtType::classMemberVar);}
#line 1903 "swift.tab.c"
    break;

  case 91: /* class_member: access_modifier STATIC func_decl  */
#line 225 "parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-2].Id),true,StmtType::classMemberFunc);}
#line 1909 "swift.tab.c"
    break;

  case 92: /* class_member: access_modifier INIT '(' func_param_list_e ')' block  */
#line 226 "parser.y"
                                                           { StmtNode* f = StmtNode::createFuncDecl((yyvsp[-4].Id),(yyvsp[-2].EL),nullptr,(yyvsp[0].SL));
                                                             (yyval.stmtNode) =  StmtNode::createClassMember(f,(yyvsp[-5].Id),false,StmtType::classMemberInit);  
                                                           }
#line 1917 "swift.tab.c"
    break;

  case 93: /* class_member: DEINIT block  */
#line 229 "parser.y"
                                                           { StmtNode* f = StmtNode::createFuncDecl((yyvsp[-1].Id),nullptr,nullptr,(yyvsp[0].SL)); 
                                                             (yyval.stmtNode) =  StmtNode::createClassMember(f,(yyvsp[-1].Id),false,StmtType::classMemberDeinit);
                                                           }
#line 1925 "swift.tab.c"
    break;

  case 94: /* class_decl_list_e: %empty  */
#line 235 "parser.y"
              { (yyval.SL) = nullptr;}
#line 1931 "swift.tab.c"
    break;

  case 95: /* class_decl_list_e: class_decl_list  */
#line 236 "parser.y"
                      { (yyval.SL) = (yyvsp[0].SL);}
#line 1937 "swift.tab.c"
    break;

  case 96: /* if_stmt: IF expr block  */
#line 240 "parser.y"
                  { (yyval.stmtNode) = StmtNode::createIfStmt((yyvsp[-1].exprNode),(yyvsp[0].SL),nullptr); }
#line 1943 "swift.tab.c"
    break;

  case 97: /* if_stmt: IF expr block ELSE if_stmt  */
#line 241 "parser.y"
                                 { (yyval.stmtNode) = StmtNode::createElseIfStmt((yyvsp[-3].exprNode),(yyvsp[-2].SL),(yyvsp[0].stmtNode));}
#line 1949 "swift.tab.c"
    break;

  case 98: /* if_stmt: IF expr block ELSE block  */
#line 242 "parser.y"
                               { (yyval.stmtNode) = StmtNode::createIfStmt((yyvsp[-3].exprNode),(yyvsp[-2].SL),(yyvsp[0].SL));  }
#line 1955 "swift.tab.c"
    break;

  case 99: /* switch_stmt: SWITCH expr '{' switch_case_list '}'  */
#line 246 "parser.y"
                                         { (yyval.stmtNode) = StmtNode::createSwitchStmt((yyvsp[-3].exprNode),(yyvsp[-1].SL));}
#line 1961 "swift.tab.c"
    break;

  case 100: /* switch_case_list: switch_case  */
#line 250 "parser.y"
                                    { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1967 "swift.tab.c"
    break;

  case 101: /* switch_case_list: switch_case_list switch_case  */
#line 251 "parser.y"
                                    { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1973 "swift.tab.c"
    break;

  case 102: /* switch_case: CASE expr_list ':' block  */
#line 255 "parser.y"
                             { (yyval.stmtNode) = StmtNode::createCaseStmt((yyvsp[-2].EL),(yyvsp[0].SL));}
#line 1979 "swift.tab.c"
    break;

  case 103: /* switch_case: DEFAULT ':' block  */
#line 256 "parser.y"
                             { (yyval.stmtNode) = StmtNode::createCaseStmt(nullptr,(yyvsp[0].SL));}
#line 1985 "swift.tab.c"
    break;

  case 104: /* for_stmt: FOR ID IN expr block  */
#line 260 "parser.y"
                         { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),(yyvsp[-3].Id),(yyvsp[0].SL),StmtType::For); }
#line 1991 "swift.tab.c"
    break;

  case 105: /* while_stmt: WHILE expr block  */
#line 264 "parser.y"
                     { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),nullptr,(yyvsp[0].SL),StmtType::While); }
#line 1997 "swift.tab.c"
    break;

  case 106: /* block: '{' stmt_list '}'  */
#line 268 "parser.y"
                      { (yyval.SL) = (yyvsp[-1].SL);}
#line 2003 "swift.tab.c"
    break;


#line 2007 "swift.tab.c"

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

#line 271 "parser.y"


void yyerror(const char* s){
 std::cerr << s << std::endl;
} 

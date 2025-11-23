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
#line 7 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include "nodes.h"
using namespace std;

void yyerror(const char* s);
int yylex(void);

Program* root = nullptr;


#line 87 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"

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
  YYSYMBOL_INT_KW = 20,                    /* INT_KW  */
  YYSYMBOL_BOOL_KW = 21,                   /* BOOL_KW  */
  YYSYMBOL_UINT_KW = 22,                   /* UINT_KW  */
  YYSYMBOL_FLOAT_KW = 23,                  /* FLOAT_KW  */
  YYSYMBOL_DOUBLE_KW = 24,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 25,                 /* STRING_KW  */
  YYSYMBOL_PUBLIC = 26,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 27,                   /* PRIVATE  */
  YYSYMBOL_FILE_PRIVATE = 28,              /* FILE_PRIVATE  */
  YYSYMBOL_STATIC = 29,                    /* STATIC  */
  YYSYMBOL_UNDERSCORE = 30,                /* UNDERSCORE  */
  YYSYMBOL_CLOSED_RANGE = 31,              /* CLOSED_RANGE  */
  YYSYMBOL_OPENED_RANGE = 32,              /* OPENED_RANGE  */
  YYSYMBOL_TRUE = 33,                      /* TRUE  */
  YYSYMBOL_FALSE = 34,                     /* FALSE  */
  YYSYMBOL_INT_DEC = 35,                   /* INT_DEC  */
  YYSYMBOL_INT_BINARY = 36,                /* INT_BINARY  */
  YYSYMBOL_INT_OCTAL = 37,                 /* INT_OCTAL  */
  YYSYMBOL_INT_HEXADECIMAL = 38,           /* INT_HEXADECIMAL  */
  YYSYMBOL_ID = 39,                        /* ID  */
  YYSYMBOL_STRING_C = 40,                  /* STRING_C  */
  YYSYMBOL_INIT = 41,                      /* INIT  */
  YYSYMBOL_DEINIT = 42,                    /* DEINIT  */
  YYSYMBOL_FLOAT_HEX = 43,                 /* FLOAT_HEX  */
  YYSYMBOL_FLOAT_DEC = 44,                 /* FLOAT_DEC  */
  YYSYMBOL_45_ = 45,                       /* ','  */
  YYSYMBOL_46_ = 46,                       /* '='  */
  YYSYMBOL_OR = 47,                        /* OR  */
  YYSYMBOL_AND = 48,                       /* AND  */
  YYSYMBOL_EQ = 49,                        /* EQ  */
  YYSYMBOL_NE = 50,                        /* NE  */
  YYSYMBOL_51_ = 51,                       /* '>'  */
  YYSYMBOL_52_ = 52,                       /* '<'  */
  YYSYMBOL_GE = 53,                        /* GE  */
  YYSYMBOL_LE = 54,                        /* LE  */
  YYSYMBOL_55_ = 55,                       /* '+'  */
  YYSYMBOL_56_ = 56,                       /* '-'  */
  YYSYMBOL_57_ = 57,                       /* '*'  */
  YYSYMBOL_58_ = 58,                       /* '/'  */
  YYSYMBOL_59_ = 59,                       /* '%'  */
  YYSYMBOL_NOT = 60,                       /* NOT  */
  YYSYMBOL_UNMINUS = 61,                   /* UNMINUS  */
  YYSYMBOL_62_ = 62,                       /* '.'  */
  YYSYMBOL_63_ = 63,                       /* '['  */
  YYSYMBOL_64_ = 64,                       /* ')'  */
  YYSYMBOL_65_ = 65,                       /* ';'  */
  YYSYMBOL_66_ = 66,                       /* ']'  */
  YYSYMBOL_67_ = 67,                       /* '('  */
  YYSYMBOL_68_ = 68,                       /* ':'  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_top_stmt_list = 73,             /* top_stmt_list  */
  YYSYMBOL_top_stmt = 74,                  /* top_stmt  */
  YYSYMBOL_stmt_list = 75,                 /* stmt_list  */
  YYSYMBOL_stmt = 76,                      /* stmt  */
  YYSYMBOL_expr = 77,                      /* expr  */
  YYSYMBOL_expr_list = 78,                 /* expr_list  */
  YYSYMBOL_expr_list_e = 79,               /* expr_list_e  */
  YYSYMBOL_type = 80,                      /* type  */
  YYSYMBOL_decl_items = 81,                /* decl_items  */
  YYSYMBOL_decl_item = 82,                 /* decl_item  */
  YYSYMBOL_var_decl = 83,                  /* var_decl  */
  YYSYMBOL_func_decl = 84,                 /* func_decl  */
  YYSYMBOL_class_decl = 85,                /* class_decl  */
  YYSYMBOL_func_param = 86,                /* func_param  */
  YYSYMBOL_func_param_list = 87,           /* func_param_list  */
  YYSYMBOL_func_param_list_e = 88,         /* func_param_list_e  */
  YYSYMBOL_func_arg = 89,                  /* func_arg  */
  YYSYMBOL_func_arg_list = 90,             /* func_arg_list  */
  YYSYMBOL_func_arg_list_nonempty = 91,    /* func_arg_list_nonempty  */
  YYSYMBOL_access_modifier = 92,           /* access_modifier  */
  YYSYMBOL_class_decl_list = 93,           /* class_decl_list  */
  YYSYMBOL_class_member = 94,              /* class_member  */
  YYSYMBOL_class_decl_list_e = 95,         /* class_decl_list_e  */
  YYSYMBOL_if_stmt = 96,                   /* if_stmt  */
  YYSYMBOL_switch_stmt = 97,               /* switch_stmt  */
  YYSYMBOL_switch_case_list = 98,          /* switch_case_list  */
  YYSYMBOL_switch_case = 99,               /* switch_case  */
  YYSYMBOL_for_stmt = 100,                 /* for_stmt  */
  YYSYMBOL_while_stmt = 101,               /* while_stmt  */
  YYSYMBOL_block = 102                     /* block  */
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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
       2,     2,     2,     2,     2,     2,     2,    59,     2,     2,
      67,    64,    57,    55,    45,    56,    62,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    65,
      52,    46,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      47,    48,    49,    50,    53,    54,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    79,    80,    84,    85,    86,    89,    90,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   140,
     141,   145,   146,   150,   151,   152,   153,   154,   155,   156,
     160,   161,   165,   166,   167,   171,   172,   176,   177,   181,
     182,   186,   187,   188,   192,   193,   197,   198,   202,   203,
     207,   208,   212,   213,   217,   218,   219,   220,   224,   225,
     229,   230,   231,   232,   233,   236,   242,   243,   247,   248,
     249,   253,   257,   258,   262,   263,   267,   268,   272,   276
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
  "CASE", "DEFAULT", "NIL", "BREAK", "CONTINUE", "ARROW", "INT_KW",
  "BOOL_KW", "UINT_KW", "FLOAT_KW", "DOUBLE_KW", "STRING_KW", "PUBLIC",
  "PRIVATE", "FILE_PRIVATE", "STATIC", "UNDERSCORE", "CLOSED_RANGE",
  "OPENED_RANGE", "TRUE", "FALSE", "INT_DEC", "INT_BINARY", "INT_OCTAL",
  "INT_HEXADECIMAL", "ID", "STRING_C", "INIT", "DEINIT", "FLOAT_HEX",
  "FLOAT_DEC", "','", "'='", "OR", "AND", "EQ", "NE", "'>'", "'<'", "GE",
  "LE", "'+'", "'-'", "'*'", "'/'", "'%'", "NOT", "UNMINUS", "'.'", "'['",
  "')'", "';'", "']'", "'('", "':'", "'{'", "'}'", "$accept", "program",
  "top_stmt_list", "top_stmt", "stmt_list", "stmt", "expr", "expr_list",
  "expr_list_e", "type", "decl_items", "decl_item", "var_decl",
  "func_decl", "class_decl", "func_param", "func_param_list",
  "func_param_list_e", "func_arg", "func_arg_list",
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

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     171,   -12,   -12,     2,     5,   157,    -4,   224,   224,   224,
     -42,   -17,  -139,  -139,  -139,    14,  -139,  -139,   224,   224,
     224,   224,    51,  -139,  -139,   171,    91,   338,    25,    37,
      38,  -139,  -139,  -139,  -139,   -25,    59,  -139,    59,    42,
     -35,  -139,   366,    95,    98,   254,   254,   282,  -139,  -139,
     399,    68,    68,   449,    66,    53,   421,  -139,  -139,    91,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,    78,   224,  -139,  -139,  -139,
    -139,   224,   -11,   -12,     6,    83,     4,  -139,   224,   224,
     232,  -139,   115,    41,    16,   449,  -139,    60,    81,   224,
    -139,  -139,   449,   449,   449,   477,   492,   198,   198,   198,
     198,   198,   198,   136,   136,    68,    68,    61,   310,   449,
    -139,  -139,  -139,  -139,  -139,  -139,   -11,    86,  -139,    94,
     -31,  -139,    96,    65,    70,  -139,  -139,  -139,    71,    84,
      12,  -139,    74,   254,   254,   103,  -139,     8,   224,    67,
      10,  -139,   224,  -139,   399,   449,   399,  -139,    80,   224,
      82,    87,   -11,     6,   -16,     4,  -139,    90,    93,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,   -26,
      71,  -139,  -139,   449,  -139,    97,  -139,   449,   -11,   -11,
    -139,  -139,   -11,  -139,    88,  -139,  -139,     6,    71,  -139,
    -139,  -139,  -139,    71,  -139,   100,  -139,  -139,    71,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    20,    44,    22,    21,     0,     0,
      51,     0,     0,     2,     3,     0,     8,     0,     0,     0,
       0,    12,    13,    14,    15,     0,    65,    60,    66,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    18,    19,
      80,    38,    39,    49,    52,     0,     0,     1,     4,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     6,
       7,     0,     0,     0,    76,     0,    84,    17,     0,     0,
       0,   108,    98,     0,    44,    79,    82,     0,    81,     0,
      43,    46,    47,    48,    35,    37,    36,    29,    30,    31,
      32,    33,    34,    25,    26,    27,    28,    41,     0,    62,
      53,    54,    55,    56,    57,    59,     0,    63,    61,     0,
       0,    74,    77,     0,     0,    85,    87,    86,     0,     0,
      84,    89,     0,     0,     0,     0,     8,     0,     0,     0,
       0,   102,     0,    45,     0,    50,    80,    40,     0,     0,
       0,     0,     0,     0,     0,    84,    95,     0,     0,    90,
      91,    88,    70,   107,   106,   109,     9,    99,   100,     0,
       0,   101,   103,    78,    83,     0,    58,    64,     0,     0,
      71,    75,     0,    68,     0,    92,    93,    76,     0,   105,
      42,    73,    72,     0,    69,     0,   104,    67,     0,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,   123,    64,   -18,    -3,    17,  -139,  -113,
     167,    89,  -138,  -117,  -139,    18,  -139,   -10,    31,    15,
    -139,  -139,  -139,    39,    21,    48,  -139,  -139,    50,  -139,
    -139,   -46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    22,    23,    24,    25,    26,    27,    54,    55,   127,
      36,    37,    28,    29,    30,   131,   132,   133,    96,    97,
      98,   139,   140,   141,   142,    31,    32,   150,   151,    33,
      34,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,   169,    42,   192,    45,    46,    47,    59,   161,   120,
     121,   122,   123,   158,   124,    51,    52,    53,    56,    99,
       8,    81,   170,    48,   148,   149,    43,    35,   125,   195,
     135,   136,   137,    85,    86,    44,   129,   162,   135,   136,
     137,    39,   198,    82,    40,   130,   138,    95,    49,   190,
     196,    57,   126,    90,   138,   148,   149,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   146,   118,   -96,   201,   202,    90,   119,   203,
     181,    50,   -97,    50,   152,   143,   144,     1,     2,     3,
      78,    -5,   166,     1,     2,     3,   155,   173,   174,    60,
      61,   178,    79,    80,    83,    88,     1,     2,    89,    84,
       5,    99,     6,   167,     7,     8,     9,   117,   193,   100,
      10,    11,   134,   147,   153,   168,   154,   176,   156,   164,
      75,    76,   159,   160,   199,   180,    12,    13,    14,   165,
      90,   163,    15,    16,   172,    53,   186,    17,    58,   183,
     188,    95,   206,    95,   145,   189,   187,   207,   204,    18,
     197,   200,   209,    19,   208,   179,    20,    60,    61,    38,
      21,   185,   128,   175,     1,     2,     3,     4,     5,   171,
       6,   191,     7,     8,     9,   184,   194,   205,    10,    11,
      12,    13,    14,    73,    74,   177,    15,    16,    75,    76,
     182,    17,     0,     0,    12,    13,    14,     0,     0,     0,
      15,    16,     0,    18,     0,    17,     0,    19,     0,     0,
      20,     0,    41,     0,    21,     0,     0,    18,     0,    60,
      61,    19,     0,     0,    20,     1,     2,     0,    21,     5,
       0,     6,     0,     7,     8,     9,     0,     0,     0,    10,
      11,     0,     0,    71,    72,    73,    74,    12,    13,    14,
      75,    76,     0,    15,    16,    12,    13,    14,    17,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,     0,
      18,     0,     0,     0,    19,    60,    61,    20,    18,     0,
       0,    21,    19,     0,     0,    20,     0,     0,     0,    21,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    60,    61,     0,    75,    76,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    60,    61,     0,    75,    76,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    60,
      61,     0,    75,    76,     0,     0,   157,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    60,    61,     0,
      75,    76,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     0,     0,     0,    75,    76,
       0,    87,    12,    13,    14,     0,     0,     0,    94,    16,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,    18,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,    21,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      60,    61,     0,    75,    76,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    60,    61,
       0,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    61,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     0,     0,     0,    75,
      76,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     0,     0,     0,    75,    76
};

static const yytype_int16 yycheck[] =
{
      46,   139,     5,    19,     7,     8,     9,    25,    39,    20,
      21,    22,    23,   126,    25,    18,    19,    20,    21,    45,
      12,    46,   139,    65,    14,    15,    30,    39,    39,   167,
      26,    27,    28,    68,    69,    39,    30,    68,    26,    27,
      28,    39,    68,    68,    39,    39,    42,    50,    65,   162,
     167,     0,    63,    69,    42,    14,    15,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    90,    76,    70,   188,   189,    69,    81,   192,
      70,    67,    70,    67,    68,    88,    89,     3,     4,     5,
      65,     0,   138,     3,     4,     5,    99,   143,   144,    31,
      32,   147,    65,    65,    45,    10,     3,     4,    10,    67,
       7,    45,     9,    29,    11,    12,    13,    39,   164,    66,
      17,    18,    39,     8,    64,    41,    45,   145,    67,    64,
      62,    63,    46,    39,   180,    68,    33,    34,    35,    69,
      69,    45,    39,    40,    70,   148,    66,    44,    25,   152,
      68,   154,   198,   156,    90,    68,   159,   203,    70,    56,
      67,    64,   208,    60,    64,   148,    63,    31,    32,     2,
      67,   156,    83,    70,     3,     4,     5,     6,     7,   140,
       9,   163,    11,    12,    13,   154,   165,   197,    17,    18,
      33,    34,    35,    57,    58,   147,    39,    40,    62,    63,
     150,    44,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    40,    -1,    56,    -1,    44,    -1,    60,    -1,    -1,
      63,    -1,    65,    -1,    67,    -1,    -1,    56,    -1,    31,
      32,    60,    -1,    -1,    63,     3,     4,    -1,    67,     7,
      -1,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    55,    56,    57,    58,    33,    34,    35,
      62,    63,    -1,    39,    40,    33,    34,    35,    44,    -1,
      -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    60,    31,    32,    63,    56,    -1,
      -1,    67,    60,    -1,    -1,    63,    -1,    -1,    -1,    67,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    31,    32,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    31,    32,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    31,
      32,    -1,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    31,    32,    -1,
      62,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    62,    63,
      -1,    65,    33,    34,    35,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    56,    -1,    -1,    -1,    60,
      -1,    -1,    63,    -1,    -1,    -1,    67,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      31,    32,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    31,    32,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    62,
      63,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    62,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    11,    12,    13,
      17,    18,    33,    34,    35,    39,    40,    44,    56,    60,
      63,    67,    72,    73,    74,    75,    76,    77,    83,    84,
      85,    96,    97,   100,   101,    39,    81,    82,    81,    39,
      39,    65,    77,    30,    39,    77,    77,    77,    65,    65,
      67,    77,    77,    77,    78,    79,    77,     0,    74,    76,
      31,    32,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    62,    63,    65,    65,    65,
      65,    46,    68,    45,    67,    68,    69,    65,    10,    10,
      69,   102,   102,    69,    39,    77,    89,    90,    91,    45,
      66,    64,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    39,    77,    77,
      20,    21,    22,    23,    25,    39,    63,    80,    82,    30,
      39,    86,    87,    88,    39,    26,    27,    28,    42,    92,
      93,    94,    95,    77,    77,    75,    76,     8,    14,    15,
      98,    99,    68,    64,    45,    77,    67,    66,    80,    46,
      39,    39,    68,    45,    64,    69,   102,    29,    41,    83,
      84,    94,    70,   102,   102,    70,    76,    96,   102,    78,
      68,    70,    99,    77,    89,    90,    66,    77,    68,    68,
      80,    86,    19,   102,    95,    83,    84,    67,    68,   102,
      64,    80,    80,    80,    70,    88,   102,   102,    64,   102
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    95,    95,    96,    96,
      96,    97,    98,    98,    99,    99,   100,   100,   101,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     3,     6,     3,     1,     4,     3,     3,     3,     1,
       3,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     3,     3,     5,     2,     2,     8,     6,     7,
       5,     3,     4,     4,     1,     3,     0,     1,     3,     1,
       0,     1,     1,     3,     0,     1,     1,     1,     2,     1,
       2,     2,     3,     3,     6,     2,     0,     1,     3,     5,
       5,     5,     1,     2,     4,     3,     5,     5,     3,     3
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
#line 75 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                        {root = new Program((yyvsp[0].SL)); (yyval.program) = root; root->print();}
#line 1388 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 3: /* top_stmt_list: top_stmt  */
#line 79 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                         { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1394 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 4: /* top_stmt_list: stmt_list top_stmt  */
#line 80 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                         { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1400 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 5: /* top_stmt: stmt  */
#line 84 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1406 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 6: /* top_stmt: func_decl ';'  */
#line 85 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1412 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 7: /* top_stmt: class_decl ';'  */
#line 86 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1418 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 8: /* stmt_list: stmt  */
#line 89 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1424 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 9: /* stmt_list: stmt_list stmt  */
#line 90 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1430 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 10: /* stmt: expr ';'  */
#line 94 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createExprAsStmt((yyvsp[-1].exprNode)); }
#line 1436 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 11: /* stmt: var_decl ';'  */
#line 95 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[-1].stmtNode);}
#line 1442 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 12: /* stmt: if_stmt  */
#line 96 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1448 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 13: /* stmt: switch_stmt  */
#line 97 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1454 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 14: /* stmt: for_stmt  */
#line 98 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1460 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 15: /* stmt: while_stmt  */
#line 99 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1466 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 16: /* stmt: RETURN ';'  */
#line 100 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createReturnStmt(nullptr); }
#line 1472 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 17: /* stmt: RETURN expr ';'  */
#line 101 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createReturnStmt((yyvsp[-1].exprNode)); }
#line 1478 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 18: /* stmt: BREAK ';'  */
#line 102 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createBreakStmt(); }
#line 1484 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 19: /* stmt: CONTINUE ';'  */
#line 103 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createContinueStmt(); }
#line 1490 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 20: /* expr: INT_DEC  */
#line 107 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createInt((yyvsp[0].Int)); }
#line 1496 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 21: /* expr: FLOAT_DEC  */
#line 108 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFloat((yyvsp[0].Float)); }
#line 1502 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 22: /* expr: STRING_C  */
#line 109 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createId((yyvsp[0].Id)); }
#line 1508 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 23: /* expr: TRUE  */
#line 110 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBool((yyvsp[0].boolVal)); }
#line 1514 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 24: /* expr: FALSE  */
#line 111 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBool((yyvsp[0].boolVal)); }
#line 1520 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 25: /* expr: expr '+' expr  */
#line 112 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Add); }
#line 1526 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 26: /* expr: expr '-' expr  */
#line 113 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Sub); }
#line 1532 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 27: /* expr: expr '*' expr  */
#line 114 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Mul); }
#line 1538 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 28: /* expr: expr '/' expr  */
#line 115 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Div); }
#line 1544 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 29: /* expr: expr EQ expr  */
#line 116 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Eq); }
#line 1550 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 30: /* expr: expr NE expr  */
#line 117 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Ne); }
#line 1556 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 31: /* expr: expr '>' expr  */
#line 118 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Gt); }
#line 1562 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 32: /* expr: expr '<' expr  */
#line 119 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Lt); }
#line 1568 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 33: /* expr: expr GE expr  */
#line 120 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Ge); }
#line 1574 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 34: /* expr: expr LE expr  */
#line 121 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Le); }
#line 1580 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 35: /* expr: expr '=' expr  */
#line 122 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Eq); }
#line 1586 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 36: /* expr: expr AND expr  */
#line 123 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::And); }
#line 1592 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 37: /* expr: expr OR expr  */
#line 124 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Or); }
#line 1598 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 38: /* expr: '-' expr  */
#line 125 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createUnOperation((yyvsp[0].exprNode),ExprType::UMinus); }
#line 1604 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 39: /* expr: NOT expr  */
#line 126 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createUnOperation((yyvsp[0].exprNode),ExprType::Not); }
#line 1610 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 40: /* expr: expr '[' expr ']'  */
#line 127 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createSubscriptNode((yyvsp[-3].exprNode),(yyvsp[-1].exprNode)); }
#line 1616 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 41: /* expr: expr '.' ID  */
#line 128 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFiledAccessNode((yyvsp[-2].exprNode),(yyvsp[0].Id)); }
#line 1622 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 42: /* expr: expr '.' ID '(' func_arg_list ')'  */
#line 129 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { ExprNode* a = ExprNode::createFiledAccessNode((yyvsp[-5].exprNode),(yyvsp[-3].Id)); (yyval.exprNode) = ExprNode::createFuncCall((yyvsp[-1].EL),(yyvsp[-3].Id),a);}
#line 1628 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 43: /* expr: '[' expr_list_e ']'  */
#line 130 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createArray((yyvsp[-1].EL));}
#line 1634 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 44: /* expr: ID  */
#line 131 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createId((yyvsp[0].Id));}
#line 1640 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 45: /* expr: ID '(' func_arg_list ')'  */
#line 132 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFuncCall((yyvsp[-1].EL),(yyvsp[-3].Id),nullptr);}
#line 1646 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 46: /* expr: '(' expr ')'  */
#line 133 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = (yyvsp[-1].exprNode);}
#line 1652 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 47: /* expr: expr CLOSED_RANGE expr  */
#line 134 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createLoopRange((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::ClosedRange);}
#line 1658 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 48: /* expr: expr OPENED_RANGE expr  */
#line 135 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createLoopRange((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::OpenedRange);}
#line 1664 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 49: /* expr_list: expr  */
#line 140 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                          { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1670 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 50: /* expr_list: expr_list ',' expr  */
#line 141 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                          { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1676 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 51: /* expr_list_e: %empty  */
#line 145 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.EL) = nullptr; }
#line 1682 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 52: /* expr_list_e: expr_list  */
#line 146 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.EL) = (yyvsp[0].EL); }
#line 1688 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 53: /* type: INT_KW  */
#line 150 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Int"));           }
#line 1694 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 54: /* type: BOOL_KW  */
#line 151 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Bool"));          }
#line 1700 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 55: /* type: UINT_KW  */
#line 152 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Uint"));          }
#line 1706 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 56: /* type: FLOAT_KW  */
#line 153 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Float"));          }
#line 1712 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 57: /* type: STRING_KW  */
#line 154 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("String"));        }
#line 1718 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 58: /* type: '[' type ']'  */
#line 155 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyvsp[-1].dataType)->arDimension++; (yyval.dataType) = (yyvsp[-1].dataType); }
#line 1724 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 59: /* type: ID  */
#line 156 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string(*(yyvsp[0].Id)));             }
#line 1730 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 60: /* decl_items: decl_item  */
#line 160 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1736 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 61: /* decl_items: decl_items ',' decl_item  */
#line 161 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1742 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 62: /* decl_item: ID '=' expr  */
#line 165 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-2].Id),(yyvsp[0].exprNode),nullptr); }
#line 1748 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 63: /* decl_item: ID ':' type  */
#line 166 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-2].Id),nullptr,(yyvsp[0].dataType)); }
#line 1754 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 64: /* decl_item: ID ':' type '=' expr  */
#line 167 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-4].Id),(yyvsp[0].exprNode),(yyvsp[-2].dataType));   }
#line 1760 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 65: /* var_decl: LET_KW decl_items  */
#line 171 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                        { (yyval.stmtNode) = StmtNode::createDeclStmt((yyvsp[0].EL), StmtType::letDecl); }
#line 1766 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 66: /* var_decl: VAR_KW decl_items  */
#line 172 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                        { (yyval.stmtNode) = StmtNode::createDeclStmt((yyvsp[0].EL), StmtType::varDecl); }
#line 1772 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 67: /* func_decl: FUNC ID '(' func_param_list_e ')' ARROW type block  */
#line 176 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                       { (yyval.stmtNode) = StmtNode::createFuncDecl((yyvsp[-6].Id),(yyvsp[-4].EL),(yyvsp[-1].dataType),(yyvsp[0].SL)); }
#line 1778 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 68: /* func_decl: FUNC ID '(' func_param_list_e ')' block  */
#line 177 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                         { (yyval.stmtNode) = StmtNode::createFuncDecl((yyvsp[-4].Id),(yyvsp[-2].EL),nullptr,(yyvsp[0].SL)); }
#line 1784 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 69: /* class_decl: CLASS ID ':' ID '{' class_decl_list_e '}'  */
#line 181 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                              { (yyval.stmtNode) = StmtNode::createClassDecl((yyvsp[-5].Id),(yyvsp[-3].Id),(yyvsp[-1].SL));}
#line 1790 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 70: /* class_decl: CLASS ID '{' class_decl_list_e '}'  */
#line 182 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                              { (yyval.stmtNode) = StmtNode::createClassDecl((yyvsp[-3].Id),nullptr,(yyvsp[-1].SL));}
#line 1796 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 71: /* func_param: ID ':' type  */
#line 186 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),nullptr,(yyvsp[0].dataType)); }
#line 1802 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 72: /* func_param: ID ID ':' type  */
#line 187 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),(yyvsp[-3].Id),(yyvsp[0].dataType)); }
#line 1808 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 73: /* func_param: UNDERSCORE ID ':' type  */
#line 188 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),new std::string("_"),(yyvsp[0].dataType)); }
#line 1814 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 74: /* func_param_list: func_param  */
#line 192 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                     { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1820 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 75: /* func_param_list: func_param_list ',' func_param  */
#line 193 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                     { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1826 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 76: /* func_param_list_e: %empty  */
#line 197 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.EL) = nullptr; }
#line 1832 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 77: /* func_param_list_e: func_param_list  */
#line 198 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.EL) = (yyvsp[0].EL); }
#line 1838 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 78: /* func_arg: ID ':' expr  */
#line 202 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.exprNode) = ExprNode::createFuncArgExpr((yyvsp[-2].Id),(yyvsp[0].exprNode)); }
#line 1844 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 79: /* func_arg: expr  */
#line 203 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.exprNode) = ExprNode::createFuncArgExpr(nullptr,(yyvsp[0].exprNode)); }
#line 1850 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 80: /* func_arg_list: %empty  */
#line 207 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.EL) = nullptr; }
#line 1856 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 81: /* func_arg_list: func_arg_list_nonempty  */
#line 208 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.EL) = (yyvsp[0].EL); }
#line 1862 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 82: /* func_arg_list_nonempty: func_arg  */
#line 212 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                           { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1868 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 83: /* func_arg_list_nonempty: func_arg_list_nonempty ',' func_arg  */
#line 213 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                           { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1874 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 84: /* access_modifier: %empty  */
#line 217 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = nullptr; }
#line 1880 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 85: /* access_modifier: PUBLIC  */
#line 218 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("PUBLIC"); }
#line 1886 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 86: /* access_modifier: FILE_PRIVATE  */
#line 219 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("FILE_PRIVATE"); }
#line 1892 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 87: /* access_modifier: PRIVATE  */
#line 220 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("PRIVATE"); }
#line 1898 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 88: /* class_decl_list: class_decl_list class_member  */
#line 224 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                 { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1904 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 89: /* class_decl_list: class_member  */
#line 225 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1910 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 90: /* class_member: access_modifier var_decl  */
#line 229 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-1].Id),false,StmtType::classMemberVar);}
#line 1916 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 91: /* class_member: access_modifier func_decl  */
#line 230 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-1].Id),false,StmtType::classMemberFunc);}
#line 1922 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 92: /* class_member: access_modifier STATIC var_decl  */
#line 231 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-2].Id),true,StmtType::classMemberVar);}
#line 1928 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 93: /* class_member: access_modifier STATIC func_decl  */
#line 232 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-2].Id),true,StmtType::classMemberFunc);}
#line 1934 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 94: /* class_member: access_modifier INIT '(' func_param_list_e ')' block  */
#line 233 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { StmtNode* f = StmtNode::createFuncDecl((yyvsp[-4].Id),(yyvsp[-2].EL),nullptr,(yyvsp[0].SL));
                                                             (yyval.stmtNode) =  StmtNode::createClassMember(f,(yyvsp[-5].Id),false,StmtType::classMemberInit);  
                                                           }
#line 1942 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 95: /* class_member: DEINIT block  */
#line 236 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { StmtNode* f = StmtNode::createFuncDecl((yyvsp[-1].Id),nullptr,nullptr,(yyvsp[0].SL)); 
                                                             (yyval.stmtNode) =  StmtNode::createClassMember(f,(yyvsp[-1].Id),false,StmtType::classMemberDeinit);
                                                           }
#line 1950 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 96: /* class_decl_list_e: %empty  */
#line 242 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
              { (yyval.SL) = nullptr;}
#line 1956 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 97: /* class_decl_list_e: class_decl_list  */
#line 243 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.SL) = (yyvsp[0].SL);}
#line 1962 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 98: /* if_stmt: IF expr block  */
#line 247 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                  { (yyval.stmtNode) = StmtNode::createIfStmt((yyvsp[-1].exprNode),(yyvsp[0].SL),nullptr); }
#line 1968 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 99: /* if_stmt: IF expr block ELSE if_stmt  */
#line 248 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                 { (yyval.stmtNode) = StmtNode::createElseIfStmt((yyvsp[-3].exprNode),(yyvsp[-2].SL),(yyvsp[0].stmtNode));}
#line 1974 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 100: /* if_stmt: IF expr block ELSE block  */
#line 249 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                               { (yyval.stmtNode) = StmtNode::createIfStmt((yyvsp[-3].exprNode),(yyvsp[-2].SL),(yyvsp[0].SL));  }
#line 1980 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 101: /* switch_stmt: SWITCH expr '{' switch_case_list '}'  */
#line 253 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                         { (yyval.stmtNode) = StmtNode::createSwitchStmt((yyvsp[-3].exprNode),(yyvsp[-1].SL));}
#line 1986 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 102: /* switch_case_list: switch_case  */
#line 257 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                    { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1992 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 103: /* switch_case_list: switch_case_list switch_case  */
#line 258 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                    { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1998 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 104: /* switch_case: CASE expr_list ':' block  */
#line 262 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.stmtNode) = StmtNode::createCaseStmt((yyvsp[-2].EL),(yyvsp[0].SL));}
#line 2004 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 105: /* switch_case: DEFAULT ':' block  */
#line 263 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.stmtNode) = StmtNode::createCaseStmt(nullptr,(yyvsp[0].SL));}
#line 2010 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 106: /* for_stmt: FOR ID IN expr block  */
#line 267 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                         { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),(yyvsp[-3].Id),(yyvsp[0].SL),StmtType::For); }
#line 2016 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 107: /* for_stmt: FOR UNDERSCORE IN expr block  */
#line 268 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                   { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),nullptr,(yyvsp[0].SL),StmtType::For); }
#line 2022 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 108: /* while_stmt: WHILE expr block  */
#line 272 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),nullptr,(yyvsp[0].SL),StmtType::While); }
#line 2028 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 109: /* block: '{' stmt_list '}'  */
#line 276 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.SL) = (yyvsp[-1].SL);}
#line 2034 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;


#line 2038 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"

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

#line 279 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"


void yyerror(const char* s){
 std::cerr << s << std::endl;
} 

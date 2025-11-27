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
#line 7 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"

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


#line 87 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"

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
  YYSYMBOL_WHERE = 16,                     /* WHERE  */
  YYSYMBOL_FALLTHROUGH = 17,               /* FALLTHROUGH  */
  YYSYMBOL_NIL = 18,                       /* NIL  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_ARROW = 21,                     /* ARROW  */
  YYSYMBOL_INT_KW = 22,                    /* INT_KW  */
  YYSYMBOL_BOOL_KW = 23,                   /* BOOL_KW  */
  YYSYMBOL_UINT_KW = 24,                   /* UINT_KW  */
  YYSYMBOL_FLOAT_KW = 25,                  /* FLOAT_KW  */
  YYSYMBOL_DOUBLE_KW = 26,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 27,                 /* STRING_KW  */
  YYSYMBOL_PUBLIC = 28,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 29,                   /* PRIVATE  */
  YYSYMBOL_FILE_PRIVATE = 30,              /* FILE_PRIVATE  */
  YYSYMBOL_OPEN = 31,                      /* OPEN  */
  YYSYMBOL_INTERNAL = 32,                  /* INTERNAL  */
  YYSYMBOL_STATIC = 33,                    /* STATIC  */
  YYSYMBOL_UNDERSCORE = 34,                /* UNDERSCORE  */
  YYSYMBOL_CLOSED_RANGE = 35,              /* CLOSED_RANGE  */
  YYSYMBOL_OPENED_RANGE = 36,              /* OPENED_RANGE  */
  YYSYMBOL_TRUE = 37,                      /* TRUE  */
  YYSYMBOL_FALSE = 38,                     /* FALSE  */
  YYSYMBOL_INT_DEC = 39,                   /* INT_DEC  */
  YYSYMBOL_INT_BINARY = 40,                /* INT_BINARY  */
  YYSYMBOL_INT_OCTAL = 41,                 /* INT_OCTAL  */
  YYSYMBOL_INT_HEXADECIMAL = 42,           /* INT_HEXADECIMAL  */
  YYSYMBOL_ID = 43,                        /* ID  */
  YYSYMBOL_STRING_C = 44,                  /* STRING_C  */
  YYSYMBOL_INIT = 45,                      /* INIT  */
  YYSYMBOL_DEINIT = 46,                    /* DEINIT  */
  YYSYMBOL_FLOAT_HEX = 47,                 /* FLOAT_HEX  */
  YYSYMBOL_FLOAT_DEC = 48,                 /* FLOAT_DEC  */
  YYSYMBOL_49_ = 49,                       /* ','  */
  YYSYMBOL_50_ = 50,                       /* '='  */
  YYSYMBOL_OR = 51,                        /* OR  */
  YYSYMBOL_AND = 52,                       /* AND  */
  YYSYMBOL_EQ = 53,                        /* EQ  */
  YYSYMBOL_NE = 54,                        /* NE  */
  YYSYMBOL_55_ = 55,                       /* '>'  */
  YYSYMBOL_56_ = 56,                       /* '<'  */
  YYSYMBOL_GE = 57,                        /* GE  */
  YYSYMBOL_LE = 58,                        /* LE  */
  YYSYMBOL_59_ = 59,                       /* '+'  */
  YYSYMBOL_60_ = 60,                       /* '-'  */
  YYSYMBOL_61_ = 61,                       /* '*'  */
  YYSYMBOL_62_ = 62,                       /* '/'  */
  YYSYMBOL_63_ = 63,                       /* '%'  */
  YYSYMBOL_NOT = 64,                       /* NOT  */
  YYSYMBOL_UNMINUS = 65,                   /* UNMINUS  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* '['  */
  YYSYMBOL_68_ = 68,                       /* ')'  */
  YYSYMBOL_69_ = 69,                       /* ';'  */
  YYSYMBOL_70_ = 70,                       /* ']'  */
  YYSYMBOL_71_ = 71,                       /* '('  */
  YYSYMBOL_72_ = 72,                       /* ':'  */
  YYSYMBOL_73_ = 73,                       /* '{'  */
  YYSYMBOL_74_ = 74,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 75,                  /* $accept  */
  YYSYMBOL_program = 76,                   /* program  */
  YYSYMBOL_top_stmt_list = 77,             /* top_stmt_list  */
  YYSYMBOL_top_stmt = 78,                  /* top_stmt  */
  YYSYMBOL_stmt_list = 79,                 /* stmt_list  */
  YYSYMBOL_stmt = 80,                      /* stmt  */
  YYSYMBOL_expr = 81,                      /* expr  */
  YYSYMBOL_expr_list = 82,                 /* expr_list  */
  YYSYMBOL_expr_list_e = 83,               /* expr_list_e  */
  YYSYMBOL_type = 84,                      /* type  */
  YYSYMBOL_decl_items = 85,                /* decl_items  */
  YYSYMBOL_decl_item = 86,                 /* decl_item  */
  YYSYMBOL_var_decl = 87,                  /* var_decl  */
  YYSYMBOL_func_decl = 88,                 /* func_decl  */
  YYSYMBOL_class_decl = 89,                /* class_decl  */
  YYSYMBOL_func_param = 90,                /* func_param  */
  YYSYMBOL_func_param_list = 91,           /* func_param_list  */
  YYSYMBOL_func_param_list_e = 92,         /* func_param_list_e  */
  YYSYMBOL_func_arg = 93,                  /* func_arg  */
  YYSYMBOL_func_arg_list = 94,             /* func_arg_list  */
  YYSYMBOL_func_arg_list_nonempty = 95,    /* func_arg_list_nonempty  */
  YYSYMBOL_access_modifier = 96,           /* access_modifier  */
  YYSYMBOL_class_decl_list = 97,           /* class_decl_list  */
  YYSYMBOL_class_member = 98,              /* class_member  */
  YYSYMBOL_class_decl_list_e = 99,         /* class_decl_list_e  */
  YYSYMBOL_if_stmt = 100,                  /* if_stmt  */
  YYSYMBOL_switch_stmt = 101,              /* switch_stmt  */
  YYSYMBOL_switch_case_list = 102,         /* switch_case_list  */
  YYSYMBOL_switch_case = 103,              /* switch_case  */
  YYSYMBOL_for_stmt = 104,                 /* for_stmt  */
  YYSYMBOL_while_stmt = 105,               /* while_stmt  */
  YYSYMBOL_block = 106                     /* block  */
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
#define YYLAST   482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
       2,     2,     2,     2,     2,     2,     2,    63,     2,     2,
      71,    68,    61,    59,    49,    60,    66,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    69,
      56,    50,    55,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    70,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,    74,     2,     2,     2,     2,
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
      45,    46,    47,    48,    51,    52,    53,    54,    57,    58,
      64,    65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    78,    79,    83,    84,    85,    89,    90,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   138,   139,   143,
     144,   148,   149,   150,   151,   152,   153,   154,   158,   159,
     163,   164,   165,   169,   170,   174,   175,   179,   180,   184,
     185,   186,   190,   191,   195,   196,   200,   201,   205,   206,
     210,   211,   215,   216,   217,   218,   222,   223,   227,   228,
     229,   230,   231,   234,   240,   241,   245,   246,   247,   251,
     255,   256,   260,   261,   265,   266,   270,   274
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
  "CASE", "DEFAULT", "WHERE", "FALLTHROUGH", "NIL", "BREAK", "CONTINUE",
  "ARROW", "INT_KW", "BOOL_KW", "UINT_KW", "FLOAT_KW", "DOUBLE_KW",
  "STRING_KW", "PUBLIC", "PRIVATE", "FILE_PRIVATE", "OPEN", "INTERNAL",
  "STATIC", "UNDERSCORE", "CLOSED_RANGE", "OPENED_RANGE", "TRUE", "FALSE",
  "INT_DEC", "INT_BINARY", "INT_OCTAL", "INT_HEXADECIMAL", "ID",
  "STRING_C", "INIT", "DEINIT", "FLOAT_HEX", "FLOAT_DEC", "','", "'='",
  "OR", "AND", "EQ", "NE", "'>'", "'<'", "GE", "LE", "'+'", "'-'", "'*'",
  "'/'", "'%'", "NOT", "UNMINUS", "'.'", "'['", "')'", "';'", "']'", "'('",
  "':'", "'{'", "'}'", "$accept", "program", "top_stmt_list", "top_stmt",
  "stmt_list", "stmt", "expr", "expr_list", "expr_list_e", "type",
  "decl_items", "decl_item", "var_decl", "func_decl", "class_decl",
  "func_param", "func_param_list", "func_param_list_e", "func_arg",
  "func_arg_list", "func_arg_list_nonempty", "access_modifier",
  "class_decl_list", "class_member", "class_decl_list_e", "if_stmt",
  "switch_stmt", "switch_case_list", "switch_case", "for_stmt",
  "while_stmt", "block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     165,   -21,   -21,   -13,    -1,   210,   -20,   218,   218,   218,
     -44,    10,  -120,  -120,  -120,     9,  -120,  -120,   218,   218,
     218,   218,    48,   165,  -120,  -120,   340,    15,  -120,  -120,
    -120,  -120,  -120,  -120,   -46,    40,  -120,    40,    21,   -27,
    -120,   360,    85,    88,   271,   271,   295,  -120,  -120,   249,
     -39,   -39,   399,    50,    31,   380,  -120,  -120,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,    60,   218,  -120,  -120,   218,    92,   -21,   -19,    64,
       4,  -120,   218,   218,   179,  -120,   110,    37,   -15,   399,
    -120,    52,    76,   218,  -120,  -120,   399,   415,   245,    62,
      62,    62,    62,    62,    62,   -23,   -23,   -39,   -39,    55,
     319,   399,  -120,  -120,  -120,  -120,  -120,  -120,    92,    84,
    -120,    90,   -41,  -120,    94,    71,    69,  -120,  -120,  -120,
      72,   105,     7,  -120,    75,   271,   271,    93,  -120,    -2,
     218,    82,     2,  -120,   218,  -120,   249,   399,   249,  -120,
      86,   218,    89,    91,    92,   -19,   -18,     4,  -120,    83,
      95,  -120,  -120,  -120,    96,  -120,  -120,   104,  -120,  -120,
    -120,   -43,    72,  -120,  -120,   399,  -120,    87,  -120,   399,
      92,    92,  -120,  -120,    92,  -120,   101,  -120,  -120,   -19,
    -120,  -120,    72,  -120,  -120,  -120,  -120,    72,   111,   113,
    -120,  -120,  -120,    72,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    20,    44,    22,    21,     0,     0,
      49,     0,     0,     2,     3,     5,     0,     0,     6,     7,
      12,    13,    14,    15,     0,    63,    58,    64,     0,     0,
      16,     0,     0,     0,     0,     0,     0,    18,    19,    78,
      38,    39,    47,    50,     0,     0,     1,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,    74,     0,
      82,    17,     0,     0,     0,   106,    96,     0,    44,    77,
      80,     0,    79,     0,    43,    46,    35,    37,    36,    29,
      30,    31,    32,    33,    34,    25,    26,    27,    28,    41,
       0,    60,    51,    52,    53,    54,    55,    57,     0,    61,
      59,     0,     0,    72,    75,     0,     0,    83,    85,    84,
       0,     0,    82,    87,     0,     0,     0,     0,     8,     0,
       0,     0,     0,   100,     0,    45,     0,    48,    78,    40,
       0,     0,     0,     0,     0,     0,     0,    82,    93,     0,
       0,    88,    89,    86,     0,   105,   104,     0,     9,    97,
      98,     0,     0,    99,   101,    76,    81,     0,    56,    62,
       0,     0,    69,    73,     0,    66,     0,    90,    91,    74,
      68,   107,     0,   103,    42,    71,    70,     0,     0,     0,
     102,    65,    67,     0,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   139,  -120,   -83,     0,    39,  -120,  -107,
     185,   112,  -119,  -118,  -120,    38,  -120,     5,    49,    53,
    -120,  -120,  -120,    65,    43,    57,  -120,  -120,    63,  -120,
    -120,   -45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    22,    23,    24,   137,    25,    26,    53,    54,   119,
      35,    36,    27,    28,    29,   123,   124,   125,    90,    91,
      92,   131,   132,   133,   134,    30,    31,   142,   143,    32,
      33,    85
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,   138,   153,   184,    75,    41,    93,    44,    45,    46,
       8,   150,   161,   162,    42,   121,   140,   141,    50,    51,
      52,    55,    34,    43,   122,    47,    76,    71,    72,   192,
      38,   154,   127,   128,   129,   127,   128,   129,    69,    70,
     187,   188,    39,    71,    72,    79,    80,   182,    56,    89,
     130,   140,   141,   130,   168,    84,    49,   144,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    84,   110,   195,   196,   111,   173,   197,   -94,    48,
      49,   -95,   135,   136,    74,   158,     1,     2,     3,    77,
     165,   166,    78,   147,   170,    82,     1,     2,    83,    93,
       5,    94,     6,   109,     7,     8,     9,   126,     1,     2,
       3,   185,    10,    11,   112,   113,   114,   115,   139,   116,
     145,    67,    68,    69,    70,   146,   148,   193,    71,    72,
      12,    13,    14,   152,   151,   117,    15,    16,   159,   156,
      52,    17,   157,   155,   175,    84,    89,   200,    89,   164,
     160,   179,   201,    18,   172,   194,   178,    19,   204,   118,
      20,   180,    57,   181,    21,   190,   189,   167,     1,     2,
       3,     4,     5,   191,     6,   198,     7,     8,     9,   171,
     202,   203,     1,     2,    10,    11,     5,    37,     6,   120,
       7,     8,     9,   183,   199,   176,   169,   163,    10,    11,
     186,   177,    12,    13,    14,   174,     0,     0,    15,    16,
       0,     0,     0,    17,     0,     0,    12,    13,    14,     0,
       0,     0,    15,    16,     0,    18,     0,    17,     0,    19,
       0,     0,    20,     0,     0,     0,    21,     0,     0,    18,
       0,     0,     0,    19,     0,     0,    20,    12,    13,    14,
      21,     0,     0,    15,    16,    12,    13,    14,    17,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,     0,
      18,     0,     0,     0,    19,     0,     0,    20,    18,    40,
       0,    21,    19,     0,     0,    20,    12,    13,    14,    21,
       0,     0,    88,    16,     0,     0,     0,    17,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,    18,
       0,    71,    72,    19,     0,     0,    20,     0,     0,     0,
      21,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,    71,    72,     0,
       0,     0,     0,     0,    84,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,    87,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,     0,     0,   149,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,    71,    72,     0,    73,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,    71,    72,     0,    81,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,    71,    72,    95,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,    71,    72
};

static const yytype_int16 yycheck[] =
{
      45,    84,    43,    21,    50,     5,    49,     7,     8,     9,
      12,   118,   131,   131,    34,    34,    14,    15,    18,    19,
      20,    21,    43,    43,    43,    69,    72,    66,    67,    72,
      43,    72,    28,    29,    30,    28,    29,    30,    61,    62,
     159,   159,    43,    66,    67,    72,    73,   154,     0,    49,
      46,    14,    15,    46,   137,    73,    71,    72,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    73,    72,   180,   181,    75,    74,   184,    74,    69,
      71,    74,    82,    83,    69,   130,     3,     4,     5,    49,
     135,   136,    71,    93,   139,    10,     3,     4,    10,    49,
       7,    70,     9,    43,    11,    12,    13,    43,     3,     4,
       5,   156,    19,    20,    22,    23,    24,    25,     8,    27,
      68,    59,    60,    61,    62,    49,    71,   172,    66,    67,
      37,    38,    39,    43,    50,    43,    43,    44,    33,    68,
     140,    48,    73,    49,   144,    73,   146,   192,   148,    74,
      45,   151,   197,    60,    72,    68,    70,    64,   203,    67,
      67,    72,    23,    72,    71,    69,    71,    74,     3,     4,
       5,     6,     7,    69,     9,    74,    11,    12,    13,   140,
      69,    68,     3,     4,    19,    20,     7,     2,     9,    77,
      11,    12,    13,   155,   189,   146,   139,   132,    19,    20,
     157,   148,    37,    38,    39,   142,    -1,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    43,    44,    -1,    60,    -1,    48,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    71,    -1,    -1,    60,
      -1,    -1,    -1,    64,    -1,    -1,    67,    37,    38,    39,
      71,    -1,    -1,    43,    44,    37,    38,    39,    48,    -1,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    -1,    67,    60,    69,
      -1,    71,    64,    -1,    -1,    67,    37,    38,    39,    71,
      -1,    -1,    43,    44,    -1,    -1,    -1,    48,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    60,
      -1,    66,    67,    64,    -1,    -1,    67,    -1,    -1,    -1,
      71,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    73,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,    70,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    67,    -1,    69,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    67,    -1,    69,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    67,    68,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    66,    67,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    11,    12,    13,
      19,    20,    37,    38,    39,    43,    44,    48,    60,    64,
      67,    71,    76,    77,    78,    80,    81,    87,    88,    89,
     100,   101,   104,   105,    43,    85,    86,    85,    43,    43,
      69,    81,    34,    43,    81,    81,    81,    69,    69,    71,
      81,    81,    81,    82,    83,    81,     0,    78,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    66,    67,    69,    69,    50,    72,    49,    71,    72,
      73,    69,    10,    10,    73,   106,   106,    73,    43,    81,
      93,    94,    95,    49,    70,    68,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    43,
      81,    81,    22,    23,    24,    25,    27,    43,    67,    84,
      86,    34,    43,    90,    91,    92,    43,    28,    29,    30,
      46,    96,    97,    98,    99,    81,    81,    79,    80,     8,
      14,    15,   102,   103,    72,    68,    49,    81,    71,    70,
      84,    50,    43,    43,    72,    49,    68,    73,   106,    33,
      45,    87,    88,    98,    74,   106,   106,    74,    80,   100,
     106,    82,    72,    74,   103,    81,    93,    94,    70,    81,
      72,    72,    84,    90,    21,   106,    99,    87,    88,    71,
      69,    69,    72,   106,    68,    84,    84,    84,    74,    92,
     106,   106,    69,    68,   106
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    78,    79,    79,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   100,   101,
     102,   102,   103,   103,   104,   104,   105,   106
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     3,     6,     3,     1,     4,     3,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       3,     3,     5,     2,     2,     8,     6,     8,     6,     3,
       4,     4,     1,     3,     0,     1,     3,     1,     0,     1,
       1,     3,     0,     1,     1,     1,     2,     1,     2,     2,
       3,     3,     6,     2,     0,     1,     3,     5,     5,     5,
       1,     2,     4,     3,     5,     5,     3,     4
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
#line 74 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                        {root = new Program((yyvsp[0].SL)); (yyval.program) = root; root->print();}
#line 1380 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 3: /* top_stmt_list: top_stmt  */
#line 78 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                         { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1386 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 4: /* top_stmt_list: top_stmt_list top_stmt  */
#line 79 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1392 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 5: /* top_stmt: stmt  */
#line 83 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1398 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 6: /* top_stmt: func_decl  */
#line 84 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1404 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 7: /* top_stmt: class_decl  */
#line 85 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1410 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 8: /* stmt_list: stmt  */
#line 89 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1416 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 9: /* stmt_list: stmt_list stmt  */
#line 90 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1422 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 10: /* stmt: expr ';'  */
#line 94 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createExprAsStmt((yyvsp[-1].exprNode)); }
#line 1428 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 11: /* stmt: var_decl ';'  */
#line 95 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[-1].stmtNode);}
#line 1434 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 12: /* stmt: if_stmt  */
#line 96 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1440 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 13: /* stmt: switch_stmt  */
#line 97 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1446 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 14: /* stmt: for_stmt  */
#line 98 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1452 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 15: /* stmt: while_stmt  */
#line 99 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1458 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 16: /* stmt: RETURN ';'  */
#line 100 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createReturnStmt(nullptr); }
#line 1464 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 17: /* stmt: RETURN expr ';'  */
#line 101 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createReturnStmt((yyvsp[-1].exprNode)); }
#line 1470 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 18: /* stmt: BREAK ';'  */
#line 102 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createBreakStmt(); }
#line 1476 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 19: /* stmt: CONTINUE ';'  */
#line 103 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                       { (yyval.stmtNode) = StmtNode::createContinueStmt(); }
#line 1482 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 20: /* expr: INT_DEC  */
#line 107 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createInt((yyvsp[0].Int)); }
#line 1488 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 21: /* expr: FLOAT_DEC  */
#line 108 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFloat((yyvsp[0].Float)); }
#line 1494 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 22: /* expr: STRING_C  */
#line 109 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createString((yyvsp[0].Id)); }
#line 1500 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 23: /* expr: TRUE  */
#line 110 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBool((yyvsp[0].boolVal)); }
#line 1506 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 24: /* expr: FALSE  */
#line 111 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBool((yyvsp[0].boolVal)); }
#line 1512 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 25: /* expr: expr '+' expr  */
#line 112 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Add); }
#line 1518 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 26: /* expr: expr '-' expr  */
#line 113 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Sub); }
#line 1524 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 27: /* expr: expr '*' expr  */
#line 114 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Mul); }
#line 1530 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 28: /* expr: expr '/' expr  */
#line 115 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Div); }
#line 1536 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 29: /* expr: expr EQ expr  */
#line 116 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Eq); }
#line 1542 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 30: /* expr: expr NE expr  */
#line 117 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Ne); }
#line 1548 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 31: /* expr: expr '>' expr  */
#line 118 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Gt); }
#line 1554 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 32: /* expr: expr '<' expr  */
#line 119 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Lt); }
#line 1560 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 33: /* expr: expr GE expr  */
#line 120 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Ge); }
#line 1566 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 34: /* expr: expr LE expr  */
#line 121 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Le); }
#line 1572 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 35: /* expr: expr '=' expr  */
#line 122 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Eq); }
#line 1578 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 36: /* expr: expr AND expr  */
#line 123 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::And); }
#line 1584 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 37: /* expr: expr OR expr  */
#line 124 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Or); }
#line 1590 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 38: /* expr: '-' expr  */
#line 125 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createUnOperation((yyvsp[0].exprNode),ExprType::UMinus); }
#line 1596 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 39: /* expr: NOT expr  */
#line 126 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createUnOperation((yyvsp[0].exprNode),ExprType::Not); }
#line 1602 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 40: /* expr: expr '[' expr ']'  */
#line 127 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createSubscriptNode((yyvsp[-3].exprNode),(yyvsp[-1].exprNode)); }
#line 1608 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 41: /* expr: expr '.' ID  */
#line 128 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFieldAccessNode((yyvsp[-2].exprNode),(yyvsp[0].Id)); }
#line 1614 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 42: /* expr: expr '.' ID '(' func_arg_list ')'  */
#line 129 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { ExprNode* access = ExprNode::createFieldAccessNode((yyvsp[-5].exprNode), (yyvsp[-3].Id)); (yyval.exprNode) = ExprNode::createFieldAccessCall(access,(yyvsp[-3].Id), (yyvsp[-1].EL));}
#line 1620 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 43: /* expr: '[' expr_list_e ']'  */
#line 130 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createArray((yyvsp[-1].EL));}
#line 1626 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 44: /* expr: ID  */
#line 131 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createId((yyvsp[0].Id));}
#line 1632 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 45: /* expr: ID '(' func_arg_list ')'  */
#line 132 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFuncCall((yyvsp[-1].EL),(yyvsp[-3].Id),nullptr);}
#line 1638 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 46: /* expr: '(' expr ')'  */
#line 133 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = (yyvsp[-1].exprNode);}
#line 1644 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 47: /* expr_list: expr  */
#line 138 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                          { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1650 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 48: /* expr_list: expr_list ',' expr  */
#line 139 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                          { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1656 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 49: /* expr_list_e: %empty  */
#line 143 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.EL) = nullptr; }
#line 1662 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 50: /* expr_list_e: expr_list  */
#line 144 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.EL) = (yyvsp[0].EL); }
#line 1668 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 51: /* type: INT_KW  */
#line 148 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Int"));           }
#line 1674 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 52: /* type: BOOL_KW  */
#line 149 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Bool"));          }
#line 1680 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 53: /* type: UINT_KW  */
#line 150 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Uint"));          }
#line 1686 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 54: /* type: FLOAT_KW  */
#line 151 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Float"));          }
#line 1692 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 55: /* type: STRING_KW  */
#line 152 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("String"));        }
#line 1698 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 56: /* type: '[' type ']'  */
#line 153 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyvsp[-1].dataType)->arDimension++; (yyval.dataType) = (yyvsp[-1].dataType); }
#line 1704 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 57: /* type: ID  */
#line 154 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string(*(yyvsp[0].Id)));             }
#line 1710 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 58: /* decl_items: decl_item  */
#line 158 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1716 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 59: /* decl_items: decl_items ',' decl_item  */
#line 159 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1722 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 60: /* decl_item: ID '=' expr  */
#line 163 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-2].Id),(yyvsp[0].exprNode),nullptr); }
#line 1728 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 61: /* decl_item: ID ':' type  */
#line 164 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-2].Id),nullptr,(yyvsp[0].dataType)); }
#line 1734 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 62: /* decl_item: ID ':' type '=' expr  */
#line 165 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-4].Id),(yyvsp[0].exprNode),(yyvsp[-2].dataType));   }
#line 1740 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 63: /* var_decl: LET_KW decl_items  */
#line 169 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                        { (yyval.stmtNode) = StmtNode::createDeclStmt((yyvsp[0].EL), StmtType::letDecl); }
#line 1746 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 64: /* var_decl: VAR_KW decl_items  */
#line 170 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                        { (yyval.stmtNode) = StmtNode::createDeclStmt((yyvsp[0].EL), StmtType::varDecl); }
#line 1752 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 65: /* func_decl: FUNC ID '(' func_param_list_e ')' ARROW type block  */
#line 174 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                       { (yyval.stmtNode) = StmtNode::createFuncDecl((yyvsp[-6].Id),(yyvsp[-4].EL),(yyvsp[-1].dataType),(yyvsp[0].SL)); }
#line 1758 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 66: /* func_decl: FUNC ID '(' func_param_list_e ')' block  */
#line 175 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                         { (yyval.stmtNode) = StmtNode::createFuncDecl((yyvsp[-4].Id),(yyvsp[-2].EL),nullptr,(yyvsp[0].SL)); }
#line 1764 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 67: /* class_decl: CLASS ID ':' ID '{' class_decl_list_e '}' ';'  */
#line 179 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                 { (yyval.stmtNode) = StmtNode::createClassDecl((yyvsp[-6].Id),(yyvsp[-4].Id),(yyvsp[-2].SL));}
#line 1770 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 68: /* class_decl: CLASS ID '{' class_decl_list_e '}' ';'  */
#line 180 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                 { (yyval.stmtNode) = StmtNode::createClassDecl((yyvsp[-4].Id),nullptr,(yyvsp[-2].SL));}
#line 1776 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 69: /* func_param: ID ':' type  */
#line 184 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),nullptr,(yyvsp[0].dataType)); }
#line 1782 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 70: /* func_param: ID ID ':' type  */
#line 185 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),(yyvsp[-3].Id),(yyvsp[0].dataType)); }
#line 1788 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 71: /* func_param: UNDERSCORE ID ':' type  */
#line 186 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),new std::string("_"),(yyvsp[0].dataType)); }
#line 1794 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 72: /* func_param_list: func_param  */
#line 190 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                     { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1800 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 73: /* func_param_list: func_param_list ',' func_param  */
#line 191 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                     { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1806 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 74: /* func_param_list_e: %empty  */
#line 195 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.EL) = nullptr; }
#line 1812 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 75: /* func_param_list_e: func_param_list  */
#line 196 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.EL) = (yyvsp[0].EL); }
#line 1818 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 76: /* func_arg: ID ':' expr  */
#line 200 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.exprNode) = ExprNode::createFuncArgExpr((yyvsp[-2].Id),(yyvsp[0].exprNode)); }
#line 1824 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 77: /* func_arg: expr  */
#line 201 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.exprNode) = ExprNode::createFuncArgExpr(nullptr,(yyvsp[0].exprNode)); }
#line 1830 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 78: /* func_arg_list: %empty  */
#line 205 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.EL) = nullptr; }
#line 1836 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 79: /* func_arg_list: func_arg_list_nonempty  */
#line 206 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.EL) = (yyvsp[0].EL); }
#line 1842 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 80: /* func_arg_list_nonempty: func_arg  */
#line 210 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                           { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1848 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 81: /* func_arg_list_nonempty: func_arg_list_nonempty ',' func_arg  */
#line 211 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                           { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1854 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 82: /* access_modifier: %empty  */
#line 215 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = nullptr; }
#line 1860 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 83: /* access_modifier: PUBLIC  */
#line 216 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("PUBLIC"); }
#line 1866 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 84: /* access_modifier: FILE_PRIVATE  */
#line 217 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("FILE_PRIVATE"); }
#line 1872 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 85: /* access_modifier: PRIVATE  */
#line 218 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("PRIVATE"); }
#line 1878 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 86: /* class_decl_list: class_decl_list class_member  */
#line 222 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                 { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1884 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 87: /* class_decl_list: class_member  */
#line 223 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1890 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 88: /* class_member: access_modifier var_decl  */
#line 227 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-1].Id),false,StmtType::classMemberVar);}
#line 1896 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 89: /* class_member: access_modifier func_decl  */
#line 228 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-1].Id),false,StmtType::classMemberFunc);}
#line 1902 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 90: /* class_member: access_modifier STATIC var_decl  */
#line 229 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-2].Id),true,StmtType::classMemberVar);}
#line 1908 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 91: /* class_member: access_modifier STATIC func_decl  */
#line 230 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-2].Id),true,StmtType::classMemberFunc);}
#line 1914 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 92: /* class_member: access_modifier INIT '(' func_param_list_e ')' block  */
#line 231 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { StmtNode* f = StmtNode::createFuncDecl((yyvsp[-4].Id),(yyvsp[-2].EL),nullptr,(yyvsp[0].SL));
                                                             (yyval.stmtNode) =  StmtNode::createClassMember(f,(yyvsp[-5].Id),false,StmtType::classMemberInit);  
                                                           }
#line 1922 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 93: /* class_member: DEINIT block  */
#line 234 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { StmtNode* f = StmtNode::createFuncDecl((yyvsp[-1].Id),nullptr,nullptr,(yyvsp[0].SL)); 
                                                             (yyval.stmtNode) =  StmtNode::createClassMember(f,(yyvsp[-1].Id),false,StmtType::classMemberDeinit);
                                                           }
#line 1930 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 94: /* class_decl_list_e: %empty  */
#line 240 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
              { (yyval.SL) = nullptr;}
#line 1936 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 95: /* class_decl_list_e: class_decl_list  */
#line 241 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.SL) = (yyvsp[0].SL);}
#line 1942 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 96: /* if_stmt: IF expr block  */
#line 245 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                  { (yyval.stmtNode) = StmtNode::createIfStmt((yyvsp[-1].exprNode),(yyvsp[0].SL),nullptr); }
#line 1948 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 97: /* if_stmt: IF expr block ELSE if_stmt  */
#line 246 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                 { (yyval.stmtNode) = StmtNode::createElseIfStmt((yyvsp[-3].exprNode),(yyvsp[-2].SL),(yyvsp[0].stmtNode));}
#line 1954 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 98: /* if_stmt: IF expr block ELSE block  */
#line 247 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                               { (yyval.stmtNode) = StmtNode::createIfStmt((yyvsp[-3].exprNode),(yyvsp[-2].SL),(yyvsp[0].SL));  }
#line 1960 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 99: /* switch_stmt: SWITCH expr '{' switch_case_list '}'  */
#line 251 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                         { (yyval.stmtNode) = StmtNode::createSwitchStmt((yyvsp[-3].exprNode),(yyvsp[-1].SL));}
#line 1966 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 100: /* switch_case_list: switch_case  */
#line 255 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                    { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1972 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 101: /* switch_case_list: switch_case_list switch_case  */
#line 256 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                    { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1978 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 102: /* switch_case: CASE expr_list ':' block  */
#line 260 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.stmtNode) = StmtNode::createCaseStmt((yyvsp[-2].EL),(yyvsp[0].SL));}
#line 1984 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 103: /* switch_case: DEFAULT ':' block  */
#line 261 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.stmtNode) = StmtNode::createCaseStmt(nullptr,(yyvsp[0].SL));}
#line 1990 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 104: /* for_stmt: FOR ID IN expr block  */
#line 265 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                         { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),(yyvsp[-3].Id),(yyvsp[0].SL),StmtType::For); }
#line 1996 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 105: /* for_stmt: FOR UNDERSCORE IN expr block  */
#line 266 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                                   { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),nullptr,(yyvsp[0].SL),StmtType::For); }
#line 2002 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 106: /* while_stmt: WHILE expr block  */
#line 270 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),nullptr,(yyvsp[0].SL),StmtType::While); }
#line 2008 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 107: /* block: '{' stmt_list '}' ';'  */
#line 274 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"
                          { (yyval.SL) = (yyvsp[-2].SL);}
#line 2014 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;


#line 2018 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\swift.tab.c"

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

#line 277 "C:\\Users\\shama\\Desktop\\SwiftLexer\\SwiftLexer\\parser.y"


void yyerror(const char* s){
 std::cerr << s << std::endl;
} 

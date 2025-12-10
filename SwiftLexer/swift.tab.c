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
  YYSYMBOL_NEW_LINE = 37,                  /* NEW_LINE  */
  YYSYMBOL_TRUE = 38,                      /* TRUE  */
  YYSYMBOL_FALSE = 39,                     /* FALSE  */
  YYSYMBOL_INT_DEC = 40,                   /* INT_DEC  */
  YYSYMBOL_INT_BINARY = 41,                /* INT_BINARY  */
  YYSYMBOL_INT_OCTAL = 42,                 /* INT_OCTAL  */
  YYSYMBOL_INT_HEXADECIMAL = 43,           /* INT_HEXADECIMAL  */
  YYSYMBOL_ID = 44,                        /* ID  */
  YYSYMBOL_STRING_C = 45,                  /* STRING_C  */
  YYSYMBOL_INIT = 46,                      /* INIT  */
  YYSYMBOL_DEINIT = 47,                    /* DEINIT  */
  YYSYMBOL_FLOAT_HEX = 48,                 /* FLOAT_HEX  */
  YYSYMBOL_FLOAT_DEC = 49,                 /* FLOAT_DEC  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* '='  */
  YYSYMBOL_OR = 52,                        /* OR  */
  YYSYMBOL_AND = 53,                       /* AND  */
  YYSYMBOL_EQ = 54,                        /* EQ  */
  YYSYMBOL_NE = 55,                        /* NE  */
  YYSYMBOL_56_ = 56,                       /* '>'  */
  YYSYMBOL_57_ = 57,                       /* '<'  */
  YYSYMBOL_GE = 58,                        /* GE  */
  YYSYMBOL_LE = 59,                        /* LE  */
  YYSYMBOL_60_ = 60,                       /* '+'  */
  YYSYMBOL_61_ = 61,                       /* '-'  */
  YYSYMBOL_62_ = 62,                       /* '*'  */
  YYSYMBOL_63_ = 63,                       /* '/'  */
  YYSYMBOL_64_ = 64,                       /* '%'  */
  YYSYMBOL_NOT = 65,                       /* NOT  */
  YYSYMBOL_UNMINUS = 66,                   /* UNMINUS  */
  YYSYMBOL_67_ = 67,                       /* '.'  */
  YYSYMBOL_68_ = 68,                       /* '['  */
  YYSYMBOL_69_ = 69,                       /* ')'  */
  YYSYMBOL_70_ = 70,                       /* ';'  */
  YYSYMBOL_71_ = 71,                       /* ']'  */
  YYSYMBOL_72_ = 72,                       /* '('  */
  YYSYMBOL_73_ = 73,                       /* ':'  */
  YYSYMBOL_74_ = 74,                       /* '{'  */
  YYSYMBOL_75_ = 75,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_program = 77,                   /* program  */
  YYSYMBOL_separator = 78,                 /* separator  */
  YYSYMBOL_new_line_list = 79,             /* new_line_list  */
  YYSYMBOL_opt_newlines = 80,              /* opt_newlines  */
  YYSYMBOL_top_stmt_list_opt = 81,         /* top_stmt_list_opt  */
  YYSYMBOL_top_stmt_list = 82,             /* top_stmt_list  */
  YYSYMBOL_top_stmt = 83,                  /* top_stmt  */
  YYSYMBOL_stmt_list_opt = 84,             /* stmt_list_opt  */
  YYSYMBOL_stmt_list = 85,                 /* stmt_list  */
  YYSYMBOL_stmt = 86,                      /* stmt  */
  YYSYMBOL_expr = 87,                      /* expr  */
  YYSYMBOL_expr_list = 88,                 /* expr_list  */
  YYSYMBOL_expr_list_e = 89,               /* expr_list_e  */
  YYSYMBOL_type = 90,                      /* type  */
  YYSYMBOL_decl_items = 91,                /* decl_items  */
  YYSYMBOL_decl_item = 92,                 /* decl_item  */
  YYSYMBOL_var_decl = 93,                  /* var_decl  */
  YYSYMBOL_func_decl = 94,                 /* func_decl  */
  YYSYMBOL_class_decl = 95,                /* class_decl  */
  YYSYMBOL_func_param = 96,                /* func_param  */
  YYSYMBOL_func_param_list = 97,           /* func_param_list  */
  YYSYMBOL_func_param_list_e = 98,         /* func_param_list_e  */
  YYSYMBOL_func_arg = 99,                  /* func_arg  */
  YYSYMBOL_func_arg_list = 100,            /* func_arg_list  */
  YYSYMBOL_func_arg_list_nonempty = 101,   /* func_arg_list_nonempty  */
  YYSYMBOL_access_modifier = 102,          /* access_modifier  */
  YYSYMBOL_class_decl_list = 103,          /* class_decl_list  */
  YYSYMBOL_class_member = 104,             /* class_member  */
  YYSYMBOL_class_decl_list_e = 105,        /* class_decl_list_e  */
  YYSYMBOL_if_stmt = 106,                  /* if_stmt  */
  YYSYMBOL_switch_stmt = 107,              /* switch_stmt  */
  YYSYMBOL_switch_case_list = 108,         /* switch_case_list  */
  YYSYMBOL_switch_case = 109,              /* switch_case  */
  YYSYMBOL_for_stmt = 110,                 /* for_stmt  */
  YYSYMBOL_while_stmt = 111,               /* while_stmt  */
  YYSYMBOL_block = 112                     /* block  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   566

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
       2,     2,     2,     2,     2,     2,     2,    64,     2,     2,
      72,    69,    62,    60,    50,    61,    67,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    70,
      57,    51,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    71,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    75,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    52,    53,    54,    55,    58,
      59,    65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    79,    80,    81,    82,    86,    87,    90,
      92,    96,    97,   101,   102,   106,   107,   108,   113,   114,
     118,   119,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   169,   170,   174,   175,   179,   180,   181,   182,   183,
     184,   185,   189,   190,   194,   195,   196,   200,   201,   205,
     206,   210,   211,   215,   216,   217,   221,   222,   226,   227,
     231,   232,   236,   237,   241,   242,   246,   247,   248,   249,
     253,   254,   258,   259,   260,   261,   262,   265,   271,   272,
     276,   277,   278,   282,   286,   287,   291,   292,   296,   297,
     301,   305
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
  "STATIC", "UNDERSCORE", "CLOSED_RANGE", "OPENED_RANGE", "NEW_LINE",
  "TRUE", "FALSE", "INT_DEC", "INT_BINARY", "INT_OCTAL", "INT_HEXADECIMAL",
  "ID", "STRING_C", "INIT", "DEINIT", "FLOAT_HEX", "FLOAT_DEC", "','",
  "'='", "OR", "AND", "EQ", "NE", "'>'", "'<'", "GE", "LE", "'+'", "'-'",
  "'*'", "'/'", "'%'", "NOT", "UNMINUS", "'.'", "'['", "')'", "';'", "']'",
  "'('", "':'", "'{'", "'}'", "$accept", "program", "separator",
  "new_line_list", "opt_newlines", "top_stmt_list_opt", "top_stmt_list",
  "top_stmt", "stmt_list_opt", "stmt_list", "stmt", "expr", "expr_list",
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

#define YYPACT_NINF (-172)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-110)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,  -172,    29,    33,   290,  -172,  -172,    63,    63,    67,
      70,   136,   -13,   383,   383,   383,     2,     2,  -172,  -172,
    -172,    50,  -172,  -172,   383,   383,   383,   383,   -21,   290,
    -172,  -172,   222,     2,     2,     2,     2,     2,     2,     2,
      40,    -4,  -172,    -4,    69,   -25,  -172,   -21,  -172,  -172,
     222,   129,   132,   425,   425,   425,  -172,  -172,   391,    38,
      38,   454,    94,    72,   357,  -172,  -172,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   101,   383,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,   383,   -17,    63,    93,   107,    79,  -172,  -172,
     383,   383,    80,  -172,    -5,    83,    53,   454,  -172,    87,
     108,   383,  -172,  -172,   454,   454,   454,   483,   498,   151,
     151,   151,   151,   151,   151,    61,    61,    38,    38,    89,
     328,   454,  -172,  -172,  -172,  -172,  -172,  -172,   -17,   109,
    -172,   115,   -35,  -172,   113,    98,   -21,   -21,   425,   425,
     -21,   160,   -21,   383,  -172,   391,   454,   391,  -172,    99,
     383,   104,   105,   -17,    93,    82,   121,    65,  -172,  -172,
     304,     7,   119,   454,  -172,   103,  -172,   454,   -17,   -17,
    -172,  -172,   -17,  -172,   -21,  -172,  -172,  -172,   -21,    10,
     -26,  -172,   -21,   -21,   304,  -172,  -172,  -172,   383,   106,
      -7,  -172,  -172,  -172,  -172,   -21,    65,     2,   127,   110,
       2,     2,    88,   114,   123,  -172,   -33,   -21,  -172,   119,
    -172,   -21,  -172,     2,  -172,    93,  -172,  -172,   -21,     2,
     -21,   -21,   304,   -21,   124,  -172,   133,  -172,  -172,  -172,
     304,  -172,  -172,     2,   -21,  -172,  -172,     2,  -172
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     7,     0,    10,    11,     1,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     9,     9,    35,    36,
      32,    56,    34,    33,     0,     0,    63,     0,     9,    12,
      13,    15,     9,     9,     9,     9,     9,     9,     9,     9,
       0,    77,    72,    78,     0,     9,     6,     3,    28,     4,
       9,     0,     0,     9,     9,     9,    30,    31,    92,    50,
      51,    61,    64,     0,     0,     2,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    16,    17,    24,    25,
      26,    27,     0,     0,     0,    88,     0,     0,     5,    29,
       0,     0,     0,   120,   110,     0,    56,    91,    94,     0,
      93,     0,    55,    58,    59,    60,    47,    49,    48,    41,
      42,    43,    44,    45,    46,    37,    38,    39,    40,    53,
       0,    74,    65,    66,    67,    68,    69,    71,     0,    75,
      73,     0,     0,    86,    89,     0,     9,     9,     9,     9,
       9,     0,     9,     0,    57,     0,    62,    92,    52,     0,
       0,     0,     0,     0,     0,     9,     0,    96,   119,   118,
      18,     9,     0,    90,    95,     0,    70,    76,     0,     0,
      83,    87,     0,    80,     9,    97,    99,    98,     9,     0,
       9,   101,     9,     9,    19,    20,   111,   112,     0,     0,
       9,   114,    54,    85,    84,     9,    96,     9,     0,     0,
       9,     9,    96,     0,     0,    21,     0,     9,   113,     0,
      79,     9,   107,     9,   105,    88,   102,   103,     9,     9,
       9,     9,    18,     9,     0,   104,     0,   100,    82,   121,
      18,   117,   115,     9,     9,   116,    81,     9,   106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,    25,  -172,     0,  -172,  -172,   154,  -132,  -172,
      -3,     9,    -2,  -172,  -113,   195,   116,  -171,  -137,  -172,
      45,  -172,   -10,    68,    59,  -172,  -172,  -172,     8,    18,
      54,  -172,  -172,    15,  -172,  -172,   -50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    48,     3,    49,    28,    29,    30,   193,   194,
     195,    32,    62,    63,   139,    41,    42,    33,    34,    35,
     143,   144,   145,   108,   109,   110,   189,   190,   191,   192,
      36,    37,   200,   201,    38,    39,   103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       4,    31,    46,    -9,   104,   132,   133,   134,   135,   162,
     136,     1,     1,     7,     8,     9,     1,   111,   210,    14,
      50,    51,    53,    54,    55,   159,    31,   137,    65,     5,
       1,    52,     1,    59,    60,    61,    64,   223,   163,     1,
     231,    56,    57,   208,     1,    97,    94,    98,    96,  -109,
     180,   138,   211,   102,   102,   105,   209,    84,    85,    86,
      87,    88,    89,    90,    91,   203,   204,   107,   218,   205,
       6,   224,    47,    67,    68,    99,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    92,   130,   185,   186,   187,    67,    68,   168,   169,
     241,   131,  -108,   182,   151,    82,    83,    40,   245,   148,
     149,    44,   188,    93,    45,   183,   185,   186,   187,     1,
     156,   197,    58,    80,    81,    58,   153,   141,    82,    83,
       7,     8,     9,   198,   199,   188,    46,   142,   207,   100,
    -108,    95,   101,   112,   111,   129,   166,   167,   102,   102,
     170,   146,   172,   147,   150,   220,   154,   152,   155,   161,
     160,   157,   173,   164,   107,   102,   107,   165,   171,   177,
     176,   102,   202,     1,    18,    19,    20,   178,   179,   217,
      21,    22,   225,    66,   206,    23,    67,    68,   102,   229,
     212,   215,   213,   214,   247,   184,   216,    24,   230,   243,
     219,    25,   244,    43,    26,   102,    47,    61,    27,   181,
     140,    78,    79,    80,    81,   236,   175,   232,    82,    83,
     228,   234,    46,   174,   221,   196,     0,     0,   237,     0,
     239,   240,   222,   242,   233,   226,   227,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,   235,     0,
       0,     0,     0,     0,   238,     0,     0,    67,    68,     1,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,     0,   248,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,    82,
      83,     0,    47,     7,     8,     9,    10,    11,     0,    12,
       0,    13,    14,    15,     0,     0,     0,     7,     8,    16,
      17,    11,     0,    12,     0,    13,    14,    15,     0,     0,
       0,     0,     0,    16,    17,     0,     0,     0,    18,    19,
      20,     0,     0,     0,    21,    22,     0,     0,     0,    23,
       0,     0,    18,    19,    20,     0,     0,     0,    21,    22,
       0,    24,     0,    23,     0,    25,     0,     0,    26,     0,
       0,     0,    27,    67,    68,    24,     0,     0,     0,    25,
       0,     0,    26,     0,     0,     0,    27,     0,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    67,    68,     0,    82,    83,     0,     0,   158,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    18,    19,    20,    82,    83,   113,    21,    22,    18,
      19,    20,    23,     0,     0,   106,    22,     0,     0,     0,
      23,     0,     0,     0,    24,     0,     0,     0,    25,     0,
       0,    26,    24,     0,     0,    27,    25,     0,     0,    26,
      67,    68,     1,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    67,
      68,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    67,    68,
       0,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
      82,    83,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,    82,    83
};

static const yytype_int16 yycheck[] =
{
       0,     4,     0,     8,    54,    22,    23,    24,    25,    44,
      27,    37,    37,     3,     4,     5,    37,    50,   189,    12,
      11,    34,    13,    14,    15,   138,    29,    44,    28,     0,
      37,    44,    37,    24,    25,    26,    27,   208,    73,    37,
      73,    16,    17,    33,    37,    45,    50,    47,    73,    75,
     163,    68,   189,    53,    54,    55,    46,    32,    33,    34,
      35,    36,    37,    38,    39,   178,   179,    58,    75,   182,
      37,   208,    70,    35,    36,    50,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    51,    83,    28,    29,    30,    35,    36,   148,   149,
     232,    92,    37,    21,   104,    67,    68,    44,   240,   100,
     101,    44,    47,    73,    44,   165,    28,    29,    30,    37,
     111,   171,    72,    62,    63,    72,    73,    34,    67,    68,
       3,     4,     5,    14,    15,    47,     0,    44,   188,    10,
      75,    72,    10,    71,    50,    44,   146,   147,   148,   149,
     150,    44,   152,    74,    74,   205,    69,    74,    50,    44,
      51,    72,   153,    50,   155,   165,   157,    69,     8,   160,
      71,   171,    69,    37,    38,    39,    40,    73,    73,    73,
      44,    45,    72,    29,   184,    49,    35,    36,   188,    75,
     190,   194,   192,   193,   244,    74,   198,    61,    75,    75,
     200,    65,    69,     8,    68,   205,    70,   198,    72,   164,
      94,    60,    61,    62,    63,   225,   157,   217,    67,    68,
     212,   221,     0,   155,   206,   171,    -1,    -1,   228,    -1,
     230,   231,   207,   233,   219,   210,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,   223,    -1,
      -1,    -1,    -1,    -1,   229,    -1,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,
      -1,    -1,   247,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    67,
      68,    -1,    70,     3,     4,     5,     6,     7,    -1,     9,
      -1,    11,    12,    13,    -1,    -1,    -1,     3,     4,    19,
      20,     7,    -1,     9,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      -1,    61,    -1,    49,    -1,    65,    -1,    -1,    68,    -1,
      -1,    -1,    72,    35,    36,    61,    -1,    -1,    -1,    65,
      -1,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    35,    36,    -1,    67,    68,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    38,    39,    40,    67,    68,    69,    44,    45,    38,
      39,    40,    49,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    68,    61,    -1,    -1,    72,    65,    -1,    -1,    68,
      35,    36,    37,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    35,
      36,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    35,    36,
      -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    67,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    77,    79,    80,     0,    37,     3,     4,     5,
       6,     7,     9,    11,    12,    13,    19,    20,    38,    39,
      40,    44,    45,    49,    61,    65,    68,    72,    81,    82,
      83,    86,    87,    93,    94,    95,   106,   107,   110,   111,
      44,    91,    92,    91,    44,    44,     0,    70,    78,    80,
      87,    34,    44,    87,    87,    87,    78,    78,    72,    87,
      87,    87,    88,    89,    87,    80,    83,    35,    36,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    67,    68,    78,    78,    78,    78,    78,    78,
      78,    78,    51,    73,    50,    72,    73,    80,    80,    78,
      10,    10,    80,   112,   112,    80,    44,    87,    99,   100,
     101,    50,    71,    69,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    44,
      87,    87,    22,    23,    24,    25,    27,    44,    68,    90,
      92,    34,    44,    96,    97,    98,    44,    74,    87,    87,
      74,    80,    74,    73,    69,    50,    87,    72,    71,    90,
      51,    44,    44,    73,    50,    69,    80,    80,   112,   112,
      80,     8,    80,    87,    99,   100,    71,    87,    73,    73,
      90,    96,    21,   112,    74,    28,    29,    30,    47,   102,
     103,   104,   105,    84,    85,    86,   106,   112,    14,    15,
     108,   109,    69,    90,    90,    90,    80,   112,    33,    46,
      93,    94,    80,    80,    80,    86,    88,    73,    75,    80,
     112,   105,    78,    93,    94,    72,    78,    78,   104,    75,
      75,    73,    80,   109,    80,    78,    98,    80,    78,    80,
      80,    84,    80,    75,    69,    84,    78,   112,    78
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    78,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    83,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    91,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   106,   107,   108,   108,   109,   109,   110,   110,
     111,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     1,     2,     1,     1,     2,     0,
       1,     0,     1,     1,     2,     1,     2,     2,     0,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     4,     3,     6,     3,     1,     4,     3,     3,
       3,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     3,     3,     5,     2,     2,     8,
       6,    11,     9,     3,     4,     4,     1,     3,     0,     1,
       3,     1,     0,     1,     1,     3,     0,     1,     1,     1,
       4,     1,     3,     3,     4,     3,     7,     3,     0,     1,
       3,     6,     6,     7,     1,     4,     5,     4,     5,     5,
       3,     7
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
  case 2: /* program: opt_newlines top_stmt_list_opt opt_newlines  */
#line 75 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                      {root = new Program((yyvsp[-1].SL)); (yyval.program) = root; root->print();}
#line 1421 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 3: /* separator: ';'  */
#line 79 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
          {  std::cerr << "parser:semicolon" << std::endl; }
#line 1427 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 11: /* top_stmt_list_opt: %empty  */
#line 96 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                  { (yyval.SL) = new std::vector<StmtNode*>(); }
#line 1433 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 12: /* top_stmt_list_opt: top_stmt_list  */
#line 97 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.SL) = (yyvsp[0].SL);}
#line 1439 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 13: /* top_stmt_list: top_stmt  */
#line 101 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                         { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); std::cerr << "parser:stmt" << std::endl; }
#line 1445 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 14: /* top_stmt_list: top_stmt_list top_stmt  */
#line 102 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                              { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1451 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 15: /* top_stmt: stmt  */
#line 106 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 1457 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 16: /* top_stmt: func_decl separator  */
#line 107 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                              { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1463 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 17: /* top_stmt: class_decl separator  */
#line 108 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                 { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1469 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 18: /* stmt_list_opt: %empty  */
#line 113 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
               { (yyval.SL) = new std::vector<StmtNode*>(); }
#line 1475 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 19: /* stmt_list_opt: stmt_list  */
#line 114 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                {(yyval.SL) = (yyvsp[0].SL);}
#line 1481 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 20: /* stmt_list: stmt  */
#line 118 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1487 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 21: /* stmt_list: stmt_list stmt  */
#line 119 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.SL) = (yyvsp[-1].SL); (yyval.SL)->push_back((yyvsp[0].stmtNode)); }
#line 1493 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 22: /* stmt: expr separator  */
#line 123 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.stmtNode) = StmtNode::createExprAsStmt((yyvsp[-1].exprNode)); }
#line 1499 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 23: /* stmt: var_decl separator  */
#line 124 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                              { (yyval.stmtNode) = (yyvsp[-1].stmtNode);}
#line 1505 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 24: /* stmt: if_stmt separator  */
#line 125 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                              { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1511 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 25: /* stmt: switch_stmt separator  */
#line 126 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                              { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1517 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 26: /* stmt: for_stmt separator  */
#line 127 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                              { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1523 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 27: /* stmt: while_stmt separator  */
#line 128 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                              { (yyval.stmtNode) = (yyvsp[-1].stmtNode); }
#line 1529 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 28: /* stmt: RETURN separator  */
#line 129 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.stmtNode) = StmtNode::createReturnStmt(nullptr); }
#line 1535 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 29: /* stmt: RETURN expr separator  */
#line 130 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.stmtNode) = StmtNode::createReturnStmt((yyvsp[-1].exprNode)); }
#line 1541 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 30: /* stmt: BREAK separator  */
#line 131 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.stmtNode) = StmtNode::createBreakStmt(); }
#line 1547 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 31: /* stmt: CONTINUE separator  */
#line 132 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                            { (yyval.stmtNode) = StmtNode::createContinueStmt(); }
#line 1553 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 32: /* expr: INT_DEC  */
#line 136 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createInt((yyvsp[0].Int)); }
#line 1559 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 33: /* expr: FLOAT_DEC  */
#line 137 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFloat((yyvsp[0].Float)); }
#line 1565 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 34: /* expr: STRING_C  */
#line 138 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createString((yyvsp[0].Id)); }
#line 1571 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 35: /* expr: TRUE  */
#line 139 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBool((yyvsp[0].boolVal)); }
#line 1577 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 36: /* expr: FALSE  */
#line 140 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBool((yyvsp[0].boolVal)); }
#line 1583 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 37: /* expr: expr '+' expr  */
#line 141 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Add); }
#line 1589 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 38: /* expr: expr '-' expr  */
#line 142 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Sub); }
#line 1595 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 39: /* expr: expr '*' expr  */
#line 143 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Mul); }
#line 1601 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 40: /* expr: expr '/' expr  */
#line 144 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Div); }
#line 1607 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 41: /* expr: expr EQ expr  */
#line 145 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Eq); }
#line 1613 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 42: /* expr: expr NE expr  */
#line 146 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Ne); }
#line 1619 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 43: /* expr: expr '>' expr  */
#line 147 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Gt); }
#line 1625 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 44: /* expr: expr '<' expr  */
#line 148 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Lt); }
#line 1631 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 45: /* expr: expr GE expr  */
#line 149 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Ge); }
#line 1637 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 46: /* expr: expr LE expr  */
#line 150 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Le); }
#line 1643 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 47: /* expr: expr '=' expr  */
#line 151 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Eq); }
#line 1649 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 48: /* expr: expr AND expr  */
#line 152 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::And); }
#line 1655 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 49: /* expr: expr OR expr  */
#line 153 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createBinOperation((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::Or); }
#line 1661 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 50: /* expr: '-' expr  */
#line 154 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createUnOperation((yyvsp[0].exprNode),ExprType::UMinus); }
#line 1667 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 51: /* expr: NOT expr  */
#line 155 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createUnOperation((yyvsp[0].exprNode),ExprType::Not); }
#line 1673 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 52: /* expr: expr '[' expr ']'  */
#line 156 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createSubscriptNode((yyvsp[-3].exprNode),(yyvsp[-1].exprNode)); }
#line 1679 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 53: /* expr: expr '.' ID  */
#line 157 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFieldAccessNode((yyvsp[-2].exprNode),(yyvsp[0].Id)); }
#line 1685 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 54: /* expr: expr '.' ID '(' func_arg_list ')'  */
#line 158 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { ExprNode* access = ExprNode::createFieldAccessNode((yyvsp[-5].exprNode), (yyvsp[-3].Id)); (yyval.exprNode) = ExprNode::createFieldAccessCall(access,(yyvsp[-3].Id), (yyvsp[-1].EL));}
#line 1691 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 55: /* expr: '[' expr_list_e ']'  */
#line 159 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createArray((yyvsp[-1].EL));}
#line 1697 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 56: /* expr: ID  */
#line 160 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createId((yyvsp[0].Id));}
#line 1703 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 57: /* expr: ID '(' func_arg_list ')'  */
#line 161 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createFuncCall((yyvsp[-1].EL),(yyvsp[-3].Id),nullptr);}
#line 1709 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 58: /* expr: '(' expr ')'  */
#line 162 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = (yyvsp[-1].exprNode);}
#line 1715 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 59: /* expr: expr CLOSED_RANGE expr  */
#line 163 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createLoopRange((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::ClosedRange);}
#line 1721 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 60: /* expr: expr OPENED_RANGE expr  */
#line 164 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                        { (yyval.exprNode) = ExprNode::createLoopRange((yyvsp[-2].exprNode),(yyvsp[0].exprNode),ExprType::OpenedRange);}
#line 1727 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 61: /* expr_list: expr  */
#line 169 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                          { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1733 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 62: /* expr_list: expr_list ',' expr  */
#line 170 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                          { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1739 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 63: /* expr_list_e: %empty  */
#line 174 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.EL) = nullptr; }
#line 1745 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 64: /* expr_list_e: expr_list  */
#line 175 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.EL) = (yyvsp[0].EL); }
#line 1751 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 65: /* type: INT_KW  */
#line 179 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Int"));           }
#line 1757 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 66: /* type: BOOL_KW  */
#line 180 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Bool"));          }
#line 1763 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 67: /* type: UINT_KW  */
#line 181 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Uint"));          }
#line 1769 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 68: /* type: FLOAT_KW  */
#line 182 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("Float"));          }
#line 1775 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 69: /* type: STRING_KW  */
#line 183 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string("String"));        }
#line 1781 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 70: /* type: '[' type ']'  */
#line 184 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyvsp[-1].dataType)->arDimension++; (yyval.dataType) = (yyvsp[-1].dataType); }
#line 1787 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 71: /* type: ID  */
#line 185 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                    { (yyval.dataType) = new DataType(new std::string(*(yyvsp[0].Id)));             }
#line 1793 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 72: /* decl_items: decl_item  */
#line 189 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1799 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 73: /* decl_items: decl_items ',' decl_item  */
#line 190 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1805 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 74: /* decl_item: ID '=' expr  */
#line 194 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-2].Id),(yyvsp[0].exprNode),nullptr); }
#line 1811 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 75: /* decl_item: ID ':' type  */
#line 195 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-2].Id),nullptr,(yyvsp[0].dataType)); }
#line 1817 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 76: /* decl_item: ID ':' type '=' expr  */
#line 196 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.exprNode) = ExprNode::createDeclExpr((yyvsp[-4].Id),(yyvsp[0].exprNode),(yyvsp[-2].dataType));   }
#line 1823 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 77: /* var_decl: LET_KW decl_items  */
#line 200 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.stmtNode) = StmtNode::createDeclStmt((yyvsp[0].EL), StmtType::letDecl); }
#line 1829 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 78: /* var_decl: VAR_KW decl_items  */
#line 201 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                           { (yyval.stmtNode) = StmtNode::createDeclStmt((yyvsp[0].EL), StmtType::varDecl); }
#line 1835 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 79: /* func_decl: FUNC ID '(' func_param_list_e ')' ARROW type block  */
#line 205 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                       { (yyval.stmtNode) = StmtNode::createFuncDecl((yyvsp[-6].Id),(yyvsp[-4].EL),(yyvsp[-1].dataType),(yyvsp[0].SL)); }
#line 1841 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 80: /* func_decl: FUNC ID '(' func_param_list_e ')' block  */
#line 206 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                         { (yyval.stmtNode) = StmtNode::createFuncDecl((yyvsp[-4].Id),(yyvsp[-2].EL),nullptr,(yyvsp[0].SL)); }
#line 1847 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 81: /* class_decl: CLASS ID ':' ID opt_newlines '{' opt_newlines class_decl_list_e opt_newlines '}' separator  */
#line 210 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                                                               { (yyval.stmtNode) = StmtNode::createClassDecl((yyvsp[-9].Id),(yyvsp[-7].Id),(yyvsp[-3].SL));}
#line 1853 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 82: /* class_decl: CLASS ID opt_newlines '{' opt_newlines class_decl_list_e opt_newlines '}' separator  */
#line 211 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                                                              { (yyval.stmtNode) = StmtNode::createClassDecl((yyvsp[-7].Id),nullptr,(yyvsp[-3].SL));}
#line 1859 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 83: /* func_param: ID ':' type  */
#line 215 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),nullptr,(yyvsp[0].dataType)); }
#line 1865 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 84: /* func_param: ID ID ':' type  */
#line 216 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),(yyvsp[-3].Id),(yyvsp[0].dataType)); }
#line 1871 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 85: /* func_param: UNDERSCORE ID ':' type  */
#line 217 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.exprNode) = ExprNode::createFuncParamExpr((yyvsp[-2].Id),new std::string("_"),(yyvsp[0].dataType)); }
#line 1877 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 86: /* func_param_list: func_param  */
#line 221 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                     { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1883 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 87: /* func_param_list: func_param_list ',' func_param  */
#line 222 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                     { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1889 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 88: /* func_param_list_e: %empty  */
#line 226 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.EL) = nullptr; }
#line 1895 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 89: /* func_param_list_e: func_param_list  */
#line 227 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.EL) = (yyvsp[0].EL); }
#line 1901 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 90: /* func_arg: ID ':' expr  */
#line 231 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.exprNode) = ExprNode::createFuncArgExpr((yyvsp[-2].Id),(yyvsp[0].exprNode)); }
#line 1907 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 91: /* func_arg: expr  */
#line 232 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                { (yyval.exprNode) = ExprNode::createFuncArgExpr(nullptr,(yyvsp[0].exprNode)); }
#line 1913 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 92: /* func_arg_list: %empty  */
#line 236 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.EL) = nullptr; }
#line 1919 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 93: /* func_arg_list: func_arg_list_nonempty  */
#line 237 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                             { (yyval.EL) = (yyvsp[0].EL); }
#line 1925 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 94: /* func_arg_list_nonempty: func_arg  */
#line 241 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                           { (yyval.EL) = new std::vector<ExprNode*>({(yyvsp[0].exprNode)}); }
#line 1931 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 95: /* func_arg_list_nonempty: func_arg_list_nonempty ',' func_arg  */
#line 242 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                           { (yyval.EL) = (yyvsp[-2].EL); (yyval.EL)->push_back((yyvsp[0].exprNode)); }
#line 1937 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 96: /* access_modifier: %empty  */
#line 246 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = nullptr; }
#line 1943 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 97: /* access_modifier: PUBLIC  */
#line 247 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("PUBLIC"); }
#line 1949 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 98: /* access_modifier: FILE_PRIVATE  */
#line 248 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("FILE_PRIVATE"); }
#line 1955 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 99: /* access_modifier: PRIVATE  */
#line 249 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.Id) = new std::string("PRIVATE"); }
#line 1961 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 100: /* class_decl_list: class_decl_list opt_newlines class_member opt_newlines  */
#line 253 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.SL) = (yyvsp[-3].SL); (yyval.SL)->push_back((yyvsp[-1].stmtNode)); }
#line 1967 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 101: /* class_decl_list: class_member  */
#line 254 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 1973 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 102: /* class_member: access_modifier var_decl separator  */
#line 258 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[-1].stmtNode),(yyvsp[-2].Id),false,StmtType::classMemberVar);}
#line 1979 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 103: /* class_member: access_modifier func_decl separator  */
#line 259 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[-1].stmtNode),(yyvsp[-2].Id),false,StmtType::classMemberFunc);}
#line 1985 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 104: /* class_member: access_modifier STATIC var_decl separator  */
#line 260 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[-1].stmtNode),(yyvsp[-3].Id),true,StmtType::classMemberVar);}
#line 1991 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 105: /* class_member: access_modifier STATIC func_decl  */
#line 261 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { (yyval.stmtNode) = StmtNode::createClassMember((yyvsp[0].stmtNode),(yyvsp[-2].Id),true,StmtType::classMemberFunc);}
#line 1997 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 106: /* class_member: access_modifier INIT '(' func_param_list_e ')' block separator  */
#line 262 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                                      { StmtNode* f = StmtNode::createFuncDecl((yyvsp[-5].Id),(yyvsp[-3].EL),nullptr,(yyvsp[-1].SL));
                                                             (yyval.stmtNode) =  StmtNode::createClassMember(f,(yyvsp[-6].Id),false,StmtType::classMemberInit);  
                                                           }
#line 2005 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 107: /* class_member: DEINIT block separator  */
#line 265 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                           { StmtNode* f = StmtNode::createFuncDecl((yyvsp[-2].Id),nullptr,nullptr,(yyvsp[-1].SL)); 
                                                             (yyval.stmtNode) =  StmtNode::createClassMember(f,(yyvsp[-2].Id),false,StmtType::classMemberDeinit);
                                                           }
#line 2013 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 108: /* class_decl_list_e: %empty  */
#line 271 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
              { (yyval.SL) = nullptr;}
#line 2019 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 109: /* class_decl_list_e: class_decl_list  */
#line 272 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                      { (yyval.SL) = (yyvsp[0].SL);}
#line 2025 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 110: /* if_stmt: IF expr block  */
#line 276 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                   { (yyval.stmtNode) = StmtNode::createIfStmt((yyvsp[-1].exprNode),(yyvsp[0].SL),nullptr);   }
#line 2031 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 111: /* if_stmt: IF expr block opt_newlines ELSE if_stmt  */
#line 277 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                              { (yyval.stmtNode) = StmtNode::createElseIfStmt((yyvsp[-4].exprNode),(yyvsp[-3].SL),(yyvsp[0].stmtNode));}
#line 2037 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 112: /* if_stmt: IF expr block opt_newlines ELSE block  */
#line 278 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                            { (yyval.stmtNode) = StmtNode::createIfStmt((yyvsp[-4].exprNode),(yyvsp[-3].SL),(yyvsp[0].SL));  }
#line 2043 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 113: /* switch_stmt: SWITCH expr opt_newlines '{' opt_newlines switch_case_list '}'  */
#line 282 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                                    { (yyval.stmtNode) = StmtNode::createSwitchStmt((yyvsp[-5].exprNode),(yyvsp[-1].SL));}
#line 2049 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 114: /* switch_case_list: switch_case  */
#line 286 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                    { (yyval.SL) = new std::vector<StmtNode*>({(yyvsp[0].stmtNode)}); }
#line 2055 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 115: /* switch_case_list: switch_case_list opt_newlines switch_case opt_newlines  */
#line 287 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                              { (yyval.SL) = (yyvsp[-3].SL); (yyval.SL)->push_back((yyvsp[-1].stmtNode)); }
#line 2061 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 116: /* switch_case: CASE expr_list ':' opt_newlines stmt_list_opt  */
#line 291 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                     { (yyval.stmtNode) = StmtNode::createCaseStmt((yyvsp[-3].EL),(yyvsp[0].SL)); }
#line 2067 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 117: /* switch_case: DEFAULT ':' opt_newlines stmt_list_opt  */
#line 292 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                   { (yyval.stmtNode) = StmtNode::createCaseStmt(nullptr,(yyvsp[0].SL));}
#line 2073 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 118: /* for_stmt: FOR ID IN expr block  */
#line 296 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                         { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),(yyvsp[-3].Id),(yyvsp[0].SL),StmtType::For);}
#line 2079 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 119: /* for_stmt: FOR UNDERSCORE IN expr block  */
#line 297 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                   { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),nullptr,(yyvsp[0].SL),StmtType::For); }
#line 2085 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 120: /* while_stmt: WHILE expr block  */
#line 301 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                     { (yyval.stmtNode) = StmtNode::createLoopStmt((yyvsp[-1].exprNode),nullptr,(yyvsp[0].SL),StmtType::While); }
#line 2091 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;

  case 121: /* block: opt_newlines '{' opt_newlines stmt_list_opt opt_newlines '}' opt_newlines  */
#line 305 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"
                                                                                { (yyval.SL) = (yyvsp[-3].SL);  std::cerr << "block" << std::endl;}
#line 2097 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"
    break;


#line 2101 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\swift.tab.c"

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

#line 308 "F:\\visualStudioProjects\\SwiftLexer\\SwiftLexer\\parser.y"


void yyerror(const char* s){
 std::cerr << s << std::endl;
} 

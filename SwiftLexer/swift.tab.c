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
#line 5 "parser.y"

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include "nodes.h"
using namespace std;

void yyerror(const char* s);
int yylex(void);



#line 86 "swift.tab.c"

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
  YYSYMBOL_FLOAT_HEX = 3,                  /* FLOAT_HEX  */
  YYSYMBOL_FLOAT_DEC = 4,                  /* FLOAT_DEC  */
  YYSYMBOL_INT_BINARY = 5,                 /* INT_BINARY  */
  YYSYMBOL_INT_OCTAL = 6,                  /* INT_OCTAL  */
  YYSYMBOL_INT_HEXADECIMAL = 7,            /* INT_HEXADECIMAL  */
  YYSYMBOL_ELSE_IF = 8,                    /* ELSE_IF  */
  YYSYMBOL_STRING_C = 9,                   /* STRING_C  */
  YYSYMBOL_INT_KW = 10,                    /* INT_KW  */
  YYSYMBOL_VAR_KW = 11,                    /* VAR_KW  */
  YYSYMBOL_BOOL_KW = 12,                   /* BOOL_KW  */
  YYSYMBOL_CHARACTER_KW = 13,              /* CHARACTER_KW  */
  YYSYMBOL_UINT_KW = 14,                   /* UINT_KW  */
  YYSYMBOL_FLOAT_KW = 15,                  /* FLOAT_KW  */
  YYSYMBOL_DOUBLE_KW = 16,                 /* DOUBLE_KW  */
  YYSYMBOL_CHAR_LITERAL = 17,              /* CHAR_LITERAL  */
  YYSYMBOL_STRING_KW = 18,                 /* STRING_KW  */
  YYSYMBOL_FUNC = 19,                      /* FUNC  */
  YYSYMBOL_CLASS = 20,                     /* CLASS  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_IN = 24,                        /* IN  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_SWITCH = 27,                    /* SWITCH  */
  YYSYMBOL_CASE = 28,                      /* CASE  */
  YYSYMBOL_DEFAULT = 29,                   /* DEFAULT  */
  YYSYMBOL_INIT = 30,                      /* INIT  */
  YYSYMBOL_DEINIT = 31,                    /* DEINIT  */
  YYSYMBOL_TRUE = 32,                      /* TRUE  */
  YYSYMBOL_FALSE = 33,                     /* FALSE  */
  YYSYMBOL_NIL = 34,                       /* NIL  */
  YYSYMBOL_PUBLIC = 35,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 36,                   /* PRIVATE  */
  YYSYMBOL_FILE_PRIVATE = 37,              /* FILE_PRIVATE  */
  YYSYMBOL_STATIC = 38,                    /* STATIC  */
  YYSYMBOL_BREAK = 39,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 40,                  /* CONTINUE  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_OR = 42,                        /* OR  */
  YYSYMBOL_NOT = 43,                       /* NOT  */
  YYSYMBOL_EQ = 44,                        /* EQ  */
  YYSYMBOL_NE = 45,                        /* NE  */
  YYSYMBOL_GE = 46,                        /* GE  */
  YYSYMBOL_LE = 47,                        /* LE  */
  YYSYMBOL_INT_DECIMAL = 48,               /* INT_DECIMAL  */
  YYSYMBOL_ID = 49,                        /* ID  */
  YYSYMBOL_LET_KW = 50,                    /* LET_KW  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_52_ = 52,                       /* '='  */
  YYSYMBOL_53_ = 53,                       /* '>'  */
  YYSYMBOL_54_ = 54,                       /* '<'  */
  YYSYMBOL_55_ = 55,                       /* '+'  */
  YYSYMBOL_56_ = 56,                       /* '-'  */
  YYSYMBOL_57_ = 57,                       /* '*'  */
  YYSYMBOL_58_ = 58,                       /* '/'  */
  YYSYMBOL_59_ = 59,                       /* '%'  */
  YYSYMBOL_UNMINUS = 60,                   /* UNMINUS  */
  YYSYMBOL_61_ = 61,                       /* '.'  */
  YYSYMBOL_62_ = 62,                       /* '['  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* ';'  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '('  */
  YYSYMBOL_67_ = 67,                       /* ':'  */
  YYSYMBOL_68_ = 68,                       /* '{'  */
  YYSYMBOL_69_ = 69,                       /* '}'  */
  YYSYMBOL_70___ = 70,                     /* '_'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_stmt_list = 73,                 /* stmt_list  */
  YYSYMBOL_stmt = 74,                      /* stmt  */
  YYSYMBOL_expr = 75,                      /* expr  */
  YYSYMBOL_primary_expr = 76,              /* primary_expr  */
  YYSYMBOL_expr_list = 77,                 /* expr_list  */
  YYSYMBOL_expr_list_e = 78,               /* expr_list_e  */
  YYSYMBOL_type = 79,                      /* type  */
  YYSYMBOL_array_type = 80,                /* array_type  */
  YYSYMBOL_base_type = 81,                 /* base_type  */
  YYSYMBOL_decl_items = 82,                /* decl_items  */
  YYSYMBOL_decl_item = 83,                 /* decl_item  */
  YYSYMBOL_decl = 84,                      /* decl  */
  YYSYMBOL_func_param = 85,                /* func_param  */
  YYSYMBOL_func_param_list = 86,           /* func_param_list  */
  YYSYMBOL_func_param_list_e = 87,         /* func_param_list_e  */
  YYSYMBOL_func_arg = 88,                  /* func_arg  */
  YYSYMBOL_func_arg_list = 89,             /* func_arg_list  */
  YYSYMBOL_func_arg_list_nonempty = 90,    /* func_arg_list_nonempty  */
  YYSYMBOL_access_modifier = 91,           /* access_modifier  */
  YYSYMBOL_class_decl_list = 92,           /* class_decl_list  */
  YYSYMBOL_class_member = 93,              /* class_member  */
  YYSYMBOL_class_decl_list_e = 94,         /* class_decl_list_e  */
  YYSYMBOL_if_stmt = 95,                   /* if_stmt  */
  YYSYMBOL_switch_statement = 96,          /* switch_statement  */
  YYSYMBOL_switch_case_list = 97,          /* switch_case_list  */
  YYSYMBOL_switch_case = 98,               /* switch_case  */
  YYSYMBOL_for_stmt = 99,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 100,               /* while_stmt  */
  YYSYMBOL_block = 101                     /* block  */
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
#define YYLAST   619

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      66,    63,    57,    55,    51,    56,    61,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    64,
      54,    52,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    65,     2,    70,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,    69,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    62,    64,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     122,   123,   126,   128,   132,   133,   137,   141,   142,   143,
     144,   145,   146,   147,   148,   152,   153,   157,   158,   159,
     163,   164,   165,   166,   167,   168,   172,   173,   174,   178,
     179,   182,   184,   188,   189,   192,   194,   198,   199,   202,
     204,   205,   206,   210,   211,   215,   216,   217,   218,   221,
     223,   227,   228,   229,   233,   237,   238,   242,   243,   247,
     251,   255
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
  "\"end of file\"", "error", "\"invalid token\"", "FLOAT_HEX",
  "FLOAT_DEC", "INT_BINARY", "INT_OCTAL", "INT_HEXADECIMAL", "ELSE_IF",
  "STRING_C", "INT_KW", "VAR_KW", "BOOL_KW", "CHARACTER_KW", "UINT_KW",
  "FLOAT_KW", "DOUBLE_KW", "CHAR_LITERAL", "STRING_KW", "FUNC", "CLASS",
  "RETURN", "ELSE", "FOR", "IN", "WHILE", "IF", "SWITCH", "CASE",
  "DEFAULT", "INIT", "DEINIT", "TRUE", "FALSE", "NIL", "PUBLIC", "PRIVATE",
  "FILE_PRIVATE", "STATIC", "BREAK", "CONTINUE", "AND", "OR", "NOT", "EQ",
  "NE", "GE", "LE", "INT_DECIMAL", "ID", "LET_KW", "','", "'='", "'>'",
  "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "UNMINUS", "'.'", "'['", "')'",
  "';'", "']'", "'('", "':'", "'{'", "'}'", "'_'", "$accept", "program",
  "stmt_list", "stmt", "expr", "primary_expr", "expr_list", "expr_list_e",
  "type", "array_type", "base_type", "decl_items", "decl_item", "decl",
  "func_param", "func_param_list", "func_param_list_e", "func_arg",
  "func_arg_list", "func_arg_list_nonempty", "access_modifier",
  "class_decl_list", "class_member", "class_decl_list_e", "if_stmt",
  "switch_statement", "switch_case_list", "switch_case", "for_stmt",
  "while_stmt", "block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-101)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -142,    11,   218,  -142,  -142,  -142,  -142,  -142,  -142,   -36,
    -142,    -8,  -142,    -1,     2,   266,     8,    -7,    17,   286,
    -142,  -142,  -142,    18,    23,   286,  -142,    32,    -8,   286,
     286,   286,  -142,  -142,   379,  -142,    35,  -142,  -142,  -142,
    -142,  -142,   286,   -28,     7,  -142,    39,   -35,  -142,   403,
      84,   286,   286,    68,  -142,  -142,   -26,   334,     7,   -26,
     519,    60,    52,   427,   151,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,    69,   286,
    -142,  -142,   450,   286,    -6,    -8,   -44,    70,   -16,  -142,
     286,   473,   496,    16,   -20,   519,  -142,    64,    86,   286,
    -142,  -142,  -142,   557,   538,    90,    90,    90,    90,   519,
      90,    90,    45,    45,   -26,   -26,    66,   357,    67,   519,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,    -6,    87,
    -142,  -142,  -142,   -33,    89,  -142,    91,    77,    75,    97,
      67,  -142,  -142,  -142,    41,    59,  -142,    95,   317,    67,
      67,   286,    83,   -27,  -142,   286,  -142,   334,   519,   334,
    -142,  -142,   100,   286,    99,    -6,   102,   -44,   -31,   -16,
     -44,  -142,    81,  -142,  -142,  -142,  -142,  -142,   145,   -29,
      67,  -142,  -142,   519,  -142,   110,  -142,   519,    -6,  -142,
      -6,  -142,   122,  -142,   111,   116,  -142,    67,    67,  -142,
    -142,  -142,  -142,    -6,  -142,    67,  -142,  -142,    67,  -142,
    -142
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,    37,    38,    39,    40,    41,     0,
      42,     0,    43,     0,     0,     0,     0,     0,     0,     0,
      44,    45,    46,     0,     0,     0,    36,    47,     0,     0,
      52,     0,     3,     4,     0,    16,     0,     7,     8,     9,
      10,    15,     0,     0,    71,    65,     0,     0,    11,     0,
       0,     0,     0,     0,    13,    14,    31,    85,    70,    30,
      50,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     5,     0,     0,     0,     0,    81,     0,    89,    12,
       0,     0,     0,     0,    47,    84,    87,     0,    86,     0,
      35,    49,   111,    28,    29,    21,    22,    25,    26,    27,
      23,    24,    17,    18,    19,    20,    33,     0,     0,    67,
      57,    58,    59,    60,    61,    62,    63,    64,     0,    68,
      55,    54,    66,     0,     0,    79,    82,     0,     0,     0,
       0,    90,    92,    91,     0,    89,    94,     0,     0,     0,
       0,     0,     0,     0,   105,     0,    48,     0,    51,    85,
      32,   102,     0,     0,     0,     0,     0,     0,     0,    89,
      81,    98,     0,    95,    93,    75,   109,   110,   101,     0,
       0,   104,   106,    83,    88,     0,    56,    69,     0,    76,
       0,    80,     0,    73,     0,     0,    96,     0,     0,   108,
      34,    77,    78,     0,    74,     0,   103,   107,     0,    97,
      72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,   149,  -142,    -2,  -142,    31,  -142,  -110,  -142,
    -142,   158,   103,  -141,    20,  -142,    19,    36,    33,  -142,
    -142,  -142,    50,    27,  -142,  -142,  -142,    44,  -142,  -142,
     -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    33,    95,    35,    61,    62,   129,   130,
     131,    44,    45,    36,   135,   136,   137,    96,    97,    98,
     144,   145,   146,   147,    37,    38,   153,   154,    39,    40,
      41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   151,   152,   173,   120,   133,   121,   122,   123,   124,
     125,     3,   126,    49,   139,   140,   164,    53,   162,   141,
     142,   143,    99,    56,    83,   192,   134,    59,    60,    63,
      42,   196,    87,    88,   165,    78,    79,    32,   198,    84,
      82,    43,   181,   127,   151,   152,    57,   155,    46,    91,
      92,    47,    11,   -99,   161,   189,   128,    50,    85,    51,
      13,    14,    34,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   171,   117,   201,   172,
     202,   119,    54,    52,   176,   177,   178,    55,   148,   139,
     140,    28,    11,   208,   141,   142,   143,   158,    57,    81,
      13,    14,    76,    77,   193,    86,    78,    79,    90,    65,
      66,    99,    67,    68,    69,    70,   199,   100,   116,   138,
      71,    72,    73,    74,    75,    76,    77,   156,  -100,    78,
      79,    28,   159,   206,   207,    32,    93,   157,   166,   163,
     168,   209,   167,   169,   210,    74,    75,    76,    77,    60,
     180,    78,    79,   183,     4,     5,     6,     7,     8,     9,
      10,   187,    11,   170,   175,   186,   188,   197,    12,   190,
      13,    14,    15,   200,    16,   203,    17,    18,    19,   205,
     204,    64,   179,    20,    21,    22,    58,   191,   132,   195,
      23,    24,   185,   184,    25,   174,   194,   182,     0,    26,
      27,    28,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,    30,     0,     0,     0,    31,     0,    32,
     102,     4,     5,     6,     7,     8,     9,    10,     0,    11,
       0,     0,     0,     0,     0,    12,     0,    13,    14,    15,
       0,    16,     0,    17,    18,    19,     0,     0,     0,     0,
      20,    21,    22,     0,     0,     0,     0,    23,    24,     0,
       0,    25,     0,     0,     0,     0,    26,    27,    28,     4,
       5,     6,     7,     8,    29,    10,     0,     0,     0,     0,
      30,     0,     0,    12,    31,     0,    32,     0,     0,     4,
       5,     6,     7,     8,     0,    10,     0,     0,    20,    21,
      22,     0,     0,    12,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,    26,    27,     0,     0,    20,    21,
      22,     0,    29,     0,     0,     0,     0,     0,    30,    25,
      48,     0,    31,     0,    26,    27,     0,     4,     5,     6,
       7,     8,    29,    10,     0,     0,     0,     0,    30,     0,
       0,    12,    31,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,     0,    20,    21,    22,    71,
      72,    73,    74,    75,    76,    77,     0,    25,    78,    79,
       0,     0,    26,    94,     0,    32,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,    30,     0,    65,    66,
      31,    67,    68,    69,    70,     0,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,    78,    79,
      65,    66,   160,    67,    68,    69,    70,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
      78,    79,     0,    80,    65,    66,     0,    67,    68,    69,
      70,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,    78,    79,     0,    89,    65,    66,
       0,    67,    68,    69,    70,     0,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,    78,    79,
     101,    65,    66,     0,    67,    68,    69,    70,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,    78,    79,   118,    65,    66,     0,    67,    68,    69,
      70,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,    78,    79,   149,    65,    66,     0,
      67,    68,    69,    70,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,    78,    79,   150,
      65,    66,     0,    67,    68,    69,    70,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,    65,
      78,    79,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,     0,     0,    78,
      79,    67,    68,    69,    70,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,     0,     0,    78,    79
};

static const yytype_int16 yycheck[] =
{
       2,    28,    29,   144,    10,    49,    12,    13,    14,    15,
      16,     0,    18,    15,    30,    31,    49,    19,   128,    35,
      36,    37,    51,    25,    52,    56,    70,    29,    30,    31,
      66,   172,    67,    68,    67,    61,    62,    68,    67,    67,
      42,    49,    69,    49,    28,    29,    66,    67,    49,    51,
      52,    49,    11,    69,   118,   165,    62,    49,    51,    66,
      19,    20,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   140,    79,   188,    38,
     190,    83,    64,    66,   148,   149,   150,    64,    90,    30,
      31,    50,    11,   203,    35,    36,    37,    99,    66,    64,
      19,    20,    57,    58,   168,    66,    61,    62,    24,    41,
      42,    51,    44,    45,    46,    47,   180,    65,    49,    49,
      52,    53,    54,    55,    56,    57,    58,    63,    69,    61,
      62,    50,    66,   197,   198,    68,    68,    51,    49,    52,
      63,   205,    51,    68,   208,    55,    56,    57,    58,   151,
      67,    61,    62,   155,     3,     4,     5,     6,     7,     8,
       9,   163,    11,    66,    69,    65,    67,    22,    17,    67,
      19,    20,    21,    63,    23,    53,    25,    26,    27,    63,
      69,    32,   151,    32,    33,    34,    28,   167,    85,   170,
      39,    40,   159,   157,    43,   145,   169,   153,    -1,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    68,
      69,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    49,    50,     3,
       4,     5,     6,     7,    56,     9,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    17,    66,    -1,    68,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    32,    33,
      34,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    32,    33,
      34,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    43,
      64,    -1,    66,    -1,    48,    49,    -1,     3,     4,     5,
       6,     7,    56,     9,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    17,    66,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    44,    45,    46,    47,    -1,    32,    33,    34,    52,
      53,    54,    55,    56,    57,    58,    -1,    43,    61,    62,
      -1,    -1,    48,    49,    -1,    68,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    41,    42,
      66,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    61,    62,
      41,    42,    65,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      61,    62,    -1,    64,    41,    42,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    61,    62,    -1,    64,    41,    42,
      -1,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    61,    62,
      63,    41,    42,    -1,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    61,    62,    63,    41,    42,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    61,    62,    63,    41,    42,    -1,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      41,    42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    -1,    41,
      61,    62,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    -1,    -1,    61,
      62,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    -1,    -1,    61,    62
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    72,    73,     0,     3,     4,     5,     6,     7,     8,
       9,    11,    17,    19,    20,    21,    23,    25,    26,    27,
      32,    33,    34,    39,    40,    43,    48,    49,    50,    56,
      62,    66,    68,    74,    75,    76,    84,    95,    96,    99,
     100,   101,    66,    49,    82,    83,    49,    49,    64,    75,
      49,    66,    66,    75,    64,    64,    75,    66,    82,    75,
      75,    77,    78,    75,    73,    41,    42,    44,    45,    46,
      47,    52,    53,    54,    55,    56,    57,    58,    61,    62,
      64,    64,    75,    52,    67,    51,    66,    67,    68,    64,
      24,    75,    75,    68,    49,    75,    88,    89,    90,    51,
      65,    63,    69,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    49,    75,    63,    75,
      10,    12,    13,    14,    15,    16,    18,    49,    62,    79,
      80,    81,    83,    49,    70,    85,    86,    87,    49,    30,
      31,    35,    36,    37,    91,    92,    93,    94,    75,    63,
      63,    28,    29,    97,    98,    67,    63,    51,    75,    66,
      65,   101,    79,    52,    49,    67,    49,    51,    63,    68,
      66,   101,    38,    84,    93,    69,   101,   101,   101,    77,
      67,    69,    98,    75,    88,    89,    65,    75,    67,    79,
      67,    85,    56,   101,    94,    87,    84,    22,    67,   101,
      63,    79,    79,    53,    69,    63,   101,   101,    79,   101,
     101
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    92,    92,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    96,    97,    97,    98,    98,    99,
     100,   101
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     2,     3,     2,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     4,     3,     6,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     3,     0,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     5,
       2,     2,     9,     6,     7,     5,     3,     4,     4,     1,
       3,     0,     1,     3,     1,     0,     1,     1,     3,     0,
       1,     1,     1,     2,     1,     2,     3,     5,     2,     0,
       1,     5,     5,     7,     5,     1,     2,     4,     3,     5,
       5,     3
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
  case 2: /* program: stmt_list  */
#line 60 "parser.y"
                   {Mytest();}
#line 1404 "swift.tab.c"
    break;

  case 36: /* primary_expr: INT_DECIMAL  */
#line 105 "parser.y"
                  { std::cerr << "INT " << (yyvsp[0].Int) << '\n' << std::endl; }
#line 1410 "swift.tab.c"
    break;

  case 47: /* primary_expr: ID  */
#line 116 "parser.y"
         { std::cerr << "ID " << *(yyvsp[0].Id) << '\n' << std::endl; }
#line 1416 "swift.tab.c"
    break;

  case 70: /* decl: LET_KW decl_items  */
#line 163 "parser.y"
                        { std::cerr << "SIMPLE DECL WORKING" << std::endl;}
#line 1422 "swift.tab.c"
    break;


#line 1426 "swift.tab.c"

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

#line 258 "parser.y"


void yyerror(const char* s){
 std::cerr << s << std::endl;
} 

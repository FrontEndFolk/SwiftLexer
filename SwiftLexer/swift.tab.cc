// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.



// First part of user prologue.
#line 1 "parser.y"

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
using namespace std;

int yylex(void);
void yyerror(const char *s);


#line 54 "swift.tab.cc"




# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
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

namespace yy {
#line 191 "swift.tab.cc"




  /// A Bison parser.
  class parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
    /// Symbol semantic values.
    typedef int value_type;
#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;


    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const std::string& m)
        : std::runtime_error (m)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    FLOAT_HEX = 258,               // FLOAT_HEX
    FLOAT_DEC = 259,               // FLOAT_DEC
    INT_BINARY = 260,              // INT_BINARY
    INT_OCTAL = 261,               // INT_OCTAL
    INT_HEXADECIMAL = 262,         // INT_HEXADECIMAL
    INT_DECIMAL = 263,             // INT_DECIMAL
    STRING_C = 264,                // STRING_C
    ID = 265,                      // ID
    INT_KW = 266,                  // INT_KW
    LET_KW = 267,                  // LET_KW
    VAR_KW = 268,                  // VAR_KW
    BOOL_KW = 269,                 // BOOL_KW
    CHARACTER_KW = 270,            // CHARACTER_KW
    UINT_KW = 271,                 // UINT_KW
    FLOAT_KW = 272,                // FLOAT_KW
    DOUBLE_KW = 273,               // DOUBLE_KW
    CHAR_LITERAL = 274,            // CHAR_LITERAL
    STRING_KW = 275,               // STRING_KW
    FUNC = 276,                    // FUNC
    CLASS = 277,                   // CLASS
    RETURN = 278,                  // RETURN
    ELSE = 279,                    // ELSE
    FOR = 280,                     // FOR
    IN = 281,                      // IN
    WHILE = 282,                   // WHILE
    IF = 283,                      // IF
    SWITCH = 284,                  // SWITCH
    CASE = 285,                    // CASE
    DEFAULT = 286,                 // DEFAULT
    INIT = 287,                    // INIT
    DEINIT = 288,                  // DEINIT
    TRUE = 289,                    // TRUE
    FALSE = 290,                   // FALSE
    NIL = 291,                     // NIL
    PUBLIC = 292,                  // PUBLIC
    PRIVATE = 293,                 // PRIVATE
    FILE_PRIVATE = 294,            // FILE_PRIVATE
    STATIC = 295,                  // STATIC
    BREAK = 296,                   // BREAK
    CONTINUE = 297,                // CONTINUE
    AND = 298,                     // AND
    OR = 299,                      // OR
    NOT = 300,                     // NOT
    EQ = 301,                      // EQ
    NE = 302,                      // NE
    GE = 303,                      // GE
    LE = 304,                      // LE
    UNMINUS = 305                  // UNMINUS
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 70, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_FLOAT_HEX = 3,                         // FLOAT_HEX
        S_FLOAT_DEC = 4,                         // FLOAT_DEC
        S_INT_BINARY = 5,                        // INT_BINARY
        S_INT_OCTAL = 6,                         // INT_OCTAL
        S_INT_HEXADECIMAL = 7,                   // INT_HEXADECIMAL
        S_INT_DECIMAL = 8,                       // INT_DECIMAL
        S_STRING_C = 9,                          // STRING_C
        S_ID = 10,                               // ID
        S_INT_KW = 11,                           // INT_KW
        S_LET_KW = 12,                           // LET_KW
        S_VAR_KW = 13,                           // VAR_KW
        S_BOOL_KW = 14,                          // BOOL_KW
        S_CHARACTER_KW = 15,                     // CHARACTER_KW
        S_UINT_KW = 16,                          // UINT_KW
        S_FLOAT_KW = 17,                         // FLOAT_KW
        S_DOUBLE_KW = 18,                        // DOUBLE_KW
        S_CHAR_LITERAL = 19,                     // CHAR_LITERAL
        S_STRING_KW = 20,                        // STRING_KW
        S_FUNC = 21,                             // FUNC
        S_CLASS = 22,                            // CLASS
        S_RETURN = 23,                           // RETURN
        S_ELSE = 24,                             // ELSE
        S_FOR = 25,                              // FOR
        S_IN = 26,                               // IN
        S_WHILE = 27,                            // WHILE
        S_IF = 28,                               // IF
        S_SWITCH = 29,                           // SWITCH
        S_CASE = 30,                             // CASE
        S_DEFAULT = 31,                          // DEFAULT
        S_INIT = 32,                             // INIT
        S_DEINIT = 33,                           // DEINIT
        S_TRUE = 34,                             // TRUE
        S_FALSE = 35,                            // FALSE
        S_NIL = 36,                              // NIL
        S_PUBLIC = 37,                           // PUBLIC
        S_PRIVATE = 38,                          // PRIVATE
        S_FILE_PRIVATE = 39,                     // FILE_PRIVATE
        S_STATIC = 40,                           // STATIC
        S_BREAK = 41,                            // BREAK
        S_CONTINUE = 42,                         // CONTINUE
        S_AND = 43,                              // AND
        S_OR = 44,                               // OR
        S_NOT = 45,                              // NOT
        S_EQ = 46,                               // EQ
        S_NE = 47,                               // NE
        S_GE = 48,                               // GE
        S_LE = 49,                               // LE
        S_50_ = 50,                              // ','
        S_51_ = 51,                              // '='
        S_52_ = 52,                              // '>'
        S_53_ = 53,                              // '<'
        S_54_ = 54,                              // '+'
        S_55_ = 55,                              // '-'
        S_56_ = 56,                              // '*'
        S_57_ = 57,                              // '/'
        S_58_ = 58,                              // '%'
        S_UNMINUS = 59,                          // UNMINUS
        S_60_ = 60,                              // '.'
        S_61_ = 61,                              // '['
        S_62_ = 62,                              // ')'
        S_63_ = 63,                              // ';'
        S_64_ = 64,                              // ']'
        S_65_ = 65,                              // '('
        S_66_ = 66,                              // ':'
        S_67_ = 67,                              // '{'
        S_68_ = 68,                              // '}'
        S_69___ = 69,                            // '_'
        S_YYACCEPT = 70,                         // $accept
        S_program = 71,                          // program
        S_stmt_list = 72,                        // stmt_list
        S_stmt = 73,                             // stmt
        S_expr = 74,                             // expr
        S_primary_expr = 75,                     // primary_expr
        S_expr_list = 76,                        // expr_list
        S_expr_list_e = 77,                      // expr_list_e
        S_type = 78,                             // type
        S_array_type = 79,                       // array_type
        S_base_type = 80,                        // base_type
        S_decl_items = 81,                       // decl_items
        S_decl_item = 82,                        // decl_item
        S_decl = 83,                             // decl
        S_func_param = 84,                       // func_param
        S_func_param_list = 85,                  // func_param_list
        S_func_param_list_e = 86,                // func_param_list_e
        S_func_arg = 87,                         // func_arg
        S_func_arg_list = 88,                    // func_arg_list
        S_func_arg_list_nonempty = 89,           // func_arg_list_nonempty
        S_access_modifier = 90,                  // access_modifier
        S_class_decl_list = 91,                  // class_decl_list
        S_class_member = 92,                     // class_member
        S_class_decl_list_e = 93,                // class_decl_list_e
        S_if_stmt = 94,                          // if_stmt
        S_switch_statement = 95,                 // switch_statement
        S_switch_case_list = 96,                 // switch_case_list
        S_switch_case = 97,                      // switch_case
        S_for_stmt = 98,                         // for_stmt
        S_while_stmt = 99,                       // while_stmt
        S_block = 100                            // block
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value (std::move (that.value))
      {}
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);
      /// Constructor for valueless symbols.
      basic_symbol (typename Base::kind_type t);

      /// Constructor for symbols with semantic value.
      basic_symbol (typename Base::kind_type t,
                    YY_RVREF (value_type) v);

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {};

    /// Build a parser object.
    parser ();
    virtual ~parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    parser (const parser&) = delete;
    /// Non copyable.
    parser& operator= (const parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param msg    a description of the syntax error.
    virtual void error (const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);



    class context
    {
    public:
      context (const parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    parser (const parser&);
    /// Non copyable.
    parser& operator= (const parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef unsigned char state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const short yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const unsigned char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const signed char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const unsigned char yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 599,     ///< Last index in yytable_.
      yynnts_ = 31,  ///< Number of nonterminal symbols.
      yyfinal_ = 3 ///< Termination state number.
    };



  };


} // yy
#line 915 "swift.tab.cc"








#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 994 "swift.tab.cc"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t)
    : Base (t)
    , value ()
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (value_type) v)
    : Base (t)
    , value (YY_MOVE (v))
  {}


  template <typename Base>
  parser::symbol_kind_type
  parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
  }

  // by_kind.
  parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  void
  parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  void
  parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  parser::symbol_kind_type
  parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  parser::symbol_kind_type
  parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value))
  {
    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YY_USE (yysym.kind ());
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.kind_ = yytranslate_ (yylex (&yyla.value));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;


      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {

#line 1448 "swift.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short parser::yypact_ninf_ = -155;

  const signed char parser::yytable_ninf_ = -101;

  const short
  parser::yypact_[] =
  {
    -155,     8,   213,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,   -44,    14,    14,  -155,    30,    32,   256,    34,   -17,
     -11,   278,  -155,  -155,  -155,    22,    29,   278,   278,   278,
     278,  -155,  -155,   404,  -155,    35,  -155,  -155,  -155,  -155,
    -155,   321,   -13,     6,  -155,     6,    36,    18,  -155,   425,
      82,   278,   278,   341,  -155,  -155,   -47,   -47,   506,    60,
      47,   446,   147,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   111,   278,  -155,  -155,
     -20,   506,  -155,    61,    72,   278,    19,    14,    10,    -9,
    -155,   278,   466,   486,    21,   278,  -155,  -155,  -155,   538,
     522,    59,    59,    59,    59,   506,    59,    59,    46,    46,
     -47,   -47,    62,   385,   278,  -155,   321,   506,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,    19,    73,  -155,  -155,
    -155,    -7,   115,  -155,    76,    68,    64,   -21,   363,    65,
      65,   278,    67,   -25,  -155,   506,   321,  -155,   506,  -155,
      70,   278,    69,    19,    71,    10,   -45,   -21,    75,    65,
    -155,  -155,  -155,    78,    49,  -155,    77,  -155,  -155,   112,
     -43,    65,  -155,  -155,    81,  -155,   506,    19,  -155,    19,
    -155,    86,  -155,    79,    10,  -155,    83,  -155,  -155,  -155,
     -26,    65,  -155,  -155,  -155,  -155,    19,  -155,    84,  -155,
    -155,  -155,  -155,    65,    65,  -155,  -155
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     2,     1,    37,    38,    39,    40,    41,    36,
      42,    47,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,    44,    45,    46,     0,     0,     0,     0,    52,
       0,     3,     4,     0,    16,     0,     7,     8,     9,    10,
      15,    85,     0,    70,    65,    71,     0,     0,    11,     0,
       0,     0,     0,     0,    13,    14,    31,    30,    50,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     5,
      47,    84,    87,     0,    86,     0,     0,     0,    81,     0,
      12,     0,     0,     0,     0,     0,    35,    49,   111,    28,
      29,    21,    22,    25,    26,    27,    23,    24,    17,    18,
      19,    20,    33,     0,     0,    48,     0,    67,    64,    57,
      58,    59,    60,    61,    62,    63,     0,    68,    55,    54,
      66,     0,     0,    79,    82,     0,     0,    89,     0,     0,
       0,     0,     0,     0,   105,    51,    85,    32,    83,    88,
       0,     0,     0,     0,     0,     0,     0,    89,     0,     0,
      90,    92,    91,     0,    89,    94,     0,   109,   110,   101,
       0,     0,   104,   106,     0,    56,    69,     0,    76,     0,
      80,     0,    73,     0,    81,    98,     0,    95,    93,    75,
       0,     0,   108,    34,    77,    78,     0,    74,     0,    96,
     102,   103,   107,     0,     0,    72,    97
  };

  const short
  parser::yypgoto_[] =
  {
    -155,  -155,   113,  -155,    -2,  -155,     7,  -155,  -122,  -155,
    -155,   145,    74,  -154,     9,  -155,   -22,    51,    17,  -155,
    -155,  -155,     1,    16,   -19,  -155,  -155,    37,  -155,  -155,
     -62
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     1,     2,    32,    81,    34,    59,    60,   127,   128,
     129,    43,    44,    35,   133,   134,   135,    82,    83,    84,
     163,   164,   165,   166,    36,    37,   143,   144,    38,    39,
      40
  };

  const short
  parser::yytable_[] =
  {
      33,   136,    20,   152,   150,   141,   142,    95,     3,   187,
     181,   158,   159,    76,    77,    49,   160,   161,   162,    53,
     131,    41,    31,   191,    42,    56,    57,    58,    61,   118,
     119,   178,   199,   120,   121,   122,   123,   124,    85,   125,
      46,    31,    47,   172,    50,    41,   114,   -99,    51,    92,
      93,   141,   142,    86,    52,   194,    87,   195,   137,   153,
      33,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   203,   113,   167,   168,   169,   132,
     126,   158,   159,   117,    89,    54,   160,   161,   162,   138,
      12,    13,    55,   145,   182,    12,    13,   185,    79,    15,
      16,    88,    74,    75,    15,    16,    76,    77,    91,   192,
      95,    96,   148,    72,    73,    74,    75,  -100,   186,    76,
      77,   112,   116,   115,   151,   154,   155,   146,   201,   202,
     156,   157,    31,   171,   175,   177,   190,   179,   196,    58,
     184,   205,   206,   193,    62,   189,   204,   197,   170,   176,
       4,     5,     6,     7,     8,     9,    10,    11,    45,    12,
      13,   130,   198,   174,   180,   188,    14,   149,    15,    16,
      17,   200,    18,   183,    19,    20,    21,     0,     0,     0,
     173,    22,    23,    24,     0,     0,     0,     0,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,    29,     0,
       0,     0,    30,     0,    31,    98,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,     0,     0,     0,
       0,     0,    14,     0,    15,    16,    17,     0,    18,     0,
      19,    20,    21,     0,     0,     0,     0,    22,    23,    24,
       0,     0,     0,     0,    25,    26,     0,     0,    27,     4,
       5,     6,     7,     8,     9,    10,    11,     0,    28,     0,
       0,     0,     0,     0,    29,    14,     0,     0,    30,     0,
      31,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      22,    23,    24,     0,     0,     0,     0,    14,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    22,    23,    24,     0,     0,    29,     0,    48,
       0,    30,     0,    27,     4,     5,     6,     7,     8,     9,
      10,    80,     0,    28,     0,     0,     0,     0,     0,    29,
      14,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,    29,     0,    63,    64,    30,    65,    66,    67,
      68,     0,    69,    70,    71,    72,    73,    74,    75,     0,
       0,    76,    77,     0,     0,     0,    63,    64,    94,    65,
      66,    67,    68,     0,    69,    70,    71,    72,    73,    74,
      75,     0,     0,    76,    77,     0,     0,     0,    63,    64,
      31,    65,    66,    67,    68,     0,    69,    70,    71,    72,
      73,    74,    75,     0,     0,    76,    77,    63,    64,   147,
      65,    66,    67,    68,     0,    69,    70,    71,    72,    73,
      74,    75,     0,     0,    76,    77,     0,    78,    63,    64,
       0,    65,    66,    67,    68,     0,    69,    70,    71,    72,
      73,    74,    75,     0,     0,    76,    77,     0,    90,    63,
      64,     0,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,     0,     0,    76,    77,    97,    63,
      64,     0,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,     0,     0,    76,    77,   139,    63,
      64,     0,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,     0,     0,    76,    77,   140,    63,
      64,     0,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,     0,    63,    76,    77,    65,    66,
      67,    68,     0,     0,    70,    71,    72,    73,    74,    75,
       0,     0,    76,    77,    65,    66,    67,    68,     0,     0,
      70,    71,    72,    73,    74,    75,     0,     0,    76,    77
  };

  const short
  parser::yycheck_[] =
  {
       2,    10,    28,    10,   126,    30,    31,    50,     0,   163,
      55,    32,    33,    60,    61,    17,    37,    38,    39,    21,
      10,    65,    67,    66,    10,    27,    28,    29,    30,    10,
      11,   153,   186,    14,    15,    16,    17,    18,    51,    20,
      10,    67,    10,    68,    10,    65,    66,    68,    65,    51,
      52,    30,    31,    66,    65,   177,    50,   179,    67,    66,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   196,    77,   138,   139,   140,    69,
      61,    32,    33,    85,    66,    63,    37,    38,    39,    91,
      12,    13,    63,    95,   156,    12,    13,   159,    63,    21,
      22,    65,    56,    57,    21,    22,    60,    61,    26,   171,
      50,    64,   114,    54,    55,    56,    57,    68,    40,    60,
      61,    10,    50,    62,    51,    10,    50,    65,   190,   191,
      62,    67,    67,    66,    64,    66,    24,    66,    52,   141,
      65,   203,   204,    62,    31,    68,    62,    68,   141,   151,
       3,     4,     5,     6,     7,     8,     9,    10,    13,    12,
      13,    87,   184,   146,   155,   164,    19,   116,    21,    22,
      23,   190,    25,   157,    27,    28,    29,    -1,    -1,    -1,
     143,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    67,    68,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    -1,    25,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    61,    19,    -1,    -1,    65,    -1,
      67,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      34,    35,    36,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    34,    35,    36,    -1,    -1,    61,    -1,    63,
      -1,    65,    -1,    45,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,
      19,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    43,    44,    65,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    60,    61,    -1,    -1,    -1,    43,    44,    67,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    60,    61,    -1,    -1,    -1,    43,    44,
      67,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    60,    61,    43,    44,    64,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    43,    44,
      -1,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    60,    61,    -1,    63,    43,
      44,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    60,    61,    62,    43,
      44,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    60,    61,    62,    43,
      44,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    60,    61,    62,    43,
      44,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    43,    60,    61,    46,    47,
      48,    49,    -1,    -1,    52,    53,    54,    55,    56,    57,
      -1,    -1,    60,    61,    46,    47,    48,    49,    -1,    -1,
      52,    53,    54,    55,    56,    57,    -1,    -1,    60,    61
  };

  const signed char
  parser::yystos_[] =
  {
       0,    71,    72,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    12,    13,    19,    21,    22,    23,    25,    27,
      28,    29,    34,    35,    36,    41,    42,    45,    55,    61,
      65,    67,    73,    74,    75,    83,    94,    95,    98,    99,
     100,    65,    10,    81,    82,    81,    10,    10,    63,    74,
      10,    65,    65,    74,    63,    63,    74,    74,    74,    76,
      77,    74,    72,    43,    44,    46,    47,    48,    49,    51,
      52,    53,    54,    55,    56,    57,    60,    61,    63,    63,
      10,    74,    87,    88,    89,    51,    66,    50,    65,    66,
      63,    26,    74,    74,    67,    50,    64,    62,    68,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    10,    74,    66,    62,    50,    74,    10,    11,
      14,    15,    16,    17,    18,    20,    61,    78,    79,    80,
      82,    10,    69,    84,    85,    86,    10,    67,    74,    62,
      62,    30,    31,    96,    97,    74,    65,    64,    74,    87,
      78,    51,    10,    66,    10,    50,    62,    67,    32,    33,
      37,    38,    39,    90,    91,    92,    93,   100,   100,   100,
      76,    66,    68,    97,    88,    64,    74,    66,    78,    66,
      84,    55,   100,    93,    65,   100,    40,    83,    92,    68,
      24,    66,   100,    62,    78,    78,    52,    68,    86,    83,
      94,   100,   100,    78,    62,   100,   100
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    70,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    91,    91,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    95,    96,    96,    97,    97,    98,
      99,   100
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     2,     3,     2,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     4,     3,     6,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     3,     0,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     5,
       2,     2,     9,     6,     7,     6,     3,     4,     4,     1,
       3,     0,     1,     3,     1,     0,     1,     1,     3,     0,
       1,     1,     1,     2,     1,     2,     3,     5,     2,     0,
       1,     5,     7,     7,     5,     1,     2,     4,     3,     5,
       5,     3
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "FLOAT_HEX",
  "FLOAT_DEC", "INT_BINARY", "INT_OCTAL", "INT_HEXADECIMAL", "INT_DECIMAL",
  "STRING_C", "ID", "INT_KW", "LET_KW", "VAR_KW", "BOOL_KW",
  "CHARACTER_KW", "UINT_KW", "FLOAT_KW", "DOUBLE_KW", "CHAR_LITERAL",
  "STRING_KW", "FUNC", "CLASS", "RETURN", "ELSE", "FOR", "IN", "WHILE",
  "IF", "SWITCH", "CASE", "DEFAULT", "INIT", "DEINIT", "TRUE", "FALSE",
  "NIL", "PUBLIC", "PRIVATE", "FILE_PRIVATE", "STATIC", "BREAK",
  "CONTINUE", "AND", "OR", "NOT", "EQ", "NE", "GE", "LE", "','", "'='",
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "UNMINUS", "'.'", "'['",
  "')'", "';'", "']'", "'('", "':'", "'{'", "'}'", "'_'", "$accept",
  "program", "stmt_list", "stmt", "expr", "primary_expr", "expr_list",
  "expr_list_e", "type", "array_type", "base_type", "decl_items",
  "decl_item", "decl", "func_param", "func_param_list",
  "func_param_list_e", "func_arg", "func_arg_list",
  "func_arg_list_nonempty", "access_modifier", "class_decl_list",
  "class_member", "class_decl_list_e", "if_stmt", "switch_statement",
  "switch_case_list", "switch_case", "for_stmt", "while_stmt", "block", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  parser::yyrline_[] =
  {
       0,    47,    47,    50,    52,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     111,   112,   115,   117,   121,   122,   126,   130,   131,   132,
     133,   134,   135,   136,   137,   141,   142,   146,   147,   148,
     152,   153,   154,   155,   156,   157,   161,   162,   163,   167,
     168,   171,   173,   177,   178,   181,   183,   187,   188,   191,
     193,   194,   195,   199,   200,   204,   205,   206,   207,   210,
     212,   216,   217,   218,   222,   226,   227,   231,   232,   236,
     240,   244
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  parser::symbol_kind_type
  parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    58,     2,     2,
      65,    62,    56,    54,    50,    55,    60,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    63,
      53,    51,    52,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    64,     2,    69,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    59
    };
    // Last valid token kind.
    const int code_max = 305;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

} // yy
#line 2186 "swift.tab.cc"

#line 248 "parser.y"


// ---- Error handling ----

void yyerror(const char *s) {
    cerr << "Parse error: " << s << endl;
}

int main() {
    cout << "Parsing Swift-like source code..." << endl;
    yyparse();
    return 0;
}

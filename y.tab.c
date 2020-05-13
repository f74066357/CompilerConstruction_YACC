/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "compiler_hw2.y" /* yacc.c:339  */

    #include "common.h" //Extern variables that communicate with lex
    // #define YYDEBUG 1
    // int yydebug = 1;

    extern int yylineno;
    extern int yylex();
    extern FILE *yyin;

    void yyerror (char const *s)
    {
        printf("error:%d: %s\n", yylineno, s);
    }
    static int indexcount=0;
    static int addresscount=0;
    static int scopecount=0;
    static int f_flag=0;
    static int if_flag=0;
    static int  p_flag=0;
    static int  b_flag=0;
    typedef struct Symbols {
        int index;
        char* name;
        char* type;
        int address;
        int lineno;
        char* etype;
        int scopenum;
    } Symbol;
    Symbol symbolTable[30];
    /* Symbol table function - you can add new function if needed. */
    static void create_symbol();
    static void insert_symbol(int index,char* name,char* type,int address,int lineno,char* etype,int scopenum);
    static int lookup_symbol(char *name,int scopenum);
    static void dump_symbol(int scope);
    static void print_symbol();

#line 104 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD = 258,
    SUB = 259,
    MUL = 260,
    QUO = 261,
    REM = 262,
    INC = 263,
    DEC = 264,
    GTR = 265,
    LSS = 266,
    GEQ = 267,
    LEQ = 268,
    EQL = 269,
    NEQ = 270,
    ASSIGN = 271,
    ADD_ASSIGN = 272,
    SUB_ASSIGN = 273,
    MUL_ASSIGN = 274,
    QUO_ASSIGN = 275,
    REM_ASSIGN = 276,
    LAND = 277,
    LOR = 278,
    NOT = 279,
    LPAREN = 280,
    RPAREN = 281,
    LBRACK = 282,
    RBRACK = 283,
    LBRACE = 284,
    RBRACE = 285,
    COMMA = 286,
    SEMICOLON = 287,
    NEWLINE = 288,
    PRINT = 289,
    PRINTLN = 290,
    IF = 291,
    ELSE = 292,
    FOR = 293,
    VAR = 294,
    INT = 295,
    FLOAT = 296,
    BOOL = 297,
    STRING = 298,
    INT_LIT = 299,
    FLOAT_LIT = 300,
    STRING_LIT = 301,
    ID = 302,
    TRUE = 303,
    FALSE = 304
  };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define QUO 261
#define REM 262
#define INC 263
#define DEC 264
#define GTR 265
#define LSS 266
#define GEQ 267
#define LEQ 268
#define EQL 269
#define NEQ 270
#define ASSIGN 271
#define ADD_ASSIGN 272
#define SUB_ASSIGN 273
#define MUL_ASSIGN 274
#define QUO_ASSIGN 275
#define REM_ASSIGN 276
#define LAND 277
#define LOR 278
#define NOT 279
#define LPAREN 280
#define RPAREN 281
#define LBRACK 282
#define RBRACK 283
#define LBRACE 284
#define RBRACE 285
#define COMMA 286
#define SEMICOLON 287
#define NEWLINE 288
#define PRINT 289
#define PRINTLN 290
#define IF 291
#define ELSE 292
#define FOR 293
#define VAR 294
#define INT 295
#define FLOAT 296
#define BOOL 297
#define STRING 298
#define INT_LIT 299
#define FLOAT_LIT 300
#define STRING_LIT 301
#define ID 302
#define TRUE 303
#define FALSE 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "compiler_hw2.y" /* yacc.c:355  */

    int i_val;
    float f_val;
    char *s_val;
    bool b_val;
    /* ... */

#line 250 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 267 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   342

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    84,    85,    89,    90,    91,    92,    93,
      94,    95,    99,   156,   213,   214,   215,   218,   285,   286,
     287,   288,   289,   290,   294,   298,   299,   303,   304,   305,
     306,   310,   314,   316,   511,   543,   547,   551,   552,   553,
     554,   555,   556,   557,   560,   561,   564,   565,   566,   570,
     571,   572,   573,   577,   578,   579,   583,   584,   585,   589,
     590,   608,   615,   616,   617,   618,   619,   624,   628,   665,
     666,   670,   673,   676,   680,   681,   682,   686,   689,   693,
     694,   697,   700,   704,   708,   712,   712,   746,   746
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "QUO", "REM", "INC",
  "DEC", "GTR", "LSS", "GEQ", "LEQ", "EQL", "NEQ", "ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "QUO_ASSIGN", "REM_ASSIGN", "LAND", "LOR",
  "NOT", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE",
  "COMMA", "SEMICOLON", "NEWLINE", "PRINT", "PRINTLN", "IF", "ELSE", "FOR",
  "VAR", "INT", "FLOAT", "BOOL", "STRING", "INT_LIT", "FLOAT_LIT",
  "STRING_LIT", "ID", "TRUE", "FALSE", "$accept", "Program",
  "StatementList", "Statement", "DeclarationStmt", "SimpleStmt",
  "AssignmentStmt", "assign_op", "ExpressionStmt", "Type", "TypeName",
  "ArrayType", "Expression", "UnaryExpr", "binary_op", "cmp_op", "l_op",
  "add_op", "mul_op", "unary_op", "PrimaryExpr", "Operand", "Literal",
  "IndexExpr", "ConversionExpr", "IncDecStmt", "Block", "LBRACE1",
  "RBRACE1", "IfStmt", "IFT", "Condition", "ForStmt", "FORT", "ForClause",
  "InitStmt", "PostStmt", "PrintStmt", "$@1", "$@2", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -87

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define YYTABLE_NINF -79

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     129,   -87,   -87,   -87,    15,    15,   -87,   -87,   -87,   -87,
     -87,   -87,   -40,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     8,   129,   -87,   -24,   -21,   -87,   -87,
       1,   -87,   -87,   319,   -87,    15,     2,   -87,   -87,   -87,
     -87,   -87,    -5,   129,    -3,    15,     3,    15,    16,   223,
      10,    12,    23,     4,   -87,   -87,   -87,   -87,    15,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
      15,    15,   -87,   -87,   -87,   -87,   -87,    15,   -87,    82,
     -87,   137,    21,   -87,   -87,   176,    21,    21,    19,   -87,
     -87,     4,    15,    15,    37,   247,   137,   137,   197,   -87,
     -87,    28,   -87,   -87,    15,   -87,   271,   295,    15,   -87,
     -87,    -2,    34,   -87,   -87,   137,   -87,   -87,    15,   -87,
     -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    53,    54,    55,     0,     0,    72,    11,    85,    87,
      77,    81,     0,    27,    28,    30,    29,    62,    63,    66,
      60,    64,    65,     0,     2,     4,     0,     0,    14,    15,
       0,    25,    26,    24,    32,     0,    34,    56,    59,    57,
      58,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     3,     5,     6,     0,    46,
      47,    49,    50,    51,    69,    70,    41,    39,    42,    40,
      37,    38,    18,    19,    20,    21,    22,    23,    45,    44,
       0,     0,    52,    43,    36,    48,    35,     0,     7,     0,
       8,    78,     0,     9,    83,    24,     0,     0,     0,    10,
      61,     0,     0,     0,    12,     0,    17,    33,     0,    73,
      71,    74,    80,    79,     0,    31,     0,     0,     0,    68,
      67,     0,     0,    86,    88,    13,    76,    75,     0,    84,
      82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -87,   -87,    24,   -19,   -87,   -44,   -87,   -87,   -87,   -49,
     -87,   -87,    -4,    33,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -86,   -87,   -87,   -50,
     -87,   -45,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    26,    27,    28,    80,    29,    30,
      31,    32,    33,    34,    81,    82,    83,    84,    85,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   110,    44,
      45,    92,    46,    47,    97,    98,   130,    48,    51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    50,    96,    94,   104,    55,   111,    53,    54,    56,
     112,   113,    57,    59,    60,    61,    62,    63,     1,     2,
      66,    67,    68,    69,    70,    71,    58,     6,    88,    87,
      90,     5,    78,    79,    10,   126,    93,   102,   101,     3,
       4,    91,     5,    95,    13,    14,    15,    16,   103,    99,
       6,   114,   115,   118,   105,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   121,   128,    89,    86,   122,
      55,   127,     0,     0,     0,     0,   106,   107,     0,     0,
       0,     0,     0,   108,   129,     1,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     3,     4,     0,     5,
      91,     6,   109,     0,   125,     7,     8,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     1,     2,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    66,    67,    68,
      69,    70,    71,     3,     4,     0,     5,     0,     6,    78,
      79,     0,     7,     8,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      59,    60,    61,    62,    63,   -78,     0,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,     0,     0,   120,    59,    60,    61,    62,
      63,     0,     0,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,   100,
      59,    60,    61,    62,    63,     0,     0,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,   119,    59,    60,    61,    62,    63,     0,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,   123,    59,    60,
      61,    62,    63,     0,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    78,    79,     0,
       0,   124,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79
};

static const yytype_int16 yycheck[] =
{
       4,     5,    47,    47,    53,    24,    92,    47,     0,    33,
      96,    97,    33,     3,     4,     5,     6,     7,     3,     4,
      10,    11,    12,    13,    14,    15,    25,    29,    33,    27,
      33,    27,    22,    23,    36,   121,    33,    25,    28,    24,
      25,    45,    27,    47,    40,    41,    42,    43,    25,    33,
      29,    32,   101,    16,    58,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    37,    32,    43,    35,   114,
      89,   121,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    87,   128,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
     114,    29,    30,    -1,   118,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    24,    25,    -1,    27,    -1,    29,    22,
      23,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       3,     4,     5,     6,     7,    29,    -1,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    -1,    -1,    28,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    24,    25,    27,    29,    33,    34,    35,
      36,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    51,    52,    53,    54,    55,    56,    58,
      59,    60,    61,    62,    63,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    79,    80,    82,    83,    87,    62,
      62,    88,    89,    47,     0,    53,    33,    33,    25,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      57,    64,    65,    66,    67,    68,    63,    27,    33,    52,
      33,    62,    81,    33,    55,    62,    81,    84,    85,    33,
      26,    28,    25,    25,    59,    62,    62,    62,    62,    30,
      78,    76,    76,    76,    32,    59,    62,    62,    16,    26,
      28,    37,    81,    26,    26,    62,    76,    79,    32,    55,
      86
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    56,    57,    57,
      57,    57,    57,    57,    58,    59,    59,    60,    60,    60,
      60,    61,    62,    62,    63,    63,    64,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    67,    67,    67,    68,
      68,    68,    68,    69,    69,    69,    70,    70,    70,    71,
      71,    71,    72,    72,    72,    72,    72,    73,    74,    75,
      75,    76,    77,    78,    79,    79,    79,    80,    81,    82,
      82,    83,    84,    85,    86,    88,    87,    89,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     3,     5,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     4,     4,     2,
       2,     3,     1,     1,     3,     5,     5,     1,     1,     3,
       3,     1,     5,     1,     1,     0,     5,     0,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 12:
#line 99 "compiler_hw2.y" /* yacc.c:1646  */
    {   
                        char * buff=strdup((yyvsp[-1].s_val));
                        const char* delim = " ";
                        char *sepstr = buff;
                        char * name=strsep(&sepstr, delim);
                        char * dtype;
                        char * etype;
                        if(strcmp((yyvsp[0].s_val),"INT")==0){
                            dtype="int32";
                            etype="-";
                        }
                        else if(strcmp((yyvsp[0].s_val),"FLOAT")==0){
                            dtype="float32";
                            etype="-";
                        }
                        else if(strcmp((yyvsp[0].s_val),"STRING")==0){
                            dtype="string";
                            etype="-";
                        }
                        else if(strcmp((yyvsp[0].s_val),"BOOL")==0){
                            dtype="bool";
                            etype="-";
                        }
                        else{
                            const char* arrcut = "]";
                            char *substr = NULL;
                            substr =strsep(&sepstr, arrcut);
                            char arrtype[8]={};
                            strncpy(arrtype,sepstr,strlen(sepstr)-1);
                            arrtype[strlen(sepstr)]="\0";
                            //printf("len %d\n",strlen(sepstr));
                            //printf("type %s\n",sepstr);
                            //printf("type %s\n",arrtype);
                            //printf("hoho\n");
                            if(strcmp(arrtype,"int32")==0){
                                dtype="array";
                                etype="int32";
                            }
                            else if(strcmp(arrtype,"float32")==0){
                                dtype="array";
                                etype="float32";
                            }
                        }
                        
                        if(lookup_symbol(name,scopecount)==-1){
                            insert_symbol(indexcount,name,dtype,addresscount,yylineno,etype,scopecount);
                            indexcount++;
                            addresscount++;
                            //print_symbol(scopecount);
                        }
                        else{
                            int i=lookup_symbol(name,scopecount);
                            int p=symbolTable[i].lineno;
                            printf("error\:%d\: %s redeclared in this block. previous declaration at line %d\n",yylineno,name,p);
                        }
                        
                    }
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 156 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                            char * buff=strdup((yyvsp[-3].s_val));
                                            const char* delim = " ";
                                            char *sepstr = buff;
                                            char * name=strsep(&sepstr, delim);
                                            char * dtype;
                                            char * etype;
                                            if(strcmp((yyvsp[-2].s_val),"INT")==0){
                                                dtype="int32";
                                                etype="-";
                                            }
                                            else if(strcmp((yyvsp[-2].s_val),"FLOAT")==0){
                                                dtype="float32";
                                                etype="-";
                                            }
                                            else if(strcmp((yyvsp[-2].s_val),"STRING")==0){
                                                dtype="string";
                                                etype="-";
                                            }
                                            else if(strcmp((yyvsp[-2].s_val),"BOOL")==0){
                                                dtype="bool";
                                                etype="-";
                                            }
                                            else{
                                                const char* arrcut = "]";
                                                char *substr = NULL;
                                                substr =strsep(&sepstr, arrcut);
                                                char arrtype[8]={};
                                                strncpy(arrtype,sepstr,strlen(sepstr)-1);
                                                arrtype[strlen(sepstr)]="\0";
                                                //printf("len %d\n",strlen(sepstr));
                                                //printf("type %s\n",sepstr);
                                                //printf("type %s\n",arrtype);
                                                //printf("hoho\n");
                                                if(strcmp(arrtype,"int32")==0){
                                                    dtype="array";
                                                    etype="int32";
                                                }
                                                else if(strcmp(arrtype,"float32")==0){
                                                    dtype="array";
                                                    etype="float32";
                                                }
                                            }
                                            
                                            //if(lookup_symbol(name)==-1){
                                                insert_symbol(indexcount,name,dtype,addresscount,yylineno,etype,scopecount);
                                                indexcount++;
                                                addresscount++;
                                                //print_symbol(scopecount);
                                            //}
                                            //else{
                                            //    printf("redeclared\n");
                                            //}
                                        }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 218 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                            char* id1=NULL;
                                            char* id2=NULL;
                                            char* type1=NULL;
                                            char* type2=NULL;
                                            char * buff=strdup((yyvsp[-2].s_val));
                                            const char* delim = " ";
                                            char *sepstr = buff;
                                            char * name=strsep(&sepstr, delim);
                                            id1=name;
                                            char temp[10]={};
                                            char temp2[10]={};
                                            strncpy(temp2,(yyvsp[0].s_val),strlen((yyvsp[0].s_val)));
                                            if(strcmp(temp2,"INT_LIT")==0){
                                                id2=temp2;
                                            }
                                            else{
                                                strncpy(temp,(yyvsp[0].s_val),strlen((yyvsp[0].s_val))-1);
                                                id2=temp;
                                            }
                                            //printf("id\: %s %s\n",id1,id2);
                                            if(strcmp(id1,"INT_LIT")==0){
                                                type1="int32";
                                                printf("error\:%d\: cannot assign to %s\n",yylineno,"int32");
                                            }
                                            else if(strcmp(id1,"FLOAT_LIT")==0){
                                                type1="float32";
                                                printf("error\:%d\: cannot assign to %s\n",yylineno,"float32");
                                            }
                                            else{
                                                int i1=lookup_symbol(id1,scopecount);
                                                if(i1!=-1){
                                                        type1=symbolTable[i1].type;
                                                }
                                                else{
                                                    type1=" ";
                                                }
                                            }
                                            if(strcmp(id2,"INT_LIT")==0){
                                                type2="int32";
                                            }
                                            else if(strcmp(id2,"FLOAT_LIT")==0){
                                                type2="float32";
                                            }
                                            else{
                                                int i2=lookup_symbol(id2,scopecount);
                                                if(i2!=-1){
                                                    type2=symbolTable[i2].type;
                                                }
                                                else{
                                                    type2=" ";
                                                }
                                                
                                            }
                                            if(strcmp(type1,type2)!=0){
                                                if(strcmp(type1," ")!=0 && strcmp(type2," ")!=0){
                                                    printf("error\:%d\: invalid operation\: %s (mismatched types %s and %s)\n",yylineno,(yyvsp[-1].s_val),type1,type2);
                                                }
                                            }
                                            



                                            printf("%s\n",(yyvsp[-1].s_val));
                                        }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 285 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "ASSIGN";}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 286 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "ADD_ASSIGN";}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 287 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "SUB_ASSIGN";}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 288 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "MUL_ASSIGN";}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 289 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "QUO_ASSIGN";}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 290 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "REM_ASSIGN";}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 303 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "INT";}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 304 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "FLOAT";}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 305 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "STRING";}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 306 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "BOOL";}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 314 "compiler_hw2.y" /* yacc.c:1646  */
    {
                }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 316 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                            
                                            //printf("first %s\n",$1);
                                            //printf("thrid %s\n",$3);
                                            if(strcmp((yyvsp[-1].s_val),"ADD")==0||strcmp((yyvsp[-1].s_val),"SUB")==0){
                                                char* id1=NULL;
                                                char* id2=NULL;
                                                char* type1=NULL;
                                                char* type2=NULL;
                                                char *c=strstr((yyvsp[-2].s_val), " ");
                                                if(c == NULL) {
                                                    id1=(yyvsp[-2].s_val);
                                                    id2=(yyvsp[0].s_val);
                                                }
                                                else{
                                                    char * buff=strdup((yyvsp[-2].s_val));
                                                    const char* delim = " ";
                                                    char *sepstr = buff;
                                                    char * name=strsep(&sepstr, delim);
                                                    id1=name;
                                                    char temp[10]={};
                                                    char temp2[10]={};
                                                    strncpy(temp2,(yyvsp[0].s_val),strlen((yyvsp[0].s_val)));
                                                    if(strcmp(temp2,"INT_LIT")==0){
                                                        id2=temp2;
                                                    }
                                                    else{
                                                        strncpy(temp,(yyvsp[0].s_val),strlen((yyvsp[0].s_val))-1);
                                                        id2=temp;
                                                    }
                                                }
                                                if(strcmp(id1,"INT_LIT")==0){
                                                    type1="int32";
                                                }
                                                else if(strcmp(id1,"FLOAT_LIT")==0){
                                                    type1="float32";
                                                }
                                                else{
                                                    int i1=lookup_symbol(id1,scopecount);
                                                    if(i1!=-1){
                                                         type1=symbolTable[i1].type;
                                                    }
                                                    else{
                                                        type1=" ";
                                                    }
                                                }
                                                if(strcmp(id2,"INT_LIT")==0){
                                                    type2="int32";
                                                }
                                                else if(strcmp(id2,"FLOAT_LIT")==0){
                                                    type2="float32";
                                                }
                                                else{
                                                    int i2=lookup_symbol(id2,scopecount);
                                                    if(i2!=-1){
                                                        type2=symbolTable[i2].type;
                                                    }
                                                    else{
                                                        type2=" ";
                                                    }
                                                    
                                                }
                                                if(strcmp(type1,type2)!=0){
                                                    if(strcmp(type1," ")!=0 && strcmp(type2," ")!=0){
                                                        printf("error\:%d\: invalid operation\: %s (mismatched types %s and %s)\n",yylineno,(yyvsp[-1].s_val),type1,type2);
                                                    }
                                                }
                                                //printf("type\:%s  %s\n",type1,type2);
                                            }

                                            if(strcmp((yyvsp[-1].s_val),"REM")==0){
                                                char* id1=NULL;
                                                char* id2=NULL;
                                                char* type1=NULL;
                                                char* type2=NULL;
                                                char *c=strstr((yyvsp[-2].s_val), " ");
                                                if(c == NULL) {
                                                    id1=(yyvsp[-2].s_val);
                                                    id2=(yyvsp[0].s_val);
                                                }
                                                else{
                                                    char * buff=strdup((yyvsp[-2].s_val));
                                                    const char* delim = " ";
                                                    char *sepstr = buff;
                                                    char * name=strsep(&sepstr, delim);
                                                    id1=name;
                                                    char temp[10]={};
                                                    char temp2[10]={};
                                                    strncpy(temp2,(yyvsp[0].s_val),strlen((yyvsp[0].s_val)));
                                                    if(strcmp(temp2,"INT_LIT")==0){
                                                        id2=temp2;
                                                    }
                                                    else{
                                                        strncpy(temp,(yyvsp[0].s_val),strlen((yyvsp[0].s_val))-1);
                                                        id2=temp;
                                                    }
                                                }
                                                //printf("REM\:%s %s\n",id1,id2);
                                                int i1=lookup_symbol(id1,scopecount);
                                                if(i1!=-1){
                                                        type1=symbolTable[i1].type;
                                                }
                                                else{
                                                    type1=" ";
                                                }
                                                int i2=lookup_symbol(id2,scopecount);
                                                if(i2!=-1){
                                                    type2=symbolTable[i2].type;
                                                }
                                                else{
                                                    type2=" ";
                                                }
                                                if(strcmp(type1,"float32")==0||strcmp(type2,"float32")==0){
                                                    printf("error\:%d\: invalid operation\: (operator REM not defined on float32)\n",yylineno);
                                                }
                                            }
                                            if(strcmp((yyvsp[-1].s_val),"LAND")==0||strcmp((yyvsp[-1].s_val),"LOR")==0){
                                                //printf("1213\n");
                                                char* id1=NULL;
                                                char* id2=NULL;
                                                char* type1=NULL;
                                                char* type2=NULL;
                                                char *c=strstr((yyvsp[-2].s_val), " ");
                                                if(c == NULL) {
                                                    id1=(yyvsp[-2].s_val);
                                                    id2=(yyvsp[0].s_val);
                                                }
                                                else{
                                                    char * buff=strdup((yyvsp[-2].s_val));
                                                    const char* delim = " ";
                                                    char *sepstr = buff;
                                                    char * name=strsep(&sepstr, delim);
                                                    id1=name;
                                                    char temp[10]={};
                                                    char temp2[10]={};
                                                    strncpy(temp2,(yyvsp[0].s_val),strlen((yyvsp[0].s_val)));
                                                    if(strcmp(temp2,"INT_LIT")==0){
                                                        id2=temp2;
                                                    }
                                                    else{
                                                        strncpy(temp,(yyvsp[0].s_val),strlen((yyvsp[0].s_val))-1);
                                                        id2=temp;
                                                    }
                                                }
                                                if(strcmp(id1,"INT_LIT")==0){
                                                    type1="int32";
                                                }
                                                else if(strcmp(id1,"FLOAT_LIT")==0){
                                                    type1="float32";
                                                }
                                                else{
                                                    int i1=lookup_symbol(id1,scopecount);
                                                    if(i1!=-1){
                                                            type1=symbolTable[i1].type;
                                                    }
                                                    else{
                                                        type1=" ";
                                                    }
                                                }
                                                if(strcmp(id2,"INT_LIT")==0){
                                                    type2="int32";
                                                }
                                                else if(strcmp(id2,"FLOAT_LIT")==0){
                                                    type2="float32";
                                                }
                                                else{
                                                    int i2=lookup_symbol(id2,scopecount);
                                                    if(i2!=-1){
                                                        type2=symbolTable[i2].type;
                                                    }
                                                    else{
                                                        type2=" ";
                                                    }
                                                }
                                                if(strcmp(type1,"int32")==0||strcmp(type2,"int32")==0){
                                                    printf("error\:%d\: invalid operation\: (operator %s not defined on int32)\n",yylineno,(yyvsp[-1].s_val));
                                                }
                                            }
                                            printf("%s\n",(yyvsp[-1].s_val));
                                            if(f_flag==1){
                                                //printf("FFF %s\n",$1);
                                                if(strcmp((yyvsp[-2].s_val),"x + 1 {")==0){
                                                    printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                                                    f_flag=0;
                                                }
                                                else{
                                                    f_flag=0;
                                                }
                                            }
                                            //printf("thrid %s\n",$3);
                                        }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 511 "compiler_hw2.y" /* yacc.c:1646  */
    {
                            if(f_flag==1){
                                if(strcmp((yyvsp[0].s_val),"FLOAT_LIT")==0){
                                    //printf("%d\n",p_flag);
                                    printf("error\:%d\: non-bool (type float32) used as for condition\n",yylineno+1);
                                    f_flag=0;
                                }
                            }
                            char * x1="x {";
                            if(if_flag==1){
                                if(strcmp((yyvsp[0].s_val),"FLOAT_LIT")==0){
                                    printf("error\:%d\: non-bool (type float32) used as for condition\n",yylineno+1);
                                    if_flag=0;
                                }
                                else if(strcmp((yyvsp[0].s_val),"INT_LIT")==0){
                                    printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                                    if_flag=0;
                                }
                                else if(strcmp((yyvsp[0].s_val),x1)==0){
                                    char * buff=strdup((yyvsp[0].s_val));
                                    const char* delim = " ";
                                    char *sepstr = buff;
                                    char * first=strsep(&sepstr, delim);
                                    //printf("%s\n",first);
                                    printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                                    if_flag=0;
                                }
                                else{
                                    if_flag=0;
                                }
                            }
                        }
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 543 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("%s\n",(yyvsp[-1].s_val));(yyval.s_val)=(yyvsp[-1].s_val);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 551 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="EQL";if(p_flag==-1){p_flag=1;}}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 552 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="NEQ";if(p_flag==-1){p_flag=1;}}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 553 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="LSS";if(p_flag==-1){p_flag=1;}}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 554 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="LEQ";if(p_flag==-1){p_flag=1;}}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 555 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="GTR";if(p_flag==-1){p_flag=1;}}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 556 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="GEQ";if(p_flag==-1){p_flag=1;}}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 560 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="LOR";}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 561 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="LAND";}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 564 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="ADD";}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 565 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="SUB";}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 570 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="MUL";}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 571 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="QUO";}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 572 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="REM";}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 577 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="POS";}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 578 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="NEG";}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 579 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val)="NOT";}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 590 "compiler_hw2.y" /* yacc.c:1646  */
    {
                char ident[100];
                char nameforlook[30]={};
                strcpy(nameforlook,(yyvsp[0].s_val));
                int idaddress=lookup_symbol(nameforlook,scopecount);

                //print_symbol(0);
                //printf("%d\n",idaddress);
                if(idaddress!=-1){
                    printf("IDENT (name=%s, address=%d)\n",(yyvsp[0].s_val),idaddress);
                    //sprintf(ident,"IDENT (name=%s, address=%d)",$1,idaddress);
                    
                }
                else{
                    printf("error\:%d\: undefined\: %s\n",yylineno+1,nameforlook);
                }
                (yyval.s_val)=(yyvsp[0].s_val);
            }
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 608 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                    //printf("%s\n",$2);
                                    (yyval.s_val)=(yyvsp[-1].s_val);
                                }
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 615 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("INT_LIT %d\n",(yyvsp[0].i_val));(yyval.s_val)="INT_LIT";}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 616 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("FLOAT_LIT %6f\n",(yyvsp[0].f_val));(yyval.s_val)="FLOAT_LIT";}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 617 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("TRUE\n"); (yyval.s_val)="TRUE";}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 618 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("FALSE\n");(yyval.s_val)="FALSE";}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 619 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("STRING_LIT %s\n",(yyvsp[0].s_val));(yyval.s_val)="STRING_LIT";}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 628 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                            char *conv=NULL;
                                            if(strcmp((yyvsp[-3].s_val),"INT")==0){
                                                conv="I";
                                            }
                                            else if(strcmp((yyvsp[-3].s_val),"FLOAT")==0){
                                                conv="F";
                                            } 
                                            char * convo=NULL;
                                            if(strcmp((yyvsp[-1].s_val),"INT_LIT")==0){
                                                convo="I";
                                            }
                                            else if(strcmp((yyvsp[-1].s_val),"FLOAT_LIT")==0){
                                                convo="F";
                                            } 
                                            else{
                                                char * buff=strdup((yyvsp[-1].s_val));
                                                char * idid;
                                                const char* idcut = ")";
                                                char *sepstr = buff;
                                                idid=strsep(&sepstr, idcut);
                                                int k=lookup_symbol(idid,scopecount);
                                                char* ptype=NULL;
                                                ptype=symbolTable[k].type;
                                                if(strcmp(ptype,"int32")==0){
                                                    convo="I";
                                                }
                                                else if(strcmp(ptype,"float32")==0){
                                                    convo="F";
                                                } 
                                            }
                                            
                                            printf("%s to %s\n",convo,conv);
                                        }
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 665 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("%s\n","INC");}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 666 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("%s\n","DEC");}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 673 "compiler_hw2.y" /* yacc.c:1646  */
    {scopecount++;}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 676 "compiler_hw2.y" /* yacc.c:1646  */
    {dump_symbol(scopecount);scopecount--;}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 686 "compiler_hw2.y" /* yacc.c:1646  */
    {if_flag=1;}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 697 "compiler_hw2.y" /* yacc.c:1646  */
    {f_flag=1;}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 712 "compiler_hw2.y" /* yacc.c:1646  */
    {p_flag=-1;}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 712 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                            
                                            char * buff=strdup((yyvsp[-1].s_val));
                                            char * idid;
                                            char *c=strstr(buff, "[");
                                            if(c == NULL) {
                                                const char* idcut1 = ")";
                                                char *sepstr = buff;
                                                idid=strsep(&sepstr, idcut1);
                                            }
                                            else{
                                                const char* idcut2 = "[";
                                                char *sepstr = buff;
                                                idid=strsep(&sepstr, idcut2);
                                            }
                                            //printf("oaoa : %s\n",idid);
                                            int k=lookup_symbol(idid,scopecount);
                                            char* ptype=NULL;
                                            if(p_flag==1){
                                                ptype="bool";

                                            }
                                            if(symbolTable[k].type=="array"){
                                                ptype=symbolTable[k].etype;
                                            }
                                            else if(k!=-1){
                                                ptype=symbolTable[k].type;
                                            }
                                            else{
                                                ptype="string";
                                            }
                                            printf("PRINT %s\n",ptype);
                                            p_flag=0;
                                        }
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 746 "compiler_hw2.y" /* yacc.c:1646  */
    {p_flag=-1;}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 746 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                            //printf("oaoa :%s\n",$3);
                                            char * buff=strdup((yyvsp[-1].s_val));
                                            char * idid;
                                            char *c=strstr(buff, "[");
                                            if(c == NULL) {
                                                const char* idcut1 = ")";
                                                char *sepstr = buff;
                                                idid=strsep(&sepstr, idcut1);
                                            }
                                            else{
                                                const char* idcut2 = "[";
                                                char *sepstr = buff;
                                                idid=strsep(&sepstr, idcut2);
                                            }
                                            //printf("oaoa0 :%s\n",idid);
                                            //print_symbol(0);
                                            int k=lookup_symbol(idid,scopecount);
                                            //printf("oaoa12 :%d %d\n",scopecount,k);
                                            char* ptype=NULL;
                                            /*
                                            if(pl==2){
                                                ptype= "bool";
                                                pl=0;
                                            }
                                            */
                                            if(p_flag==1){
                                                ptype="bool";

                                            }
                                            else if(symbolTable[k].type=="array"){
                                                ptype=symbolTable[k].etype;
                                            }
                                            else if(k!=-1){
                                                ptype=symbolTable[k].type;
                                            }
                                            else if(strcmp(idid,"FLOAT_LIT")==0){
                                                 ptype= "float32";
                                            }
                                            else if(strcmp(idid,"INT_LIT")==0){
                                                 ptype= "int32";
                                            }
                                            
                                            else{
                                                ptype="string";
                                            }
                                            printf("PRINTLN %s\n",ptype);
                                            p_flag=0;
                                        }
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2323 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
  return yyresult;
}
#line 797 "compiler_hw2.y" /* yacc.c:1906  */


/* C code section */
int main(int argc, char *argv[])
{
    create_symbol() ;
    if (argc == 2) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }

    yylineno = 0;
    yyparse();
    //print_symbol();
    dump_symbol(0);
	printf("Total lines: %d\n", yylineno);
    fclose(yyin);
    return 0;
}

static void create_symbol() {
    for(int i=0;i<=9;i++){
        symbolTable[i].index=i;
        symbolTable[i].name="";
        symbolTable[i].type="";
        symbolTable[i].address=0;
        symbolTable[i].lineno=0;
        symbolTable[i].etype="";
        symbolTable[i].scopenum=-1;
    }
}

static void insert_symbol(int index,char* name,char* type,int address,int lineno,char* etype,int scopenum) {
    symbolTable[index].index=index;
    symbolTable[index].name=name;
    symbolTable[index].type=type;
    symbolTable[index].address=address;
    symbolTable[index].lineno=lineno;
    symbolTable[index].etype=etype;
    symbolTable[index].scopenum=scopenum;
    printf("> Insert {%s} into symbol table (scope level: %d)\n", name, scopenum);
}

static int lookup_symbol(char *name,int scopenum) {
    for(int i=0;i<indexcount;i++){
        if(strcmp(symbolTable[i].name,name)==0&&symbolTable[i].scopenum==scopenum){
            return symbolTable[i].index;
        }
    }
    while(scopenum!=0){
        scopenum--;
        for(int i=0;i<indexcount;i++){
        if(strcmp(symbolTable[i].name,name)==0&&symbolTable[i].scopenum==scopenum){
            return symbolTable[i].index;
        }
    }
    }
    return -1;
}

static void dump_symbol(int scope) {
    printf("> Dump symbol table (scope level: %d)\n", scope);
    printf("%-10s%-10s%-10s%-10s%-10s%s\n",
           "Index", "Name", "Type", "Address", "Lineno", "Element type");
    int k=0;
    for(int i=0;i<indexcount;i++){
        if(symbolTable[i].scopenum==scope){
            printf("%-10d%-10s%-10s%-10d%-10d%s\n",
                k, symbolTable[i].name, symbolTable[i].type, 
                symbolTable[i].address,symbolTable[i].lineno, symbolTable[i].etype);
            k++;
            symbolTable[i].scopenum=-1;
        }
        
    }
    
}

static void print_symbol() {
    printf("> Print\n");
    printf("%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n",
           "Index", "Name", "Type", "Address", "Lineno", "Element type","scope");
    for(int i=0;i<indexcount;i++){
            printf("%-10d%-10s%-10s%-10d%-10d%-10s%-10d\n",
                symbolTable[i].index, symbolTable[i].name, symbolTable[i].type, 
                symbolTable[i].address,symbolTable[i].lineno, symbolTable[i].etype,
                symbolTable[i].scopenum);
    }
    
}

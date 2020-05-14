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
    static int p_flag=0;
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

#line 103 "y.tab.c" /* yacc.c:339  */

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
    INC = 258,
    DEC = 259,
    ASSIGN = 260,
    ADD_ASSIGN = 261,
    SUB_ASSIGN = 262,
    MUL_ASSIGN = 263,
    QUO_ASSIGN = 264,
    REM_ASSIGN = 265,
    NOT = 266,
    LPAREN = 267,
    RPAREN = 268,
    LBRACK = 269,
    RBRACK = 270,
    LBRACE = 271,
    RBRACE = 272,
    COMMA = 273,
    SEMICOLON = 274,
    NEWLINE = 275,
    PRINT = 276,
    PRINTLN = 277,
    IF = 278,
    ELSE = 279,
    FOR = 280,
    VAR = 281,
    INT = 282,
    FLOAT = 283,
    BOOL = 284,
    STRING = 285,
    INT_LIT = 286,
    FLOAT_LIT = 287,
    STRING_LIT = 288,
    ID = 289,
    TRUE = 290,
    FALSE = 291,
    ADD = 292,
    SUB = 293,
    MUL = 294,
    QUO = 295,
    REM = 296,
    GTR = 297,
    LSS = 298,
    GEQ = 299,
    LEQ = 300,
    EQL = 301,
    NEQ = 302,
    LAND = 303,
    LOR = 304
  };
#endif
/* Tokens.  */
#define INC 258
#define DEC 259
#define ASSIGN 260
#define ADD_ASSIGN 261
#define SUB_ASSIGN 262
#define MUL_ASSIGN 263
#define QUO_ASSIGN 264
#define REM_ASSIGN 265
#define NOT 266
#define LPAREN 267
#define RPAREN 268
#define LBRACK 269
#define RBRACK 270
#define LBRACE 271
#define RBRACE 272
#define COMMA 273
#define SEMICOLON 274
#define NEWLINE 275
#define PRINT 276
#define PRINTLN 277
#define IF 278
#define ELSE 279
#define FOR 280
#define VAR 281
#define INT 282
#define FLOAT 283
#define BOOL 284
#define STRING 285
#define INT_LIT 286
#define FLOAT_LIT 287
#define STRING_LIT 288
#define ID 289
#define TRUE 290
#define FALSE 291
#define ADD 292
#define SUB 293
#define MUL 294
#define QUO 295
#define REM 296
#define GTR 297
#define LSS 298
#define GEQ 299
#define LEQ 300
#define EQL 301
#define NEQ 302
#define LAND 303
#define LOR 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "compiler_hw2.y" /* yacc.c:355  */

    int i_val;
    float f_val;
    char *s_val;
    bool b_val;

#line 248 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 265 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   177

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

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
       0,    79,    79,    83,    84,    88,    89,    90,    91,    92,
      93,    94,    98,   155,   212,   213,   214,   217,   284,   285,
     286,   287,   288,   289,   293,   297,   298,   302,   303,   304,
     305,   309,   313,   322,   325,   332,   335,   342,   348,   354,
     360,   366,   372,   375,   444,   511,   514,   516,   518,   583,
     586,   589,   592,   595,   598,   599,   600,   603,   604,   617,
     623,   624,   625,   626,   627,   632,   636,   673,   674,   678,
     681,   684,   688,   689,   690,   694,   697,   748,   749,   754,
     757,   761,   765,   769,   769,   802,   802
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INC", "DEC", "ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "QUO_ASSIGN", "REM_ASSIGN", "NOT", "LPAREN",
  "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "COMMA", "SEMICOLON",
  "NEWLINE", "PRINT", "PRINTLN", "IF", "ELSE", "FOR", "VAR", "INT",
  "FLOAT", "BOOL", "STRING", "INT_LIT", "FLOAT_LIT", "STRING_LIT", "ID",
  "TRUE", "FALSE", "ADD", "SUB", "MUL", "QUO", "REM", "GTR", "LSS", "GEQ",
  "LEQ", "EQL", "NEQ", "LAND", "LOR", "$accept", "Program",
  "StatementList", "Statement", "DeclarationStmt", "SimpleStmt",
  "AssignmentStmt", "assign_op", "ExpressionStmt", "Type", "TypeName",
  "ArrayType", "Expression", "Expression1", "Expression2", "Expression3",
  "Expression4", "UnaryExpr", "PrimaryExpr", "Operand", "Literal",
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

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -77

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     111,   139,   139,   139,   -77,   -77,   -77,   -77,   -77,   -77,
       8,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   139,   139,    45,   111,   -77,    27,    31,   -77,   -77,
      43,   -77,   -77,    22,    11,    32,     6,    -1,   -77,    46,
     -77,   -77,   -77,   -77,   -77,    41,   111,    47,   139,    48,
     139,    61,   -77,     4,     0,    70,    71,    36,   -77,   -77,
     -77,   -77,   -77,   -77,   139,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   -77,    82,
     -77,    35,    73,   -77,   -77,     3,    73,    73,    72,   -77,
     -77,    36,   139,   139,    85,     5,    11,    35,    32,     6,
       6,     6,     6,     6,     6,    -1,    -1,   -77,   -77,   -77,
       7,   -77,   -77,    97,   -77,   -77,   139,   -77,    20,    24,
     139,   -77,   -77,    18,    76,   -77,   -77,    35,   -77,   -77,
     139,   -77,   -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    70,    11,    83,    85,    75,    79,
       0,    27,    28,    30,    29,    60,    61,    64,    58,    62,
      63,     0,     0,     0,     2,     4,     0,     0,    14,    15,
       0,    25,    26,    24,    33,    35,    42,    45,    49,    53,
      54,    57,    55,    56,    16,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,    50,    51,
       1,     3,     5,     6,     0,    67,    68,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       8,    76,     0,     9,    81,    24,     0,     0,     0,    10,
      59,     0,     0,     0,    12,     0,    32,    17,    34,    40,
      38,    41,    39,    36,    37,    43,    44,    46,    47,    48,
       0,    71,    69,    72,    78,    77,     0,    31,     0,     0,
       0,    66,    65,     0,     0,    84,    86,    13,    74,    73,
       0,    82,    80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,   -77,    51,   -19,   -77,   -48,   -77,   -77,   -77,   -43,
     -77,   -77,    -2,    33,    54,    78,   -47,     2,   -77,   -77,
     -77,   -77,   -77,   -77,   -76,   -77,   -77,    -7,   -77,   -46,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    26,    27,    28,    74,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,   122,    47,    48,    92,
      49,    50,    97,    98,   142,    51,    55,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    54,    94,    52,    96,    61,    65,    66,    67,    68,
      69,    70,    71,    72,   104,   101,   123,   100,   131,   -76,
     124,   125,   132,    58,    59,    65,    66,    67,    68,    69,
      70,    71,    72,   135,     4,   115,   116,   136,    84,    85,
      86,     8,    57,    82,    83,    60,    91,    62,    95,    73,
       3,    63,    73,    73,    73,    64,    73,   138,   127,    75,
      87,    88,   105,    11,    12,    13,    14,    90,    93,    73,
      61,    73,   107,    73,    76,    77,    78,    79,    80,    81,
     134,    99,   102,   103,    73,   120,   117,   118,   119,     4,
     130,   126,   141,     1,     2,   140,     3,    89,     4,   121,
     128,   129,     5,     6,     7,     8,   106,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   133,     1,     2,    91,     3,   139,     4,   137,   108,
       0,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       1,     2,     0,     3,   109,   110,   111,   112,   113,   114,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       2,     3,    50,     1,    50,    24,     3,     4,     5,     6,
       7,     8,     9,    10,    57,    15,    92,    13,    13,    16,
      96,    97,    15,    21,    22,     3,     4,     5,     6,     7,
       8,     9,    10,    13,    16,    82,    83,    13,    39,    40,
      41,    23,    34,    37,    38,     0,    48,    20,    50,    49,
      14,    20,    49,    49,    49,    12,    49,   133,   101,    48,
      14,    20,    64,    27,    28,    29,    30,    20,    20,    49,
      89,    49,    74,    49,    42,    43,    44,    45,    46,    47,
     126,    20,    12,    12,    49,    87,    84,    85,    86,    16,
       5,    19,   140,    11,    12,    19,    14,    46,    16,    17,
     102,   103,    20,    21,    22,    23,    73,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    24,    11,    12,   126,    14,   133,    16,   130,    75,
      -1,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      11,    12,    -1,    14,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    14,    16,    20,    21,    22,    23,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    51,    52,    53,    54,    55,    56,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    77,    78,    80,
      81,    85,    67,    62,    62,    86,    87,    34,    67,    67,
       0,    53,    20,    20,    12,     3,     4,     5,     6,     7,
       8,     9,    10,    49,    57,    48,    42,    43,    44,    45,
      46,    47,    37,    38,    39,    40,    41,    14,    20,    52,
      20,    62,    79,    20,    55,    62,    79,    82,    83,    20,
      13,    15,    12,    12,    59,    62,    63,    62,    64,    65,
      65,    65,    65,    65,    65,    66,    66,    67,    67,    67,
      62,    17,    76,    74,    74,    74,    19,    59,    62,    62,
       5,    13,    15,    24,    79,    13,    13,    62,    74,    77,
      19,    55,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    56,    57,    57,
      57,    57,    57,    57,    58,    59,    59,    60,    60,    60,
      60,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    70,    71,    72,    73,    73,    74,
      75,    76,    77,    77,    77,    78,    79,    80,    80,    81,
      82,    83,    84,    86,    85,    87,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     3,     5,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     4,     4,     2,     2,     3,
       1,     1,     3,     5,     5,     1,     1,     3,     3,     1,
       5,     1,     1,     0,     5,     0,     5
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
#line 98 "compiler_hw2.y" /* yacc.c:1646  */
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
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 155 "compiler_hw2.y" /* yacc.c:1646  */
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
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 217 "compiler_hw2.y" /* yacc.c:1646  */
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
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 284 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "ASSIGN";}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 285 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "ADD_ASSIGN";}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 286 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "SUB_ASSIGN";}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 287 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "MUL_ASSIGN";}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 288 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "QUO_ASSIGN";}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 289 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "REM_ASSIGN";}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 302 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "INT";}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 303 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "FLOAT";}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 304 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "STRING";}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 305 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.s_val) = "BOOL";}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 313 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                        //printf("first %s\n",$1);
                                        //printf("third %s\n",$3);
                                        if(strcmp((yyvsp[-2].s_val),"INT_LIT")==0||strcmp((yyvsp[0].s_val),"INT_LIT")==0){
                                            printf("error\:%d\: invalid operation\: (operator LOR not defined on int32)\n",yylineno);
                                        }
                                        //$$="LOR";
                                        printf("%s\n","LOR");
                                    }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 325 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                        if(strcmp((yyvsp[-2].s_val),"INT_LIT")==0||strcmp((yyvsp[0].s_val),"INT_LIT")==0){
                                            printf("error\:%d\: invalid operation\: (operator LAND not defined on int32)\n",yylineno);
                                        }
                                        //$$="LAND";
                                        printf("%s\n","LAND");
                                    }
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 335 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                        //$$="EQL";
                                        printf("%s\n","EQL");
                                        if(p_flag==-1){p_flag=1;}
                                        if(f_flag==-1){f_flag=1;}
                                        if(if_flag==-1){if_flag=1;}
                                    }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 342 "compiler_hw2.y" /* yacc.c:1646  */
    {   //$$="NEQ";
                                        printf("%s\n","NEQ");
                                        if(p_flag==-1){p_flag=1;}
                                        if(f_flag==-1){f_flag=1;}
                                        if(if_flag==-1){if_flag=1;}
                                    }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 348 "compiler_hw2.y" /* yacc.c:1646  */
    {   //$$="LSS";
                                        printf("%s\n","LSS");
                                        if(p_flag==-1){p_flag=1;}
                                        if(f_flag==-1){f_flag=1;}
                                        if(if_flag==-1){if_flag=1;}
                                    }
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 354 "compiler_hw2.y" /* yacc.c:1646  */
    {   //$$="LEQ";
                                        printf("%s\n","LEQ");
                                        if(p_flag==-1){p_flag=1;}
                                        if(f_flag==-1){f_flag=1;}
                                        if(if_flag==-1){if_flag=1;}
                                    }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 360 "compiler_hw2.y" /* yacc.c:1646  */
    {   //$$="GTR";
                                        printf("%s\n","GTR");
                                        if(p_flag==-1){p_flag=1;}
                                        if(f_flag==-1){f_flag=1;}
                                        if(if_flag==-1){if_flag=1;}
                                    }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 366 "compiler_hw2.y" /* yacc.c:1646  */
    {   //$$="GEQ";
                                        printf("%s\n","GEQ");
                                        if(p_flag==-1){p_flag=1;}
                                        if(f_flag==-1){f_flag=1;}
                                        if(if_flag==-1){if_flag=1;}
                                    }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 375 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                        //$$="ADD";
                                        char* id1=NULL;
                                        char* id2=NULL;
                                        char* type1=NULL;
                                        char* type2=NULL;
                                        char *c=strstr((yyvsp[-2].s_val)," ");
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
                                        //printf("%s %s\n",id1,id2);
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
                                        //printf("%s %s\n",type1,type2);
                                        if(strcmp(type1,type2)!=0){
                                            if(strcmp(type1," ")!=0 && strcmp(type2," ")!=0){
                                                printf("error\:%d\: invalid operation\: %s (mismatched types %s and %s)\n",yylineno,"ADD",type1,type2);
                                            }
                                        }
                                        printf("%s\n","ADD");
                                       

                                    }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 444 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                        (yyval.s_val)="SUB";
                                        char* id1=NULL;
                                        char* id2=NULL;
                                        char* type1=NULL;
                                        char* type2=NULL;
                                        char *c=strstr((yyvsp[-2].s_val)," ");
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
                                        //printf("%s %s\n",id1,id2);
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
                                        //printf("%s %s\n",type1,type2);
                                        if(strcmp(type1,type2)!=0){
                                            if(strcmp(type1," ")!=0 && strcmp(type2," ")!=0){
                                                printf("error\:%d\: invalid operation\: %s (mismatched types %s and %s)\n",yylineno,"SUB",type1,type2);
                                            }
                                        }
                                        printf("%s\n","SUB");
                                    }
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 514 "compiler_hw2.y" /* yacc.c:1646  */
    {//$$="MUL";
                                    printf("%s\n","MUL");}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 516 "compiler_hw2.y" /* yacc.c:1646  */
    {//$$="QUO";
                                    printf("%s\n","QUO");}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 518 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                    //$$="REM";
                                    char* id1=NULL;
                                    char* id2=NULL;
                                    char* type1=NULL;
                                    char* type2=NULL;
                                    char *c=strstr((yyvsp[-2].s_val)," ");
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
                                    //printf("%s %s\n",id1,id2);
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
                                    //printf("%s %s\n",type1,type2);
                                    if(strcmp(type1,"float32")==0||strcmp(type2,"float32")==0){
                                        printf("error\:%d\: invalid operation\: (operator REM not defined on float32)\n",yylineno);
                                    }
                                    printf("%s\n","REM");
                                  }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 586 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("%s\n","POS");
                        (yyval.s_val)="POS";
                        }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 589 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("%s\n","NEG");
                        (yyval.s_val)="SUB";
                        }
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 592 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("%s\n","NOT");
                        (yyval.s_val)="NOT";
                        }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 604 "compiler_hw2.y" /* yacc.c:1646  */
    {
                char ident[100];
                char nameforlook[30]={};
                strcpy(nameforlook,(yyvsp[0].s_val));
                int idaddress=lookup_symbol(nameforlook,scopecount);
                if(idaddress!=-1){
                    printf("IDENT (name=%s, address=%d)\n",(yyvsp[0].s_val),idaddress);
                }
                else{
                    printf("error\:%d\: undefined\: %s\n",yylineno+1,nameforlook);
                }
                (yyval.s_val)=(yyvsp[0].s_val);
            }
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 617 "compiler_hw2.y" /* yacc.c:1646  */
    {
                                    (yyval.s_val)=(yyvsp[-1].s_val);
                                }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 623 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("INT_LIT %d\n",(yyvsp[0].i_val));(yyval.s_val)="INT_LIT";}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 624 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("FLOAT_LIT %6f\n",(yyvsp[0].f_val));(yyval.s_val)="FLOAT_LIT";}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 625 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("TRUE\n"); (yyval.s_val)="TRUE";}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 626 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("FALSE\n");(yyval.s_val)="FALSE";}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 627 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("STRING_LIT %s\n",(yyvsp[0].s_val));(yyval.s_val)="STRING_LIT";}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 636 "compiler_hw2.y" /* yacc.c:1646  */
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
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 673 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("%s\n","INC");}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 674 "compiler_hw2.y" /* yacc.c:1646  */
    {printf("%s\n","DEC");}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 681 "compiler_hw2.y" /* yacc.c:1646  */
    {scopecount++;}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 684 "compiler_hw2.y" /* yacc.c:1646  */
    {dump_symbol(scopecount);scopecount--;}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 688 "compiler_hw2.y" /* yacc.c:1646  */
    {if_flag=0;}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 689 "compiler_hw2.y" /* yacc.c:1646  */
    {if_flag=0;}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 690 "compiler_hw2.y" /* yacc.c:1646  */
    {if_flag=0;}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 694 "compiler_hw2.y" /* yacc.c:1646  */
    {if_flag=-1;}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 697 "compiler_hw2.y" /* yacc.c:1646  */
    {
                        if(if_flag==-1){
                            if(strcmp((yyvsp[0].s_val),"INT_LIT")==0){
                                printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                            }
                            else if(strcmp((yyvsp[0].s_val),"FLOAT_LIT")==0){
                                printf("error\:%d\: non-bool (type float32) used as for condition\n",yylineno+1);
                            }
                            else{
                                char * buff=strdup((yyvsp[0].s_val));
                                const char* delim = " ";
                                char *sepstr = buff;
                                char * name=strsep(&sepstr, delim);
                                char * type=NULL;
                                int i=lookup_symbol(name,scopecount);
                                type=symbolTable[i].type;
                                if(strcmp(type,"int32")==0){
                                    printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                                }
                                else if(strcmp(type,"float32")==0){
                                    printf("error\:%d\: non-bool (type float32) used as for condition\n",yylineno+1);
                                }
                            }
                        }
                        if(f_flag==-1){
                            if(strcmp((yyvsp[0].s_val),"INT_LIT")==0){
                                printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                            }
                            else if(strcmp((yyvsp[0].s_val),"FLOAT_LIT")==0){
                                printf("error\:%d\: non-bool (type float32) used as for condition\n",yylineno+1);
                            }
                            else{
                                char * buff=strdup((yyvsp[0].s_val));
                                const char* delim = " ";
                                char *sepstr = buff;
                                char * name=strsep(&sepstr, delim);
                                char * type=NULL;
                                int i=lookup_symbol(name,scopecount);
                                type=symbolTable[i].type;
                                if(strcmp(type,"int32")==0){
                                    printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                                }
                                else if(strcmp(type,"float32")==0){
                                    printf("error\:%d\: non-bool (type float32) used as for condition\n",yylineno+1);
                                }
                            }
                        }
                    }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 749 "compiler_hw2.y" /* yacc.c:1646  */
    {  
                        f_flag=0;
                    }
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 754 "compiler_hw2.y" /* yacc.c:1646  */
    {f_flag=-1;}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 769 "compiler_hw2.y" /* yacc.c:1646  */
    {p_flag=-1;}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 769 "compiler_hw2.y" /* yacc.c:1646  */
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
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 802 "compiler_hw2.y" /* yacc.c:1646  */
    {p_flag=-1;}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 802 "compiler_hw2.y" /* yacc.c:1646  */
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
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2367 "y.tab.c" /* yacc.c:1646  */
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
#line 853 "compiler_hw2.y" /* yacc.c:1906  */


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

/*	Definition section */
%{
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
    static int lookup_symbol(char *name);
    static void dump_symbol();
%}

%error-verbose

/* Use variable or self-defined structure to represent
 * nonterminal and token type
 */
%union {
    int i_val;
    float f_val;
    char *s_val;
    bool b_bal;
    /* ... */
}

/* Token without return */
%token ADD SUB MUL QUO REM INC DEC
%token GTR LSS GEQ LEQ EQL NEQ
%token ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN QUO_ASSIGN REM_ASSIGN
%token LAND LOR NOT
%token LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE
%token COMMA SEMICOLON NEWLINE
%token PRINT PRINTLN
%token IF ELSE FOR
%token VAR 
%token TRUE FALSE
%token INT FLOAT BOOL STRING
/* Token with return, which need to sepcify type */
%token <i_val> INT_LIT
%token <f_val> FLOAT_LIT
%token <s_val> STRING_LIT 
%token <b_bal> BOOL_LIT

%token <s_val> ID
/* Nonterminal with return, which need to sepcify type */
%type  <s_val> Type TypeName ArrayType
%type  <s_val> add_op mul_op binary_op Expression UnaryExpr Operand
/* Yacc will start at this nonterminal */
%start Program

/* Grammar section */
%%

Program
    : StatementList
;

StatementList
    : StatementList Statement
    | Statement
;

Statement
    :DeclarationStmt NEWLINE
    | SimpleStmt NEWLINE
    | Block NEWLINE
    | IfStmt NEWLINE
    | ForStmt NEWLINE
    | PrintStmt NEWLINE
    | NEWLINE
;

DeclarationStmt
    : VAR ID Type   {   
                        char * buff=strdup($2);
                        const char* delim = " ";
                        char *sepstr = buff;
                        char* name=strsep(&sepstr, delim);
                        char * dtype;
                        if(strcmp($3,"INT")==0){
                            dtype="int32";
                        }
                        else if(strcmp($3,"FLOAT")==0){
                            dtype="float32";
                        }
                        insert_symbol(indexcount,name,$3,addresscount,yylineno,"-",scopecount);
                        indexcount++;
                        addresscount++;
                        //dump_symbol();
                    }
    | VAR ID Type ASSIGN Expression 
;

SimpleStmt 
    : AssignmentStmt
    | ExpressionStmt
    | IncDecStmt
;
AssignmentStmt
    : Expression assign_op Expression
;
assign_op
    : ASSIGN
    | ADD_ASSIGN
    | SUB_ASSIGN
    | MUL_ASSIGN
    | QUO_ASSIGN
    | REM_ASSIGN
;

ExpressionStmt
    : Expression
;

Type
    : TypeName 
    | ArrayType
;

TypeName
    : INT {$$ = "INT";}
    | FLOAT {$$ = "FLOAT";}
    | STRING {$$ = "STRING";}
    | BOOL {$$ = "BOOL";}
;

ArrayType
    : LBRACK Expression RBRACK Type
;

Expression
    : UnaryExpr {printf("%s\n",$1);}
    | Expression binary_op Expression   {
                                            printf("%s\n",$2);
                                        }
;

UnaryExpr
    : PrimaryExpr
    | unary_op UnaryExpr
;

binary_op
    : LOR
    | LAND
    | cmp_op
    | add_op    
    | mul_op
;

cmp_op
    : EQL
    | NEQ 
    | LSS
    | LEQ
    | GTR
    | GEQ
;

add_op
    : ADD   {$$="ADD";}
    | SUB   {$$="SUB";}
;

mul_op
    : MUL   {$$="MUL";}
    | QUO   {$$="QUO";}
    | REM   {$$="REM";}
;

unary_op
    : ADD
    | SUB
    | NOT
;

PrimaryExpr
    : Operand
    | IndexExpr
    | ConversionExpr
;

Operand
    : Literal
    | ID    {
                char ident[100];
                char nameforlook[30]={};
                strcpy(nameforlook,$1);
                int idaddress=lookup_symbol(nameforlook);
                //if(idaddress!=-1){
                    sprintf(ident,"IDENT (name=%s, address=%d)",$1,idaddress);
                    $$=ident;
                //}
                //else{
                    //printf("undeclared");
                //}
            }
    | LPAREN Expression RPAREN
;

Literal
    : INT_LIT
    | FLOAT_LIT
    | BOOL_LIT
    | STRING_LIT
;

IndexExpr
    : PrimaryExpr LBRACK Expression RBRACK
;

ConversionExpr
    : Type LPAREN Expression RPAREN
;

IncDecStmt
    : Expression INC    {printf("%s\n","INC");}
    | Expression DEC    {printf("%s\n","DEC");}
;

Block
    : LBRACE StatementList RBRACE
;

IfStmt
    : IF Condition Block
    | IF Condition Block ELSE IfStmt
    | IF Condition Block ELSE Block
;

Condition
    : Expression
;

ForStmt
    : FOR Condition Block
    | FOR ForClause Block
;

ForClause
    : InitStmt SEMICOLON Condition SEMICOLON PostStmt
;

InitStmt
    : SimpleStmt
;

PostStmt
    : SimpleStmt
;

PrintStmt
    : PRINT LPAREN Expression RPAREN
    | PRINTLN LPAREN Expression RPAREN
;

%%

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
    dump_symbol();
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
    }
}

static void insert_symbol(int index,char* name,char* type,int address,int lineno,char* etype,int scopenum) {
    symbolTable[index].index=index;
    symbolTable[index].name=name;
    symbolTable[index].type=type;
    symbolTable[index].address=address;
    symbolTable[index].lineno=lineno;
    symbolTable[index].etype=etype;
    printf("> Insert {%s} into symbol table (scope level: %d)\n", name, scopenum);
}

static int lookup_symbol(char *name) {
    for(int i=0;i<indexcount;i++){
        if(strcmp(symbolTable[i].name,name)==0){
            return symbolTable[i].index;
        }
    }
    return -1;
}

static void dump_symbol() {
    printf("> Dump symbol table (scope level: %d)\n", 0);
    printf("%-10s%-10s%-10s%-10s%-10s%s\n",
           "Index", "Name", "Type", "Address", "Lineno", "Element type");
    for(int i=0;i<indexcount;i++){
        printf("%-10d%-10s%-10s%-10d%-10d%s\n",
            symbolTable[i].index, symbolTable[i].name, symbolTable[i].type, 
            symbolTable[i].address,symbolTable[i].lineno, symbolTable[i].etype);
    }
    
}

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
    static void dump_symbol(int scope);
    static void print_symbol();
%}

%error-verbose

/* Use variable or self-defined structure to represent
 * nonterminal and token type
 */
%union {
    int i_val;
    float f_val;
    char *s_val;
    bool b_val;
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
%token INT FLOAT BOOL STRING
/* Token with return, which need to sepcify type */
%token <i_val> INT_LIT
%token <f_val> FLOAT_LIT
%token <s_val> STRING_LIT
%token <s_val> ID
%token <s_val> TRUE FALSE
/* Nonterminal with return, which need to sepcify type */
%type  <s_val> Type TypeName ArrayType Literal
%type  <s_val> add_op mul_op binary_op unary_op cmp_op assign_op Expression UnaryExpr Operand
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
                        char * name=strsep(&sepstr, delim);
                        char * dtype;
                        char * etype;
                        if(strcmp($3,"INT")==0){
                            dtype="int32";
                            etype="-";
                        }
                        else if(strcmp($3,"FLOAT")==0){
                            dtype="float32";
                            etype="-";
                        }
                        else if(strcmp($3,"STRING")==0){
                            dtype="string";
                            etype="-";
                        }
                        else if(strcmp($3,"BOOL")==0){
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
    | VAR ID Type ASSIGN Expression     {
                                            char * buff=strdup($2);
                                            const char* delim = " ";
                                            char *sepstr = buff;
                                            char * name=strsep(&sepstr, delim);
                                            char * dtype;
                                            char * etype;
                                            if(strcmp($3,"INT")==0){
                                                dtype="int32";
                                                etype="-";
                                            }
                                            else if(strcmp($3,"FLOAT")==0){
                                                dtype="float32";
                                                etype="-";
                                            }
                                            else if(strcmp($3,"STRING")==0){
                                                dtype="string";
                                                etype="-";
                                            }
                                            else if(strcmp($3,"BOOL")==0){
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
;

SimpleStmt 
    : AssignmentStmt
    | ExpressionStmt
    | IncDecStmt
;
AssignmentStmt
    : Expression assign_op Expression    {printf("%s\n",$2);}
;
assign_op
    : ASSIGN  {$$ = "ASSIGN";}  
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
    : UnaryExpr     
    | Expression binary_op Expression   {printf("%s\n",$2);}
;

UnaryExpr
    : PrimaryExpr   
    | unary_op UnaryExpr {printf("%s\n",$1);}
;

binary_op
    : LOR   {$$="LOR";}
    | LAND  {$$="LAND";}
    | cmp_op
    | add_op    
    | mul_op
;

cmp_op
    : EQL   {$$="EQL";}
    | NEQ   {$$="NEQ";}
    | LSS   {$$="LSS";}
    | LEQ   {$$="LEQ";}
    | GTR   {$$="GTR";}
    | GEQ   {$$="GEQ";}
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
    : ADD   {$$="POS";}
    | SUB   {$$="NEG";}
    | NOT   {$$="NOT";}
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
                //printf("%d\n",idaddress);
                if(idaddress!=-1){
                    printf("IDENT (name=%s, address=%d)\n",$1,idaddress);
                    //sprintf(ident,"IDENT (name=%s, address=%d)",$1,idaddress);
                    //$$=ident;
                }
                //else{
                    //printf("undeclared");
                //}
            }
    | LPAREN Expression RPAREN 
;

Literal
    : INT_LIT   {printf("INT_LIT %d\n",$1);}
    | FLOAT_LIT     {printf("FLOAT_LIT %6f\n",$1);}
    | TRUE      {printf("TRUE\n");}
    | FALSE     {printf("FALSE\n");}
    | STRING_LIT   {printf("STRING_LIT %s\n",$1);}
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
    : LBRACE1 StatementList RBRACE1  
;
LBRACE1
    :LBRACE{scopecount++;}
;
RBRACE1
    :RBRACE{dump_symbol(scopecount);scopecount--;}
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
    | PRINTLN LPAREN Expression RPAREN  {
                                            //printf("oaoa : %s\n",$3);
                                            char * buff=strdup($3);
                                            const char* idcut = "[";
                                            char *sepstr = buff;
                                            char * idid=strsep(&sepstr, idcut);
                                            //printf("oaoa : %s\n",idid);
                                            int k=lookup_symbol(idid);
                                            char* ptype=NULL;
                                            if(symbolTable[k].type=="array"){
                                                ptype=symbolTable[k].etype;
                                            }
                                            else{
                                                ptype=symbolTable[k].type;
                                            }
                                            printf("PRINTLN %s\n",ptype);
                                        }
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

static int lookup_symbol(char *name) {
    for(int i=0;i<indexcount;i++){
        if(strcmp(symbolTable[i].name,name)==0){
            return symbolTable[i].index;
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
    printf("%-10s%-10s%-10s%-10s%-10s%s\n",
           "Index", "Name", "Type", "Address", "Lineno", "Element type");
    for(int i=0;i<indexcount;i++){
            printf("%-10d%-10s%-10s%-10d%-10d%s\n",
                symbolTable[i].index, symbolTable[i].name, symbolTable[i].type, 
                symbolTable[i].address,symbolTable[i].lineno, symbolTable[i].etype);

    }
    
}
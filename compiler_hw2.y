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
    static int f_flag=0;
    static int if_flag=0;
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
%type  <s_val> add_op mul_op l_op binary_op unary_op cmp_op assign_op FORT IFT Condition PrimaryExpr ForStmt Expression UnaryExpr Operand
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
    : Expression assign_op Expression   {
                                            char* id1=NULL;
                                            char* id2=NULL;
                                            char* type1=NULL;
                                            char* type2=NULL;
                                            char * buff=strdup($1);
                                            const char* delim = " ";
                                            char *sepstr = buff;
                                            char * name=strsep(&sepstr, delim);
                                            id1=name;
                                            char temp[10]={};
                                            char temp2[10]={};
                                            strncpy(temp2,$3,strlen($3));
                                            if(strcmp(temp2,"INT_LIT")==0){
                                                id2=temp2;
                                            }
                                            else{
                                                strncpy(temp,$3,strlen($3)-1);
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
                                                    printf("error\:%d\: invalid operation\: %s (mismatched types %s and %s)\n",yylineno,$2,type1,type2);
                                                }
                                            }
                                            



                                            printf("%s\n",$2);
                                        }
;
assign_op
    : ASSIGN  {$$ = "ASSIGN";}  
    | ADD_ASSIGN    {$$ = "ADD_ASSIGN";}  
    | SUB_ASSIGN    {$$ = "SUB_ASSIGN";}  
    | MUL_ASSIGN    {$$ = "MUL_ASSIGN";}  
    | QUO_ASSIGN    {$$ = "QUO_ASSIGN";}  
    | REM_ASSIGN    {$$ = "REM_ASSIGN";}  
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
    : UnaryExpr {
                }
    | Expression binary_op Expression   {
                                            
                                            //printf("first %s\n",$1);
                                            //printf("thrid %s\n",$3);
                                            if(strcmp($2,"ADD")==0||strcmp($2,"SUB")==0){
                                                char* id1=NULL;
                                                char* id2=NULL;
                                                char* type1=NULL;
                                                char* type2=NULL;
                                                char *c=strstr($1, " ");
                                                if(c == NULL) {
                                                    id1=$1;
                                                    id2=$3;
                                                }
                                                else{
                                                    char * buff=strdup($1);
                                                    const char* delim = " ";
                                                    char *sepstr = buff;
                                                    char * name=strsep(&sepstr, delim);
                                                    id1=name;
                                                    char temp[10]={};
                                                    char temp2[10]={};
                                                    strncpy(temp2,$3,strlen($3));
                                                    if(strcmp(temp2,"INT_LIT")==0){
                                                        id2=temp2;
                                                    }
                                                    else{
                                                        strncpy(temp,$3,strlen($3)-1);
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
                                                        printf("error\:%d\: invalid operation\: %s (mismatched types %s and %s)\n",yylineno,$2,type1,type2);
                                                    }
                                                }
                                                //printf("type\:%s  %s\n",type1,type2);
                                            }

                                            if(strcmp($2,"REM")==0){
                                                char* id1=NULL;
                                                char* id2=NULL;
                                                char* type1=NULL;
                                                char* type2=NULL;
                                                char *c=strstr($1, " ");
                                                if(c == NULL) {
                                                    id1=$1;
                                                    id2=$3;
                                                }
                                                else{
                                                    char * buff=strdup($1);
                                                    const char* delim = " ";
                                                    char *sepstr = buff;
                                                    char * name=strsep(&sepstr, delim);
                                                    id1=name;
                                                    char temp[10]={};
                                                    char temp2[10]={};
                                                    strncpy(temp2,$3,strlen($3));
                                                    if(strcmp(temp2,"INT_LIT")==0){
                                                        id2=temp2;
                                                    }
                                                    else{
                                                        strncpy(temp,$3,strlen($3)-1);
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
                                            if(strcmp($2,"LAND")==0||strcmp($2,"LOR")==0){
                                                //printf("1213\n");
                                                char* id1=NULL;
                                                char* id2=NULL;
                                                char* type1=NULL;
                                                char* type2=NULL;
                                                char *c=strstr($1, " ");
                                                if(c == NULL) {
                                                    id1=$1;
                                                    id2=$3;
                                                }
                                                else{
                                                    char * buff=strdup($1);
                                                    const char* delim = " ";
                                                    char *sepstr = buff;
                                                    char * name=strsep(&sepstr, delim);
                                                    id1=name;
                                                    char temp[10]={};
                                                    char temp2[10]={};
                                                    strncpy(temp2,$3,strlen($3));
                                                    if(strcmp(temp2,"INT_LIT")==0){
                                                        id2=temp2;
                                                    }
                                                    else{
                                                        strncpy(temp,$3,strlen($3)-1);
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
                                                    printf("error\:%d\: invalid operation\: (operator %s not defined on int32)\n",yylineno,$2);
                                                }
                                            }
                                            printf("%s\n",$2);
                                            if(f_flag==1){
                                                //printf("FFF %s\n",$1);
                                                if(strcmp($1,"x + 1 {")==0){
                                                    printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                                                    f_flag=0;
                                                }
                                                
                                            }
                                            //printf("thrid %s\n",$3);
                                        }
;


UnaryExpr
    : PrimaryExpr      {
                            if(f_flag==1){
                                if(strcmp($1,"FLOAT_LIT")==0){
                                    printf("error\:%d\: non-bool (type float32) used as for condition\n",yylineno+1);
                                    f_flag=0;
                                }
                            }
                            if(if_flag==1){
                                if(strcmp($1,"FLOAT_LIT")==0){
                                    printf("error\:%d\: non-bool (type float32) used as for condition\n",yylineno+1);
                                    if_flag=0;
                                }
                                else if(strcmp($1,"x {")==0){
                                    //printf("%s\n",$1);
                                    printf("error\:%d\: non-bool (type int32) used as for condition\n",yylineno+1);
                                    if_flag=0;
                                }
                                else{
                                     if_flag=0;
                                }
                            }
                        }
    | unary_op UnaryExpr {printf("%s\n",$1);$$=$1;}
;

binary_op
    : add_op
;

cmp_op
    : EQL   {$$="EQL";}
    | NEQ   {$$="NEQ";}
    | LSS   {$$="LSS";}
    | LEQ   {$$="LEQ";}
    | GTR   {$$="GTR";}
    | GEQ   {$$="GEQ";}
    | l_op
;
l_op
    : LOR   {$$="LOR";}
    | LAND  {$$="LAND";}
;
add_op
    : ADD   {$$="ADD";}
    | SUB   {$$="SUB";}
    | mul_op
;

mul_op
    : MUL   {$$="MUL";}
    | QUO   {$$="QUO";}
    | REM   {$$="REM";}
    | cmp_op
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
                int idaddress=lookup_symbol(nameforlook,scopecount);

                //print_symbol(0);
                //printf("%d\n",idaddress);
                if(idaddress!=-1){
                    printf("IDENT (name=%s, address=%d)\n",$1,idaddress);
                    //sprintf(ident,"IDENT (name=%s, address=%d)",$1,idaddress);
                    
                }
                else{
                    printf("error\:%d\: undefined\: %s\n",yylineno+1,nameforlook);
                }
                $$=$1;
            }
    | LPAREN Expression RPAREN  {
                                    //printf("%s\n",$2);
                                    $$=$2;
                                }
;

Literal
    : INT_LIT   {printf("INT_LIT %d\n",$1);$$="INT_LIT";}
    | FLOAT_LIT     {printf("FLOAT_LIT %6f\n",$1);$$="FLOAT_LIT";}
    | TRUE      {printf("TRUE\n"); $$="TRUE";}
    | FALSE     {printf("FALSE\n");$$="FALSE";}
    | STRING_LIT   {printf("STRING_LIT %s\n",$1);$$="STRING_LIT";}
;


IndexExpr
    : PrimaryExpr LBRACK Expression RBRACK
;

ConversionExpr
    : Type LPAREN Expression RPAREN     {
                                            char *conv=NULL;
                                            if(strcmp($1,"INT")==0){
                                                conv="I";
                                            }
                                            else if(strcmp($1,"FLOAT")==0){
                                                conv="F";
                                            } 
                                            char * convo=NULL;
                                            if(strcmp($3,"INT_LIT")==0){
                                                convo="I";
                                            }
                                            else if(strcmp($3,"FLOAT_LIT")==0){
                                                convo="F";
                                            } 
                                            else{
                                                char * buff=strdup($3);
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
    : IFT Condition Block
    | IFT Condition Block ELSE IfStmt
    | IFT Condition Block ELSE Block
;

IFT
    :IF {if_flag=1;}
;
Condition
    : Expression
;

ForStmt
    : FORT ForClause Block
    | FORT Condition Block
;
FORT
    :FOR {f_flag=1;}
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
    : PRINT LPAREN Expression RPAREN    {
                                            char * buff=strdup($3);
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
                                        }
    | PRINTLN LPAREN Expression RPAREN  {
                                            //printf("oaoa :%s\n",$3);
                                            char * buff=strdup($3);
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
                                            if(symbolTable[k].type=="array"){
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
%{
	#include<stdio.h>
	#include<stdlib.h>
	int v = 1;
	#include<string.h>
	#include<math.h>
	#include <ctype.h>
	#define null 0
	int size = 0;
	int g = 0;
	void insert(char* l,char* t,int v,char* s,int ln);
	int search(char lab[]);
	void display();
	int yyerror();
	int var = 0;
	int yylex(void);
	int lineno = 1;
	struct symbtab
	{
		int val;
		char label[20];
		char type[20];
		int value;
		char scope[20];
		int lineno;
		struct symbtab *next;
	};
	int error = 0;
	struct symbtab *first,*last,*temp;
	char* op;
%}

%token DIGITS ID PLUS MINUS MUL DIVIDE NUM STRING INTEGER SPECIAL NL SPACE KEYWORD SPECIAL_START SPECIAL_END IF ELSE WHILE SEP END OR AND NOT IN NOTIN T F COLON SQUAREBRACKET_START SQUAREBRACKET_END MOD EQUAL PLUSEQUAL PRINT COMMENT RANGE SINGLEQUOTE DOUBLEQUOTE EXPONENTIAL COMMA INDENT LIST DIVIDEEQUAL MINUSEQUAL MULEQUAL LESSTHAN LESSTHANEQUAL GREATERTHAN GREATERTHANEQUAL DOUBLEEQUAL NOTEQUAL

%%
    P		: S		
    		;		
    S		: Simple S 		
                | Compound S		
                | comment S 
                | INDENT Simple S 	{g=0;}
                |
                ;
    Simple      :Assignment LB 			
		|Print LB
		;
    Assignment  : ID opassgn E1 	{
    						temp = search($1);
    						if(temp != NULL){
    							var = temp->value;
	    						if($2==1){
	    							var/=$3;
	    						}
	    						if($2==2){
	    							var*=$3;
	    						}
	    						if($2==3){
	    							var-=$3;
	    						}
	    						if(g==1){
	    							insert($1,"IDENTIFIER",var,"local",lineno);
	    							g = 0;
	    						}
	    						else {
	    							insert($1,"IDENTIFIER",var,"global",lineno);
	    						}
	    							
    						}
    						else{
    							printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",$1,lineno);
    							error = 1;
    						}
    						
    					}
		| ID EQUAL E1		{
						if(g==1){
	    							insert($1,"IDENTIFIER",$3,"local",lineno);
	    							g = 1;
	    						}
	    						else{
	    							insert($1,"IDENTIFIER",$3,"global",lineno);
	    						}
						//printf("inserted-----------\n");
					}
		| ID PLUSEQUAL E1	{
    						temp = search($1);
    						if(temp != NULL){
	    						var = temp->value;
	    						var += $3;
	    						if(g==1){
	    							insert($1,"IDENTIFIER",var,"local",lineno);
	    							g = 0;
	    						}
	    						else{
	    							insert($1,"IDENTIFIER",var,"global",lineno);
	    						}
    						}
    						else{
    							printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",$1,lineno);
    							error = 1;
    						}
    						
    					}
		| list
		| string
		; 
    opassgn	: DIVIDEEQUAL		{$$=1;}
    		| MULEQUAL		{$$=2;}
    		| MINUSEQUAL		{$$=3;}
    		;
    list	: ID EQUAL Arr		
		| ID PLUSEQUAL Arr	
		;
    Arr		: SQUAREBRACKET_START list SQUAREBRACKET_END 
		| LIST SPECIAL_START Range SPECIAL_END   
		| SQUAREBRACKET_START list SQUAREBRACKET_END mul 
		| SQUAREBRACKET_START list SQUAREBRACKET_END add 
		;
    mul		: MUL INTEGER  
		;
    add		: PLUS INTEGER 
		;
    
    list	: listnum
		| liststr
		;
    Range	: RANGE SPECIAL_START start COMMA stop COMMA step SPECIAL_END 
		| RANGE SPECIAL_START COMMA COMMA SPECIAL_END  
		;
    start	: NUM		
		| INTEGER 	
		;
    stop	: NUM		
		| INTEGER	
		;
    step	: NUM		
		| INTEGER	
		;
    listnum	: NUM COMMA listnum		
		| INTEGER COMMA listnum	
		| NUM				
		| INTEGER			
		;
    liststr	: Str COMMA liststr		
		| Str
		;
    Str		: STRING 			
		| STRING mul			
		| STRING addstr			
		;
    addstr	: PLUS STRING			
		;

    string	: ID EQUAL STRING		
		| ID PLUSEQUAL STRING 		
		;	
    
    E1		: E1 OP1 E2 	{
    					if($2==1)
    						{$$=$1+$3;}
    					else if($2==2)
    						{$$=$1-$3;}
    				}
                | E2
		;
    E2		: E2 OP2 E3 	{
    					if($2==3)
    						{$$=$1*$3;}
    					else if($2==4)
    						{$$=$1/$3;}
    				}
                | E3
		;
    E3		: E4 EXPONENTIAL E3 	
                | E4
		;
    E4		: NUM 				{$$=atoi($1);}
		| INTEGER			{$$=atoi($1);}
                | ID 				{
                					temp = search($1);
                					if(temp != NULL){
                						var = temp->value;
                						$$ = var;
                					}
                					else{
                						printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",$1,lineno);
    								error = 1;
                					}	
                					
                				}
                |SPECIAL_START E1 SPECIAL_END	{$$=$2;}
                
		;
    OP1		: PLUS				{$$=1;}	
		| MINUS				{$$=2;}
		;	
    OP2		: MUL				{$$=3;}
		| DIVIDE			{$$=4;}
		;

    Compound    : if_else LB
		| only_if LB	
		| while_loop LB
		;

    if_else     : IF condition COLON LB IND else_1 	
		;
    only_if	: IF condition COLON LB IND	
		;
    else_1	: ELSE COLON LB IND 
		;
    while_loop	: WHILE condition COLON LB IND
		;
    condition	: cond 
		;		
    cond        : cond opor cond1 	
		| cond1
		;
    cond1	: cond1 opand cond2 
		| cond2
		;
    cond2       : opnot cond2 
		| cond3
		;
    cond3 	: SPECIAL_START cond SPECIAL_END
		| relexp 
		| bool
		;
    relexp 	: relexp relop E1  
		| ID 		
		| NUM   		
		| INTEGER	
		;
    relop       : comparison 			
    		| IN 
    		| NOTIN
    		;
    comparison	: LESSTHAN			
    		| LESSTHANEQUAL			
    		| GREATERTHAN			
    		| GREATERTHANEQUAL		
    		| DOUBLEEQUAL			
    		| NOTEQUAL			
    		;
    bool       	: T 
    		| F
		;
    opor        : OR	
		;
    opand       : AND
		;
    opnot       : NOT 
		;

    IND         : INDENT A S	
		;
    A		:		{g=1;}
    		;
    		
    Print 	: PRINT SPECIAL_START toprint SPECIAL_END
		| PRINT SPECIAL_START toprint SEP EQUAL STRING END EQUAL STRING SPECIAL_END
		| PRINT SPECIAL_START toprint SEP EQUAL STRING SPECIAL_END
		| PRINT SPECIAL_START toprint END EQUAL STRING SPECIAL_END
		;
    
    toprint	: X
		| X COMMA toprint
		;
    X		: STRING
		| Arr
		| ID		
		| NUM			
		| INTEGER	
		;
   comment	: COMMENT 	{lineno += 1;}
   LB		: NL		{lineno += 1;}
   
  
%%

int yyerror(){
        printf("\n------------------SYNTAX ERROR : at line number %d -------------------------\n",lineno);
    	error = 1;
	v=0;
        return 0;
}
 void insert(char* l,char* t,int v,char* s,int ln)
{
	struct symbtab *n;
	n=search(l);
	if(n!=NULL)
        {
              	n->value = v;
              	n->lineno = ln;
              	strcpy(n->scope,s);  
        }
        else
        {
        	struct symbtab *p;
                p=malloc(sizeof(struct symbtab));
                strcpy(p->label,l);
                strcpy(p->type,t);
                p->value = v;
                p->lineno = ln;
                strcpy(p->scope,s);
                p->next=null;
                if(size==0)
                {
		        first=p;
		        last=p;
                }
                else
                {
                        last->next=p;
                        last=p;
                }
                size++;
        }
}

void display()
{
        int i;
        struct symbtab *p;
        p=first;
        printf("\n------------------SYMBOL TABLE----------------\n");
        printf("----------------------------------------------\n");
        printf("LABEL\tTYPE\t\tVALUE\tSCOPE\tLINENO\n");
        for(i=0;i<size;i++)
        {
                printf("%s\t%s\t%d\t%s\t%d\n",p->label,p->type,p->value,p->scope,p->lineno);
                p=p->next;
        }
}
int search(char lab[])
{
        int i=0;
        struct symbtab *p,*flag;
        p=first;
        for(i=0;i<size;i++)
        {
                if(strcmp(p->label,lab)==0)
                {
                	flag=p;
                	return flag;
                }
                p=p->next;
        }
        p=NULL;
        return p;
}
int main(){
         extern FILE* yyin;
	 yyin = fopen("inp.py","r");
	 yyparse();
	 if(v)
	 {
	    printf("------------------------------PARSE SUCCESSFUL---------------------------\n");
	 }
	 if(!error){
	 	display();
	 }
	 return 1;
	
}

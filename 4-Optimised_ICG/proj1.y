%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	#include <ctype.h>
	#define null 0
	#define YYSTYPE char*
	#include <stdlib.h>

   	int system(const char *command);
	int size = 0; // size of symbol table
	int v = 1;	// yyerror
	int g = 0; //scope
	int abc = 0;	//temporary value
	int aeval = 0;  //AE evaluation
	int lineno = 1;
	extern int yylineno;
	int flag=0;	//for operator identification
	char label[2]="l"; // labels
	int l_ = 0;	//count of labels(l1,l2,....)
  	char l__[100] = {'\0'}; //labels
	char st[100][10];  //stack used in icg generation
	int top=0;	//top of stack
	int i_=0;	//count of temp variables in icg
  	char i__[100] = {'\0'};	//temp variables (t1,t2,...)
  	char val_str[100] = {'\0'};
  	char result_rel_str[100] = {'\0'};
  	char res_str[100] = {'\0'};
  	char res_str1[100] = {'\0'};
  	char res_str2[100] = {'\0'};
	char temp[2]="t";
	char ICG[10000]=""; //icg
	char try1[5][10];
	char try[5][10];
	int relexp = 0;
	int x=0;
	int x1=0;
	char aeval_[100] = {'\0'};
	char temp_quad = 'A';
	int i=0; //for quadruples
	struct symbtab
	{
		char label[20];
		char type[20];
		int value;
		char scope[20];
		int lineno;
		struct symbtab *next;
	};
	int error = 0;
	struct symbtab *first,*last,*temp1,*temp2;
	char* op;
	typedef struct Abstract_syntax_tree
  	{
	  	char *name;
	  	struct Abstract_syntax_tree *left;
	  	struct Abstract_syntax_tree *right;
  	}node; 
  	struct symbtab* t_ptr;	//AE evaluation
  	void displayquad();
	char addquad(char*,char*,char*,char*);
	typedef struct quadruples
  	{
	    char *op;
	    char *arg1;
	    char *arg2;
	    char *res;
  	}quad;
  	int quadlen = 0;
  	quad q[100];

        extern FILE *yyin;
        node* buildTree(char *,node *,node *);
        void printTree(node *);
        void push(char*);
	void codegen(int val,char* aeval_);
	void codegen_assign();
	void codegen2();
	void codegen3();
	void insert(char* l,char* t,int v,char* s,int ln);
	struct symbtab* search(char lab[]);
	void display();
	int yyerror();
	node *dollardollar;

%}

%token DIGITS ID PLUS MINUS MUL DIVIDE NUM STRING INTEGER SPECIAL NL SPACE KEYWORD SPECIAL_START SPECIAL_END IF ELSE WHILE SEP END OR AND NOT IN NOTIN T F COLON SQUAREBRACKET_START SQUAREBRACKET_END MOD EQUAL PLUSEQUAL PRINT RANGE SINGLEQUOTE DOUBLEQUOTE EXPONENTIAL COMMA INDENT LIST DIVIDEEQUAL MINUSEQUAL MULEQUAL LESSTHAN LESSTHANEQUAL GREATERTHAN GREATERTHANEQUAL DOUBLEEQUAL NOTEQUAL

%%
    P		: S			{dollardollar = $$;}	
    		;		
    S		: Simple S		{$$=buildTree("SEQ",$1,$2);}	
                | Compound S		{$$=buildTree("SEQ",$1,$2);}
                |			{$$=buildTree("NULL",NULL,NULL);}
                ;
    IS		: In Simple IS   	{$$=buildTree("SEQ",$2,$3);}
    		| In Compound IS     	{$$=buildTree("SEQ",$2,$3);}
    		|			{$$=buildTree("NULL",NULL,NULL);}
                ;
    In		: INDENT		{g=1;}
    		| In INDENT		{g=1;}
    		;
    Simple      : Assignment LB 	{aeval = 0;$$=$1;}
		| Print LB		
		;
    Assignment  : ID  opassgn E1 	{
		                                push($1);
		                                codegen_assign();
		                                
		                                $1 = buildTree($1,NULL,NULL);
		                                $$ = buildTree($2,$1,$3);
		                                //addquad($2,$3,'_',$1);
    					}
		; 
    opassgn	: DIVIDEEQUAL		{$$="/=";}
    		| MULEQUAL		{$$="*=";}
    		| MINUSEQUAL		{$$="-=";}
    		| EQUAL			{$$="=";}
    		| PLUSEQUAL		{$$="+=";}
    		;
    
    E1		: E1 OP1 E2   		{ 

    						sprintf(aeval_,"%d",aeval);
    						codegen(aeval,aeval_);
    						//$$=addquad($2,$1,$3,aeval_);
    					}
                | E2		
		;
    E2		: E2 OP2 E4		{

    						sprintf(aeval_,"%d",aeval);
    						codegen(aeval,aeval_);
    						//$$=addquad($2,$1,$3,aeval_);
    					}
                | E4		
		;
    E4		: INTEGER			{
    							abc=atoi($1);
    							if(flag==1)
    								{aeval+=abc;}
    							else if(flag==2)
    								{aeval-=abc;}
    							else if(flag==3)
    								{aeval*=abc;}
    							else if(flag==4)
    								{aeval/=abc;}
    							else aeval=abc;
    							push($1);
	          					$$=$1;
	          					//$$ = buildTree($1,NULL,NULL);
	          				}
	        | NUM				{
    							abc=atoi($1);
    							if(flag==1)
    								{aeval+=abc;}
    							else if(flag==2)
    								{aeval-=abc;}
    							else if(flag==3)
    								{aeval*=abc;}
    							else if(flag==4)
    								{aeval/=abc;}
    							else aeval=abc;
    							push($1);
	          					$$=$1;
	          					//$$ = buildTree($1,NULL,NULL);
	          				}
                | ID 				{
                					t_ptr=search($1);
                					
                					if(t_ptr==NULL)
                					{
                						printf("\n----------------------ERROR : variable %s undeclared-------------------\n",$1);
                						error = 1;
                					}
                					else
                					{
                					abc = t_ptr->value;
                					
                					if(flag == 1)
                						{aeval += abc;}
                					else if(flag == 2)
                						{aeval -= abc;}
                					
                					else if(flag==3)
                						{aeval *= abc;}
                					else if(flag==4)
                						{aeval /= abc;}
                					else
                						 aeval = abc;
                					push($1);
	      						$$=$1;
	      						//$$ = buildTree($1,NULL,NULL);}
	      						}
	      					}
                |SPECIAL_START E1 SPECIAL_END	{$$=$2;}
                
		;
    OP1		: PLUS				{flag = 1;push("+");$$="+";}	
		| MINUS				{flag = 2;push("-");$$="-";}
		;	
    OP2		: MUL				{flag = 3;push("*");$$="*";}
		| DIVIDE			{flag = 4;push("/");$$="/";}
		;

    Compound    : if_else LB
    		| only_if LB
		| while_loop LB
		;
    only_if	: IF condition COLON LB IND	{ 
    							strcpy(try1[x1],label);
    							codegen2();
    							x--;
    							x1++;
    							$$ = buildTree("IF",$2,$5);
    						}
    		;
    if_else     : IF condition COLON LB IND {		strcat(ICG,"goto ");
    							char label_temp [2]= "l";
							sprintf(l__,"%d",l_);
							strcat(label_temp,l__);
							strcat(ICG,label_temp);
							
							//goto in quad
							q[quadlen].op = (char*)malloc(sizeof(char)*2);
						 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label_temp));
						 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
							q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
							strcpy(q[quadlen].op,"goto");
							strcpy(q[quadlen].arg1,"");
							strcpy(q[quadlen].arg2,"");
						 	strcpy(q[quadlen].res,label_temp);
						 	quadlen++;	
							strcpy(try1[x1],label_temp);
							x1++;
    							strcat(ICG,"\n");
    							} 
    		else_1      { codegen2();x--;l_++;$$=buildTree("SEQ",buildTree("IF",$2,$5),$7);}
		;
    else_1	: ELSE {codegen3();} COLON LB IND 	{ $$=buildTree("ELSE",$5,NULL);}
		;
    while_loop	: WHILE condition COLON LB IND  {
    							strcat(ICG,"goto ");
    							strcat(ICG,try1[--x1]);
    							strcat(ICG,"\n");
    							//goto in quad
							q[quadlen].op = (char*)malloc(sizeof(char)*2);
						 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(try1[--x1]));
						 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
							q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
							strcpy(q[quadlen].op,"goto");
							strcpy(q[quadlen].arg1,"");
							strcpy(q[quadlen].arg2,"");
						 	strcpy(q[quadlen].res,try1[--x1]);
						 	quadlen++;	
						 	
    							codegen2();
    							x--;
    							$$=buildTree("while",$2,$5);
    						}
		;
    condition	: cond 				{$$=$1;}
		;		
    cond        : cond opor cond1 		{$$=buildTree("or",$1,$3);}
		| cond1
		;
    cond1	: cond1 opand cond2 		{$$=buildTree("and",$1,$3);}
		| cond2
		;
    cond2       : opnot cond2 			{$$=buildTree("not",$2,NULL);}
		| cond3	
		;
    cond3 	: SPECIAL_START cond SPECIAL_END	{$$=$2;}
		| relexp 			{
							codegen1();
		    					
						}
		| bool
		;
    relexp 	: relexp relop E1  	{	
    						
						strcpy(label,"l");
						sprintf(l__,"%d",l_);
						strcat(label,l__);
						strcat(ICG,label);
						strcat(ICG,":\n");
						//label in quad
						q[quadlen].op = (char*)malloc(sizeof(char)*2);
					 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
					 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
						q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
						strcpy(q[quadlen].op,"Label");
						strcpy(q[quadlen].arg1,"");
						strcpy(q[quadlen].arg2,"");
					 	strcpy(q[quadlen].res,label);
					 	quadlen++;
						strcpy(try1[x1],label);		//current label pushed onto stack try1 
						l_++;
						x1++;
						sprintf(aeval_,"%d",aeval);
						codegen(aeval,aeval_);
						$$=buildTree($2,$1,$3);
	    				}
    					
		| ID 			{push($1);$$ = $1;}
		| NUM			{push($1);$$ = $1;}
		| INTEGER		{push($1);$$ = $1;}
		;
    relop       : comparison 		{$$=$1;}		
    		| IN 
    		| NOTIN
    		;
    comparison	: LESSTHAN		{$$="<";push("<");}	
    		| LESSTHANEQUAL		{$$="<=";push("<=");}		
    		| GREATERTHAN		{$$=">";push(">");}
    		| GREATERTHANEQUAL	{$$=">=";push(">=");}
    		| DOUBLEEQUAL		{$$="==";push("==");}	
    		| NOTEQUAL		{$$="!=";push("!=");}
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

    IND         : IS	{$$=$1;}
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
		| ID		
		| NUM			
		| INTEGER	
		;
   LB		: NL
   		;
   
  
%%

int yyerror(){
	printf("\n------------------SYNTAX ERROR : at line number %d -------------------------\n",yylineno-1);
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
        printf("\n------------------SYMBOL TABLE after Optimisations----------------\n");
        printf("------------------------------------------------------------------\n");
        printf("LABEL\tTYPE\t\tVALUE\tSCOPE\tLINENO\n");
        for(i=0;i<size;i++)
        {
                printf("%s\t%s\t%d\t%s\t%d\n",p->label,p->type,p->value,p->scope,p->lineno);
                p=p->next;
        }
}
struct symbtab* search(char lab[])
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


node* buildTree(char *op,node *left,node *right)
{
	node *new = (node*)malloc(sizeof(node));
	char *newstr = (char *)malloc(strlen(op)+1);
	strcpy(newstr,op);
	new->left=left;
	new->right=right;
	new->name=newstr;
	return new;
}

void printTree(node *tree)
{
	if(tree->left!=NULL || tree->right!=NULL)
		printf("(");
	printf(" %s ",tree->name);
	if(tree->left!=NULL)
		printTree(tree->left);
	if(tree->right!=NULL)
		printTree(tree->right);
	if(tree->left!=NULL || tree->right!=NULL)
		printf(")");
	
}

void push(char *argu)
{
 //strcpy(st[++top],argu);
 strcpy(st[++top],argu);
 //printf("%s-----qwertyuio---%d\n",st[top],top);
 }
 
  
char* search_quad(char* op,char* arg1,char* arg2)
{
	int k = 0;
	while(k<quadlen)
	{
		if(!strcmp(q[k].op,op) && !strcmp(q[k].arg1,arg1) && !strcmp(q[k].arg2,arg2))
		{
			return (q[k].res);
		}
		k++;
	}
	return '\0';
		
	
}


void codegen(int val,char* aeval_)
{

	struct symbtab *v1,*v2;
	v1 = search(st[top-2]);
	v2 = search(st[top]);
	char t1_v[50] = {'\0'};
	char t2_v[50] = {'\0'};
	char* temp_search = search_quad(st[top-1],st[top-2],st[top]);
	if(temp_search != NULL)
	{
		strcpy(st[top],temp_search);
	}
	else
	{
		strcpy(temp,"t");
		sprintf(i__,"%d",i_);
		strcat(temp,i__);
		strcat(ICG,temp);
		strcat(ICG," ");
		strcat(ICG,"=");
		strcat(ICG," ");
		//char op[] = "+";
		//printf("DEBUGGING : %d",strcmp(st[top-1],op));
		int val_rel_operand1,val_rel_operand2,result_rel;
	
	
		//relexp 
		if(strcmp(st[top-1],"+") && strcmp(st[top-1],"-") && strcmp(st[top-1],"*") && strcmp(st[top-1],"/"))
		{
			//printf("INSIDE : %s\n",st[top-1]);
			if(v1!=NULL)
			{
				val_rel_operand1 = v1->value;
			}
			else
			{
				val_rel_operand1 = atoi(st[top-2]);
			}
		
			if(v2!=NULL)
			{
				val_rel_operand2 = v1->value;
			}
			else
			{
				val_rel_operand2 = atoi(st[top]);
			}
			
			if(!strcmp(st[top-1],">="))
				result_rel = val_rel_operand1 >= val_rel_operand2;
			else if(!strcmp(st[top-1],"<="))
				result_rel = val_rel_operand1 <= val_rel_operand2;
			else if(!strcmp(st[top-1],">"))
				result_rel = val_rel_operand1 > val_rel_operand2;
			else if(!strcmp(st[top-1],"<"))
				result_rel = val_rel_operand1 < val_rel_operand2;
			else if(!strcmp(st[top-1],"=="))
				result_rel = val_rel_operand1 == val_rel_operand2;
			else if(!strcmp(st[top-1],"!="))
				result_rel = val_rel_operand1 != val_rel_operand2;
			
			sprintf(result_rel_str,"%d",result_rel);
			
			//strcat(ICG,result_rel_str);
			
			
			//strcat(ICG," ");
			//strcat(ICG,"\n");
			
		}
		
		
		//Constant Propagation
		if(v1!=NULL)
		{
			sprintf(t1_v,"%d",v1->value);
			strcat(ICG,t1_v);
		

		}
		else
		{
			strcat(ICG,st[top-2]);
		}
	
		strcat(ICG," ");	
	
	
		strcat(ICG,st[top-1]);
		strcat(ICG," ");
		if(v2!=NULL)
		{
			sprintf(t2_v,"%d",v2->value);
			strcat(ICG,t2_v);
		}
		else
			strcat(ICG,st[top]);
		strcat(ICG," ");
		strcat(ICG,"\n");
	
		if(strcmp(st[top-1],"+") && strcmp(st[top-1],"-") && strcmp(st[top-1],"*") && strcmp(st[top-1],"/"))
			insert(temp,"identifier",result_rel,"-",yylineno-1);
		else
			insert(temp,"identifier",val,"-",yylineno-1);	
	
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
		q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
		q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
		q[quadlen].res = (char*)malloc(sizeof(int)*10);
		strcpy(q[quadlen].op,st[top-1]);
		strcpy(q[quadlen].arg1,st[top-2]);
		strcpy(q[quadlen].arg2,st[top]);
		
		strcpy(q[quadlen].res,temp);
		quadlen++;

		top-=2;
		strcpy(st[top],temp);
		i_++;
	}
}


void codegen_assign()
 {
	 temp2 = search(st[top-1]);
	 int val;
	 if(temp2!=NULL)
	 {
	 	val=temp2->value;
	 	if(g==1)
	 		insert(st[top],"identifier",val,"local",yylineno-1);
	 	else
	 		insert(st[top],"identifier",val,"global",yylineno-1);
	 }
	 else
	 {
	 	val = atoi(st[top-1]);
	 	if(g==1)
	 		insert(st[top],"identifier",val,"local",yylineno-1);
	 	else
	 		insert(st[top],"identifier",val,"global",yylineno-1);
	 }
	 sprintf(val_str,"%d",val);
	 
	 strcat(ICG,st[top]);
	 strcat(ICG," ");
	 strcat(ICG,"=");
	 strcat(ICG," ");
	 strcat(ICG,val_str);
	 strcat(ICG,"\n");
	 q[quadlen].op = (char*)malloc(sizeof(char)*2);
	 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
	 q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	 q[quadlen].res = (char*)malloc(sizeof(int)*strlen(st[top]));
	 strcpy(q[quadlen].op,"=");
	 strcpy(q[quadlen].arg1,st[top-1]);
	 strcpy(q[quadlen].res,st[top]);
	 quadlen++;
	 top-=2;
 }

void codegen1()
{
	strcpy(temp,"t");
	sprintf(i__,"%d",i_);
	strcat(temp,i__);
	push(temp);
	//strcpy(st[top],temp);

	strcat(ICG,temp);
	strcat(ICG," ");
	strcat(ICG,"=");
	strcat(ICG," ");
	//strcat(ICG,"not ");

	temp2 = search(st[top-1]);
	int val;
	if(temp2!=NULL)
	{
		val=temp2->value;
	}
	else
	{
		val = atoi(st[top-1]);
	}


	int res = !(val);
	int r1 = val;
	sprintf(res_str,"%d",res);
	sprintf(res_str2,"%d",r1);
	strcat(ICG,"not ");
	strcat(ICG,res_str2);
	strcat(ICG,"\n");
	insert(temp,"identifier",res,"-",yylineno-1);

	strcpy(label,"l");
	sprintf(l__,"%d",l_);
	strcat(label,l__);
	strcat(ICG,"if ");
	temp2 = search(st[top]);
	int val1;
	if(temp2!=NULL)
	{
		val1=temp2->value;
	}
	else
	{
		val1 = atoi(st[top]);
	}

	int res1 = (val1);
	sprintf(res_str1,"%d",res1);
	strcat(ICG,res_str1);
	strcat(ICG," goto ");
	strcat(ICG,label);

	//goto in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"goto");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,label);
	quadlen++;
	strcat(ICG,"\n");

	strcpy(try[x],label); 	//after finishing the cs go to label from try stack
	l_++;
	x++;
	i_++;
}

void codegen2()
{
	strcat(ICG,try[--x]);
	strcat(ICG,":\n");

	//Label in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*3);
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"Label");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,try[x]);
	quadlen++;
}

void codegen3()
{
	strcat(ICG,label);
	strcat(ICG,":\n");
	//Label in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"Label");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,label);
	quadlen++;

	strcpy(label,"l");
	sprintf(l__,"%d",l_);
	strcat(label,l__);
	strcpy(try[x],label);		
	x++;
}


void displayquad()
{
	int j=0;
	printf("\top");
	printf("\targ1");
	printf("\targ2");
	printf("\tresult");
	printf("\n");
	while(j<quadlen)
	{
		printf("\t%s",q[j].op);
		printf("\t%s",q[j].arg1);
		printf("\t%s",q[j].arg2);
		printf("\t%s",q[j].res);
		printf("\n");
		j++;
	}
}
 
int main(){
	 extern FILE* yyin,*yyout;
	 yyin = fopen("inp.py","r");
	 yyparse();

	 if(!error)
	 {
	 	
	
	 	display();	//symbol table display
	 	printf("\n------------QUADRUPLES--------------\n");
	 	displayquad();
    		//printTree(dollardollar);
    		printf("\n");
	 	printf("\n-------------ICG with optimisations(Packing temporaries & Constant Propagation)-------------\n");
		printf("%s\n",ICG);
		FILE *f;  
		char buff[10000];  
		f = fopen ("IntermediateCode.txt", "w");  
		fprintf (f, "%s", ICG);  
		fclose (f);
		
		
	}
	else
	{	
		printf("\nERROR\n");
	}
	 return 1;
	
}

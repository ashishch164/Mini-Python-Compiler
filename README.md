# Mini-Python-Compiler
This is our Compiler Design project for 6th semester. 

## Details
+ **Project Title:** Python Compiler (constructs: 'if-else', 'while') 
	       - Using C language till Optimisation of Intermediate Code.
	       - Using Python Language for Target Code Generation.
+ **Team Members:**
   1) Ashish Kumar
   2) Anmol yadav
   
+ **Project Abstract:** The Mini-Compiler, contains all phases of compiler has been made for the language Python by using C language (till intermediate code optimisation phase) and we used Python language itself for target code generation as well . The constructs that have been focused on are ‘if-else’ and ‘while’ statements. The optimizations handled for the intermediate code are ‘packing temporaries’ and ‘constant propagation’. Syntax and semantic errors have been handled and syntax error recovery has been implemented using Panic Mode Recovery in the lexer.
+ **Code Execution:  **
1) The following commands can be used to execute the code in any of the folders except '5-Target_Code':
```
lex proj.l
yacc -d -v proj1.y
gcc lex.yy.c y.tab.c -lm -w
a.exe
```
2) The following commands execute the code in the '5-Target_Code' folder:
```
python3 final.py
```

## Various folders
1) **Token_And Symbol_Table:** This folder contains the code that outputs the tokens and the symbol table.
2) **Abstract_Syntax_Tree:** This folder contains the code that displays the abstract syntax tree.
3) **Intermediate_Code_Generation:** This folder contains the code that generates the symbol table before optimisations and the intermediate code.
4) **Optimised_ICG:** This folder contains the code that generates the symbol table after optimisations, the quadruples table and the optimised intermediate code.
5) **Target_Code:** This folder contains the code that displays the assembly code/target code.



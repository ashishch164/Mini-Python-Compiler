# Mini-Python-Compiler
This is our Compiler Design project for 6th semester. <br>
Project Report: https://github.com/ashishch164/DTU-SE-Subjects-work/tree/main/Compiler%20Design

## Details
+ **Project Title:** Python Compiler (constructs: 'if-else', 'while')<br /> 
	       - Using C language till Optimisation of Intermediate Code.<br />
	       - Using Python Language for Target Code Generation.
+ **Team Members:**
   1) Ashish Kumar
   2) Anmol Yadav
   
+ **Project Abstract:** The Mini-Compiler, contains all phases of compiler has been made for the language Python by using C language (till intermediate code optimisation phase) and we used Python language itself for target code generation as well . The constructs that have been focused on are ‘if-else’ and ‘while’ statements. The optimizations handled for the intermediate code are ‘packing temporaries’ and ‘constant propagation’. Syntax and semantic errors have been handled and syntax error recovery has been implemented using Panic Mode Recovery in the lexer.
+ **Code Execution :**
1) The following commands can be used to execute the code in any of the folders except '5-Target_Code':
```
lex proj.l
yacc -d -v proj1.y
gcc lex.yy.c y.tab.c -lm -w
a.exe
```
2) The following commands execute the code in the '5-Target_Code' folder:
```
python final.py
```

## Various folders
1) **Token_And Symbol_Table:** This folder contains the code that outputs the tokens and the symbol table.
2) **Abstract_Syntax_Tree:** This folder contains the code that displays the abstract syntax tree.
3) **Intermediate_Code_Generation:** This folder contains the code that generates the symbol table before optimisations and the intermediate code.
4) **Optimised_ICG:** This folder contains the code that generates the symbol table after optimisations, the quadruples table and the optimised intermediate code.
5) **Target_Code:** This folder contains the code that displays the assembly code/target code.

## RESULTS AND SHORTCOMINGS
The mini-compiler built in this project works perfectly for the ‘if-else’ and ‘while’ constructs of Python language. Our compiler can be executed in different phases by building and running the code separated in the various folders. The final code displays the output of all the phases on the terminal, one after the other. First, the tokens are displayed, followed by a ‘PARSE SUCCESSFUL’ message. The abstract syntax tree is printed. Next, the symbol table along with the intermediate code is printed without optimisation. Finally, the symbol table and the intermediate code after optimisation is displayed after the quadruples table. The final output is the target code, written in the instruction set architecture followed by the hypothetical machine model introduced in this project. This is for inputs with no errors. But in case of erroneous inputs, the token generation is stopped on error encounter and the corresponding error message is displayed.

This mini-compiler has the following shortcomings:<br />
•	User defined functions are not handled.<br />
•	Importing libraries and calling library functions is not taken care of.<br />
•	Datatypes other than integer and float, example strings, lists, tuples, dictionaries, etc have not been considered.<br />
•	Constructs other than ‘while’ and ‘if-else’ have not been added in the compiler program.<br />

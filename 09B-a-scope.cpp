#include<iostream>
/*
            INDEX
1. Scopes in C++
    a. Local Scope
    b. Function Scope
    c. File Scope
    TODO d. Class Scope
2. Function Scope Determination
    a. Local function prototype
    b. Global function prototype
3. Variable Scope Determination
    a. Global variables
    b. Local variables
    c. Static Local variables
*/

int main() {
    /*
    * 1. Scopes in C++

    There are four kinds of scopes in C++ local, function, file, and class 
    * a. Local Scope: 
    A name declared in a block is local to that block and can be used only in it 
    and the other blocks contained under it. The names of formal arguments are treated as if 
    they were declared in the outermost block of that function.
    
    * b. Function Scope: 
    The variables declared in the outermost block of a function have function scope 
    i.e., they can be accessed only in the function that declares them. 
    ? Also labels (of goto) have function scope i.e., they cannot be used outside the function. 
    
    * c. File Scope: 
    A name declared outside all blocks and functions has file scope i.e., it can be used 
    in all the blocks and functions written inside the file in which the name declaration appears.
    
    TODO d. Class Scope: A name of a class member has class scope and is local to its class. 
    
    
    * 2. Function Scope Determination 
    
    ? The scope for a function is determined by its place of declaration. 

    * a. Local function prototype
    If a function's (say A( )'s declaration appears within another function (say B()), then the function A() 
    is locally available to function B() i.e., it can be only called from B() and nowhere else. 
    
    Such function prototypes are local prototypes and their scope is local to the function that contains 
    their declaration. 

    * b. Global function prototype
    On the other hand, if the function's (say A()'s prototgye appears outside all other functions in the 
    program file, then the function A() can be accessed from any of the functions in the file. 
    
    Such function prototypes are GLOBAL prototypes and are globally available to all the functions in the file. 
    
    
    * 3. Variables Scope Determination 

    The scope for variables is also determined by the place of their declaration. 
    
    * a. Global variables
    If a variable declaration appears outside all the functions, it is said to be GLOBAL variable. 
    A GLOBAL variable is available to all the functions and blocks defined in the file. 
    
    ? A global variable comes into existence when the program execution starts and is destroyed when the program 
    ? terminates Global variables hold their values throughout the program execution. 
    
    Any expression may access them regardless of what block of code that expression is in i.e., the scope of 
    global variables is FILE scope. They can be accessed from anywhere in the file. 
    
    * b. Local variables
    Unlike global variables, the local variables are the ones that are defined within a function. 
    A local variable comes into existence when the function is entered and is destroyed upon exit.
    That is, a local variable cannot hold its value between function calls. 
    ? It is defined and initialised every time a function call (for the function that declares it) occurs. 
    
    * c. Static Local variables
    The only exception to this rule is static local variable. Such variable is defined and initialized at 
    the time of first function call and it holds its value throughout the program run, 
    ? but its scope is still the function scope i.e., it cannot be accessed beyond its parent function.

    */
    return 0;
}
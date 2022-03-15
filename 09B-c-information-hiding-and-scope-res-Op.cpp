#include<iostream>
using namespace std;
/*
            INDEX
1. Information Hiding
2. GLOBAL and LOCAL variables with the same name
3. Scope Resolution Operator `::`
*/


/*
Here comes the idea of information hiding and scope rules. 

* 1. Information Hiding
Information hiding is a very important programming concept which states that the inside of each function 
is hidden from everything outside itself. 

Scope rules state that: 
? scope of global variables is the entire program file (they can be referenced from everywhere in the program) 
and
? scope of local variables is the function which declares them.


* 2. GLOBAL and LOCAL variables with the same name
A local variable can have the same name as that of a global variable. 
But in such case, the global variable with the same name remains HIDDEN in the function that 
declares the local variable. 
That is, the function having a local variable with the same name of a global variable, 
then the function cannot access that global variable.


* 3. Scope Resolution Operator `::`
The `::` operator unhides the hidden global variable.
*/

int a = 1; //global variable `a`

int main(){

    int a = 2; //`a` defined in main() function
    
    {    
        int a = 3; //`a` defined in an inner block
        
        
        cout << a << '\n'; 
        cout << ::a << '\n';  //this gives us the global variable `a`, not the one from the outer block

    }
    cout << a << '\n'; 
    //this gives us `a` defined in main(). the `a` defined in the inner block doesn't change the outer block

    return 0;
}

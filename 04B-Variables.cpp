#include <iostream>
using namespace std;
/*
            INDEX  
1. About variables
2. Different ways of declaring variables
3. sizeof() function 


*/
int main(){

//! 1. About variables


/*
Variables represent named storage locations, whose value
can be manipulated during the program run. 

Variables declared outside functions in the body of the program
are global variables and can be accessed anywhere within the program.

* Variables declared within the body of functions are local to that 
* specific function. They can be accessed only within that function.

! Official definition of C++ rules regarding variables: A variable can be accessed 
! only in the block in which it has been declared into(local to that block).

* A variable declared inside the block of main() and not in any sub block can be 
* accessed anywhere inside main() i.e., the scope of the variable is the function main().

There are two values associated with a variable :

--> Its data value, stored at some location in the memory. It is
referred to as a variable's 'rvalue'.
--> Its locations value; that is, the address in memory at which
its data value is stored. It is referred to as a variable's 
'lvalue'. 

An 'lvalue' is an expression to which you can assign a value. 
Whenever, you use the assignment operator '=', the expression
to the left of an assignment operator must be an lvalue i.e., 
it must provide an accessible memory address where the data can 
be written to.

On the programmer side, we can see the lvalue as the variable name
? however, internally the lvalue is a numbered address which is mapped
? to the variable name.

E.g:- sum = 100, the left one is lvalue and the right one is rvalue.
*/



//! 2. Different ways of declaring variables


/*
! SYNTAX : [typeModifier] dataType variableName;

* A type modifier can also be added as a prefix to the dataType according 
* to the requirement.
A simple variable declaration consists of a type specifier followed by a
variable-name. 
*/

    short int value0;

/*
When more than one variable/identifier of a particular data type is being 
declared, a comma-separated list of identifiers may follow the type specifier.
*/

    int value1, value2, value3;

/*
In the above simple declarations, a first value or initial value is not 
provided to the variable i.e., variable is uninitialized and the variable's
value is said to be undefined(If variable is not initialized, junk values are stored).
*/

    int val(1001);
//OR
    int val1 = int(1001);

/*
! Dynamic Initialization

One additional feature of C++ is that it permits initialization of the variables at
run time. THis is referred to as dynamic initialization. 

Example:
*/
    float avg = val1/val;

/*
! Scope of iteration variable & variables declared within loop and if-else statements.

Earlier, the same variable could not be declared in another loop as the iteration variable.

Now, the iteration variable as well as the variables declared within the loopBody or the body
of if or else statements, cannot be accessed after their scope is over 
OR 
outside the body-of-if or loopBody. 

?    for (char ch = 'a'; ch <= 'z'; ++ch); //ch declared & initialized

?    cout << ch;  <--  ch is not valid here. Its scope was for previous loop, which is over.

?    for (char ch = 'a'; ch <= 'z'; ++ch);  //Correct. No ch variable already defined in this scope.

! Redefining variables (giving it a different value again), in general, is perfectly fine in C++.
! But we cannot declare it again (specify it's data type).
*/
}
#include <iostream>
using namespace std;

/*
? Function call statement
TODO : See notebook for more detailed explanations of Call by Value & Reference

* a. Introduction

A Function call statement is the name of the function along with the parameters it requires. 
It transfers the flow of control to function bodies.

! Example : 
! functionName(paramter1, paramter2);

* When a function call statement is encountered, the control gets transferred to functionBody
* and all its statements are executed. With the execution of a return statement, the control 
* returns to the statement immediately following the function call statement.


* b. Parameters in a function call statement

The parameters expected by a function should be in the exact same order and of the required data type 
in the function call statement as the function definition.
! Example:
    if a function 'power()', expects the first parameter to be a floating point, and the second one 
    to be an integer, their orders should not be interchanged.

A function doesn't expect any argument, is invoked by specifying empty parentheses.
! Example:
    functionName();
*/

//* c. Call by Value 
void swap_values(int variable_1, int variable_2){
    int temp = variable_1;
    variable_1 = variable_2;
    variable_2 = temp;

}
//* d. Call by Reference
void swap_values_corrected(int & variable_1, int & variable_2){ //References of the variables are set up instead of copies
    int temp = variable_1;
    variable_1 = variable_2;
    variable_2 = temp;

//TODO : See notebook for more detailed explanations of Call by Value & Reference 
}
//! A function need not be purely by value or by reference. A function can be invoked 
//! by using mix of the two methods

int main(){
    int num_1 = 2, num_2 = 3;
    cout << "Value of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << "\n\n";

    swap_values(num_1, num_2);
    cout << "Function called by value" << "\n\n";
    cout << "Value of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << "\n\n";
    cout << "The values are unchanged" << "\n\n\n";

    swap_values_corrected(num_1, num_2);
    cout << "Function called by reference" << "\n\n";
    cout << "Value of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << endl;

    cout << "\n\n";
    return 0;
}


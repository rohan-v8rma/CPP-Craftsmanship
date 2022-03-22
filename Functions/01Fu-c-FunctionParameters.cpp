#include <iostream>
using namespace std;
/*
    INDEX
1. Actual and Formal Parameter
2. Default Parameters in Functions
3. Constant Parameters
*/

/*
* 1. Actual and Formal Parameters
Formal Parameters are the parameter names which are included in the function definition.
They are used in specifying how a function mutates its parameters.
For example:
? int new_function(int formal_parameter_1, int formal_parameter_2) {
? ....function_body....   
? }
Here, `formal_parameter_1` and `formal_parameter_2` are the FORMAL PARAMETERS

Actual Parameters are the variable names that are actually passed when calling a function.
For example:
? int main() {
?   int actual_parameter_1 = 10;
?   int actual_parameter_2 = 20;
?   new_function(actual_parameter_1, actual_parameter_2);
? }
Here, `actual_parameter_1` and `actual_parameter_2` are the ACTUAL PARAMETERS


* 2. Default Parameters in Functions

We can assign default values to a function's parameter(s) which is useful in case a matching argument
is not passed in the function call statement. The default values are specified  at the time of
function definition OR function prototyping.

The default value of a parameter is used only when its matching argument is missing in the 'function call statement'.
It sort of looks like variable initialization.

? An important fact to know about default arguments is, any argument cannot have a default value
? unless all arguments appearing on its right have their default values.

? Example :
?    float interest(float principal, float time, float rate = 7.5) --> LEGAL
!   float interest(float principal, float time = 3, float rate) --> ILLEGAL    


* 3. Constant Parameters

Constant Parameters means the function cannot modify these arguments. If we pass constant values to the function,
then the function cannot modify the values as the values are constants.

For instance, the function call:
? find_length("A string")

cannot modify its argument "A string" as it is a constant value. 
But what if the argument being passed is not a constant, it is in the form of a variable such as:

? find_length(string)

where string may have any value. 

? In order to make an argument constant to a function, we can use the keyword 'const' as shown:
? int sum(const int a, const int b);

The qualifier 'const' in function prototype tells the compiler that the function should not 
modify the argument. 
*/ 
int main(){
    
}
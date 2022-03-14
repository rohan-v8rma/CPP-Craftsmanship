#include <iostream>
using namespace std;
/*
    INDEX
1. Default Arguments in Functions
2. Constant Arguments
*/

/*
? 1. Default Arguments in Functions

We can assign default values to a function's parameter(s) which is useful in case a matching argument
is not passed in the function call statement. The default values are specified  at the time of
function definition OR function prototyping.

The default value of a parameter is used only when its matching argument is missing in the 'function call statement'.
It sort of looks like variable initialization.

* An important fact to know about default arguments is, any argument cannot have a default value
* unless all arguments appearing on its right have their default values.

! Example :

    float interest(float principal, float time, float rate = 7.5) --> LEGAL
!   float interest(float principal, float time = 3, float rate) --> ILLEGAL    


? 2. Constant Arguments

Constant Arguments means the function cannot modify these arguments. If we pass constant values to the function,
then the function cannot modify the values as the values are constants.

For instance, the function call:
! find_length("A string")

cannot modify its argument "A string" as it is a constant value. 
But what if the argument being passed is not a constant, it is in the form of a variable such as:

! find_length(string)

where string may have any value. 
* In order to make an argument constant to a function, we can use the keyword 'const' as show

? int sum(const int a, const int b);

The qualifier 'const' in function prototype tells the compiler that the function should not 
modify the argument. Constant arguments are useful when functions are called by reference
*/ 
int main(){
    
}
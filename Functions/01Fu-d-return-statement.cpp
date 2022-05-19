#include <iostream>
using namespace std;
/*
*       INDEX
1. Return Statement intro
2. Returning Non-Integer Values
*/

/*
? 1. RETURN STATEMENT

As invoking a function is important, returning from it is equally important, as, it not only 
terminates the function's execution but also passes the control back to the calling function.

It also returns a value to the calling code.

Even though it is not necessary to have a return statement in a function, most functions
rely on the return statement to stop execution either because a value must be returned
or to make a function's code simpler and more efficient.

? 2. Returning Non-Integer Values

When the return type of a function is not explicitly declared, C++ assumes it to be 'int' type.
However, for the functions returning different data types, explicit type specifier must be given.

That is why C++ makes it necessary to declare functions by providing their prototypes so that 
the type and requirements must be identified befoe the first call is made to it. 

This information is critical if the program is going to run correctly because 
different data types have different size and internal representations. 
It helps the compiler directly point out any error or wrong information being sent or returned.

? 3. Returning by Reference

A function may also return a reference.

!FEW POINTS TO NOTE
a. A function returning a reference can't return a variable local to a function.
b. A function returning a reference can't return a constant value.

Consider the following function:
*/
float& smallest(float& a, float& b){
    if (a < b){
        return a;
    }
    else {
        return b;
    }
}
/*
The return type of above function smallest() is 'float&' i.e., the function returns
a reference to float type of variable.
The above function returns reference to either 'a' or 'b' rather than returning values.

A function call 'smallest(x,y)', will yield a reference to either 'a' or 'b' depending upon 
which one is lesser of the two. 

! This means this function can appear on the left-hand side of an assignment statement since it
! returns a reference to a variable. 
*/
int main(){
    float x = 5, y = 3;
    //! NOTE: we can't pass 'int' data type into a function that requires 'float'. Type upgradation takes place.

    smallest(x, y) = -5;
// The above statement is perfectly fine and it assigns -5 to the lesser of the two, 'x' and 'y'
}
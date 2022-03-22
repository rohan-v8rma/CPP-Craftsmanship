#include<iostream>
using namespace::std;
/*
Recursive functions use something called “the call stack.” 
When a program calls a function, that function goes on top of the call stack.

So suppose we call factorial(4)

This returns (4 * factorial(3)), which is stored in the call stack, while factorial(3) is now called.

Stack:
(4 * factorial(3))

factorial(3) returns (3 * factorial(2)) which is also stored in call stack, while factorial(2) is now called.

Stack:
(3 * factorial(2))
(4 * factorial(3))

factorial(2) returns (2 * factorial(1)) which is also stored in call stack, while factorial(1) is now called.

Stack:
(2 * factorial(1))
(3 * factorial(2))
(4 * factorial(3))

factorial(1) leads us to the base case which is a non-recursive return statement and it returns (1).

The stack looks somewhat like this:

factorial(1) = 1
(2 * factorial(1))
(3 * factorial(2))
(4 * factorial(3))

Now the values are returned in the opposite order as they are one by one popped out of the call stack
and they are returned to the caller function which is factorial(3).

factorial(1) = 1
(2 * factorial(1)) --> this return command returns (2*1) to factorial(2)
(3 * factorial(2)) --> this return command returns (3*2) to factorial(3)
(4 * factorial(3)) --> this return command returns (4*6) to factorial(4)
*/

int factorial(int number) {
    if ((number == 0) || (number == 1)) {
        /*
        This is the BASE case of this recursive function
        The base case is a way to return without making a recursive call. 
        
        In other words, it is the mechanism that stops this process of 
        ever more recursive calls and an ever growing stack of function calls 
        waiting on the return of other function calls.
        */
        return 1;
    }
    else {
        return (number * factorial(number - 1));
        //This is the statement where the RECURSIVE CALL takes place
    };
}

int main() {
    int fact_of_5 = factorial(5);
    printf("Factorial of 5 is %d\n", fact_of_5);

    return 0;
}
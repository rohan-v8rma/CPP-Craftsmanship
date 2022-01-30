#include <iostream>
using namespace std;

/*
! While loop in C++


While loop is an entry controlled loop, whose syntax is:

? while (testExpression){
?   loopBody;
? }
where the loopBody may contain a single statement, a compound statement or an empty statement.

* The loop iterates while the testExpression evaluates to True.
* When the testExpression evaluates to False, the program control passes to the line after the 
* loopBody code.

! In a while loop, a loop control variable should be initialized before the loop begins as an 
! unitialized variable cannot be used in an expression.

The loop variable should be updated inside the whileBody.
*/
int main(){

//? Program for calculating factorial using while loop

    int iter_var = 1;
    int fact_num;
    long long int factorial = 1;

    cout << "Enter an integer : ";
    cin >> fact_num;
    cout << '\n';

    while(iter_var <= fact_num){
        factorial *= iter_var;
        iter_var ++;
    }
    
    cout << "The factorial of " << fact_num << " is " << factorial;

/*
! Variations in a while loop

A while loop can have several variations. It can be an 'empty' loop or an 'infinite' loop.

* An empty loop does not contain any statement any statement in it's body other than
* the null statement. For instance, 

? wait = 0;
? while (++wait < 10000); <-- semi-colon to indicate null statement

The above given is a time delay loop. But this time delay is miniscule due to increase
in processing power. 

A while loop can be infinite if you forget to write the update expression inside its 
body. For instance,

? i = 0
? while (i < 100){
? cout << i; <--- no increment expression   
? } 
*/


    cout << "\n\n";
    return 0;
}
#include <iostream>
using namespace std;

int main(){

/*
For loop is an exit controlled loop as well as,
! an entry controlled loop (if suppose 'int i = 0' is the initialization expression and 'i <= -1' is the test
! expression. The loop won't even execute once.)


* The for loop in C++ has all its loop-control elements gathered in one place (on top of the loop),
* while in the other loop construction of C++, they (top-control elements) are scattered about the
* program.

? The syntax of for loop is: 
?   for(initializationExpression(s); testExpression; updateExpression(s)){
?       loopBody;
? }

An example of a for loop (used to print first 10 natural numbers and their sum) : 
*/ 
    cout << '\n';
    int sum = 0;
    
    for(int natural_no = 1; natural_no <= 10; natural_no ++){
        sum += natural_no;
        cout << natural_no << ' ' << sum << '\n';
    }
//For loop to give value of a function as output

    for(int x = -10; x <= 10; x += 2){
        cout << (x * x + 1.5 * x + 5)/(x - 3) << '\n';
    }     
/*
! Value of loop (iteration) variable at the end of for loop 

A for loop repeats as long as test condition evaluates to true. The loop 
terminates only when the condition evaluates to false.

For example, in the following loop:

? for (i = 0, i < 5, i++){
?   loopBody;   
? }
The value of loop variable i will be 5 at the end of this for loop because 
value 5 will cause i < 5(i.e., 5 < 5 here) condition as false.

! Different types of increment/decrement operators

Whatever increment or decrement method we use(i++ or ++i), it doesn't matter 
unless it is being used in the same expression.
For example, if we use the prefix or postfix operators on a variable i being
added to another variable sum, in two instances:

? sum += i++;
OR
? sum += ++i;

* In the first case, the value of i will first be used then changed but in the second 
* case it will first be changed then used.

So, we will obtain different values of sum at the end of all iterations of the loop.

And, as far as the method below is concerned, it is an expression in itself, so it will
also behave as if i++ or ++i as used independently and their value is used in expressions
later after their values have been changed.

? i += 1

! So, the conclusion is that i++, ++i or i += 1 when used as update expressions independently, 
! function in the exact same way.

TODO Also, in for loop, the update expression runs after one iteration of the loop has taken place.



! Processing efficiency of prefix over postfix

When you have to simply increment or decrement value of a variable by 1 using ++ or -- operator
and you are not using the value of this variable in another expression while incrementing/decrementing
it, then prefer prefix over postfix. 
! That is, go for ++i instead of i++. 
! The reason being that when used alone, prefix operators are faster executed than postfix. 

Write a loop like:

? for (int i = 1; i < 10; ++i)
rather than
? for (int i = 1; i < 10; i++)



! Optional Expressions

In a for loop, all three expressions, initialization expression, test expression and update expression
are optional i.e., you can skip any or all of these expressions.

For example, if we have already initialized the loop variables and we don't want to write the 
initialization expression, we can do so in the following way :

? for(; i < 10; ++i)

Note that we still have to include the first semicolon, even if we skip the initialization expression



! Infinite Loop

Although any loop statement can be used to create an infinite (endless loop), yet 'for' is traditionally
used for this purpose. An infinite for loop can be created by omitting the test-expression as shown below:

? for(j = 25; ; j++)
OR
? for( ; ; )



! Empty Loop

If a loop does not contain a statement in its loop-body, it is said to be an empty loop. In such 
cases, a C++ loop contains an empty statement i.e., a null statement.

? for(int j = 20; j <= 10; ++j) ;  <-- for loop just contains a null statement('for' loop ends here)

So, even if a codeBlock is placed after the above 'for' loop in braces {}, it will not be a part
of the for loop as it ended with the semicolon.

* An empty for loop has its applications in pointer manipulations where we need to increment or 
* decrement pointer position without doing anything else.

*/


    cout << '\n';
    return 0;
}
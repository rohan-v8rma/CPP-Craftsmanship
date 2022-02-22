#include <iostream>
using namespace std;

/*
            INDEX
            
1. if statement of C++
    a. Syntax
    b. Examples of 'if' statements
2. Conditional Operator(?:)
*/

/*
1. if statement of C++

Syntax:
if (testCondition){
    codeBlock;
}

If we put semicolon after the testCondition, the 'if' statement 
would end there. The block or statements following are no more 
part of 'if' in such cases.
*/


int x, y, z, a, b, c; 
/*
These are global variables. If in case they were defined within a function,
they would have become local to that function.
*/

//Some examples of if statements 

//Remember that the type in front of the function tells us the dataType of the value it will return
// |
// |
// | 
// V
void example1(){
    cout << "Z? : ";
    cin >> z;
    if ((z >= 10) && (z <= 20))
    {
        cout << "z is between 10 and 20";
    }
    /*
    if (10 <= z <= 20){
        cout << "z is between 10 and 20";
    }
    We can't use this method as it this stye of conditions don't work 
    in C++. We can only combine conditions using &&(and), ||(or).
    It will give a faulty output.
    */
}
void example2(){
    a = 2;
    cout << "'a' is " << a << '\n';
    if (a){ //This is a way to check if the truth value of a variable is 1 or 0.
        cout << "'a' has truth value 1";
    }
    else{
        cout << "'a' has truth value 0";
    }
}
int main(){
/*
2. Conditional '?:' Operator

C++ offers a conditional '?:' operator that stores a value depending upon a condition.
This operator is ternary operator i.e., it requires 'three' operands.

It replaces the following code :-
    if (testCondition){
        expression1
    }
    else {
        expression2
    };

The general form of conditional '?:' operator is as follows.

    testCondition ? expression1 : expression2 

It works in the same way as the above given form of if does i.e., testCondition is evaluated, 
if it is 'true', 
expression1 gets executed (i.e., its value becomes the value of entire expression),
otherwise expression2 gets executed (i.e., its value now becomes the value of the entire 
expression).
*/
    int b, c;
    b = 12;
    c = 10;
//This is how the conditional operator works
    int a = b > c ? b : c;
/*
This assignment statement, will see if 'b' is greater than 'c', and assign 'b' to 'a' if 'TRUE'.
and if 'FALSE', assign 'c' to 'a'.
In a way, we are assigning the larger number to 'a'.

Another example of using Conditional Operator,
*/
    int customers = 100;
    int sales = 7000;
    int bonus = ((customers * 100 + sales) > 15000) ? 250 : 50;
//This method of evaluation is deciding the bonus of an employee, based on his sales and customers served.
    cout << "Bonus is : " << bonus << '\n';
    example1();
    
    example2();
    cout << "\n\n";
    return 0;
}



#include <iostream>
using namespace std;

int main(){
    char button;
    cout << "Press a button : ";
    cin >> button;
//Code that switch statement will replace
    if ((button == 'a') || (button == 'A')) {
        cout << "Hello";
    }
    else if ((button == 'b') || (button == 'B')) {
        cout << "Hola";
    }
    else if ((button == 'c') || (button == 'C')) {
        cout << "Ciao";
    }
    else if ((button == 'd') || (button == 'D')) {
        cout << "Namaste";
    }
/*
Switch statement is a multi-branch selection statement provided to us by C++.

This statement successively tests the value of an expression against a list of integer 
or character constants.
When a match is found, the statements associated with that constant are executed.

It is a substitute for long and repetitive if-else-if statements.

The syntax of a switch statement is as follows:
*/

    switch (button) //<-- This is the expression that is evaluated and whose value is checked with corresponding cases.
    {
        case 'A':
        case 'a': //? Multiple cases having one output
            cout << "Hello";
            break;
        case 'B' : 
        case 'b' : 
            cout << "Hola";
            break;
        case 'C' :             
        case 'c' :
            cout << "Ciao";
            break;
        case 'D' :
        case 'd' : // <-- The character written after 'case' is one of constant against which the expression is compared.
            cout << "Namaste";
            break;
        default :
            cout << "I am still learning more.";
            break;

/*
? The expression is evaluated and its values are matched against the values of the constants specified in the 
? 'case' statements.
* When a match is found, the statement sequence associated with that 'case' is executed until the 'break' statement 
* or the end of 'switch' statement is reached. 
*/

/*
!   FALL THROUGH
* If a case statement does not include a break statement, then the control continues right on the next case
* statement(s) until either a 'break' is encountered or end of switch is reached.
* This situation (i.e., missing break in case statement) is called 'fall through'.
!   DEFAULT STATEMENT
* The default statement gets executed when no match is found. It is optional and, if it is missing,
* no action takes place if all matches fail.
*/
/*
A switch statement can have upto 257 case statements but we should limit them to a smaller amount, 
for the sake of efficiency.

A case statement cannot exist by itself outside of a switch statement. 

The break statement is one of the C++ jump statements. When a break statement is encountered 
in a switch statement, program execution jumps to the line of code following the switch statement,
i.e., outside the body of a switch statement.
*/

/*
!   If Statement vs. Switch Statement

* The switch statement differs from if statement in that 'switch' can only test for equality whereas
* 'if' can evaluate a relational or logical expression i.e., multiple conditions.
* (Switch statement can only work for equality comparisons.)


The switch statement selects its branches by testing the value of same variable 
(against a set of constants) whereas the if-else construction lets you use a series of expressions
that may involve unrelated variables and complex expressions.


The if-else is more versatile of the two statements. For instance, if-else can handle ranges whereas
switch cannot. Each switch case label must be a single value.


No two case labels in the same switch can have identical values. But, in case of nested switch
statements, the case constants of the inner and outer switch can contain common values.
! Nested switch statements can be included in the lines following the colon of a case statement

If-else can handle floating point tests also apart from 'integer' and 'character' tests whereas a 
'switch' statement cannot handle floating-point tests. The case labels of switch must be an 
integer (which includes char).
If character constants are used in the switch statement, they are automatically converted to their
integers, i.e., their equivalent ASCII codes.


The switch case label value must be a constant. So, if two or more variables are to be compared,
use if-else.

The switch statement is the more efficient choice in terms of code used in a situation that suppports 
the nature of switch operation (testing a value against a set of constants).


A switch statement only evaluates the expression once, while the if statement will evaluate it repeatedly
until it finds a match (this example considers equality evaluation).
Thus, a switch is an efficient choice in such a situation.


! Although it is not necessary to put a break after the last case statement in a switch, since control will leave
! the statement anyway, yet it should be done to avoid forgetting the break when you add another case statement 
! at the end of a switch
*/
}
    cout << "\n\n";
    return 0;
    
}
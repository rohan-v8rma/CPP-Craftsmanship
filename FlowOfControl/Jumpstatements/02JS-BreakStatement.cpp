#include <iostream>
using namespace std;
/*
    INDEX
1. Break Statement
2. Functioning of break statement in switch-case
3. Examination of a loop variable
*/
int main(){
/*
* Break Statement

The break statement enables a program to skip over part of the code. 

A break statement terminates the smallest 'while', 'do-while', 'for' or 'switch'
statement enclosing it.

Execution resumes at the statement immediately following the body of the terminated statement.
*/
    float a, b;
    
    while (true){
        cout << "Enter dividend : ";
        cin >> a;
        cout << "\nEnter divisor : ";
        cin >> b;
        if (b == 0){
            break;
        }
        else{
            cout << "\nThe output is : " << a/b << "\n\n";
        }
    }
    cout << "\nProgram over!"; 
/*
If in case division by zero is about to take place, while loop is ended using break statement
and the program control is transferred to the above statement.
*/

/*
* Functioning of break statement in switch-case

A 'break' statement used in a 'switch' statement will affect that switch i.e., 
it will terminate only the very switch it appears in.

! It does not affect any loop the switch happens to be in.
*/


/*
* Examination of a loop variable

A loop variable remains in scope provided it has been declared prior to loop even after 
the loop is terminated either on maturation or prematurely.

By examining the value of this loop variable, it can be told whether the loop has been 
terminated prematurely.

The following code fragment illustrates it:
*/
    int iter_var = 0; //? iteration variable declaration prior to loop
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    cout << '\n';

    for ( ; iter_var < 100 ; ++iter_var){
        cout << ch << '\n';
        if (ch == 'q'){
            break;
        }
        else{
            ch++;
        }
    }
    if (iter_var < 100){
        cout << "\nLoop has ended prematurely.";
    }
    else{
        cout << "\nNormal termination has taken place.";
    }

/*
! If the test expression of the loop is still true even after the termination of the loop,
! the loop has executed a 'break' statement.
*/
    cout << "\n\n";
    return 0;
}
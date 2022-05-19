/*
* FUNCTION PROTOTYPING or DECLARATION

In some particular applications, we have to write our user defined functions after the main() function.
Be it, for organizing or some other reason. 

In that case, to avoid getting a scope error that the user defined functions aren't recognized, 
FUNCTION PROTOTYPING is used.

TODO: See 09B-Scope.cpp for explanation about LOCAL and GLOBAL function prototypes.
*/
#include <iostream>
using namespace std;

//FUNCTION PROTOTYPE

int sum(int a, int b);
/*
* The above is a function prototype, meaning it is a definition of a function that tells the compiler 
* what kind of value it returns and how many as well as what type of parameters it accepts

! Due to the nature of the above statement, comparisons can be drawn between the declaration of a variable and
! function prototyping. 
! In the same way that in variable declaration, the compiler is made aware of the presence of a variable of a certain
! name, in function prototyping, the compiler is made aware of the presence of a function of a certain name, which is why
! FUNCTION PROTOTYPING can also be referred to as FUNCTION DECLARATION.

Function DEFINITION and variable initialization are similar in the sense that in function definition the actual body of statements
of the function is specified and in variable initialization, an initial specific value is assigned to the variable.

? As we can see, the names of the parameters in the prototype and the actual function definition need not match,
? only the data types of the parameters and their quantity should match.

? The return types and the function names should also match in the function PROTOTPYE and DEFINITION


*/

int main(){
    
    int num1, num2;
    cout << "Enter the first number\n";
    cin >> num1;
    cout << "Enter the second number\n";
    cin >> num2;
    cout << "The sum is " << sum(num1, num2); 
    
    cout << "\n\n";
    return 0;
}

//FUNCTION DEFINITION

int sum(int first_num, int second_num){
    int sum_of_num = first_num + second_num;
    return sum_of_num;    
}
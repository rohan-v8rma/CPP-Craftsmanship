#include <iostream>
#include <math.h>
using namespace std;

/*
1. Like 'for-else' or 'while-else' in python in which 'else' block was executed on 
successful completion of iteration of the loop, we can use exit() function in C++ to end 
the program in case we don't want the body after the loop to be executed so, in a way we 
get that same functionality.

! Python (prime number checker):

? num = int(input("What is the number to check for prime? \n>>> "))

? for divisor in range(2, num):
?     if (num % divisor == 0):
?         print("Not a prime number.")
? else:
?     print("It is a prime number.")

! C++ --->
*/

int main(){
    int num;
    int divisor = 2;

    cout << "What is the number to check for prime : ";
    cin >> num;
    cout << '\n';
    for( ; divisor < num ; ++divisor){
        if (num % divisor == 0){
            cout << "Not a prime number.\n\n";
            exit(0);
        }
    }
    cout << "It is a prime number.";

/*
2. The update expression specified in 'for' loop, is executed after one iteration 
of the loop has taken place. 
*/
}
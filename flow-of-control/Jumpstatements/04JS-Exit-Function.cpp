#include <iostream>
using namespace std;

int main(){
/*
* Exit() function

This function causes the program to terminate as soon as it is encountered, no matter
what appears in the program listing.

The exit() function as such does not have any return value. 

Its argument, which is 0 in the above program, is returned to the operating system.
This value can be tested in batch files where ERROR LEVEL gives you the return value
provided by exit() function.

Generally, the value 0 signifies a successful termination and any other number indicates
some error.
*/

    int num;
    int divisor = 2;
    
    cout << "Enter a number to check for prime : ";
    cin >> num;
    cout << '\n';
    for( ; divisor < num ; ++divisor){
        if (num % divisor == 0){
            cout << "Not a prime number.\n\n";
            exit(0);

        }
        else{
            continue;
        }
    }
    cout << "It is a prime number.";

    cout << "\n\n";
    return(0);
}
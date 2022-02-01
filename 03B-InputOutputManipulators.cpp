#include <iostream>
#include <iomanip>

using namespace std;

int main(){
/*
Formatting output is important in the development of output screens,
which can be easily read and manipulated. 

C++ offers the programmer several I/O manipulators. 
*/

/*
1. setw() manipulator

The setw manipulator sets the width of the field assigned for the output.
It right aligns the text following it in the space given it to it as an
argument.
*/

    cout << setw(6) << "Hello";
/* 
This will print 'Hello' with one space to the left, i.e., right align
it in the space of 6 characters.
*/ 

/*
2. setprecision() manipulator

This output manipulator basically is a rounding function in which you 
can pass the number of significant digits you want in the resulting
output.

For example:
*/
    cout << setprecision(5) << 123.456;
/*
This will round 123.456 to 123.46 as only 5 significant digits are 
required. 
*/

    cout << "\n\n";
}
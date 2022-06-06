#include <iostream>
using namespace::std;
/*
The `new` operator in C++ is extremely useful.

The new operator denotes a request for memory allocation on the Free Store. 
If sufficient memory is available, a new operator initializes the memory and 
returns the address of the newly allocated and initialized memory to the pointer variable. -*


*/

int main() {
    /*
    ? Using `new` to allocate memory for an integer (along with implicit zero initialization) 
    ? and assign it to an integer pointer.
    */
    int *firstIntegerPointer;
    firstIntegerPointer = new int;
    cout << *firstIntegerPointer << "\n"; //This shows that integer was ZERO-INITIALIZED

    //? Using `new` to allocate memory for an integer along with value initialization
    int *secondIntegerPointer;
    secondIntegerPointer = new int(5); 
    /*
    Notice how when we place ROUND brackets, it is taken as the value for intializing 
    the integer that the `firstIntegerPointer` is made to point to
    */

    cout << *firstIntegerPointer << "\n";

    //? Using `new` to allocate memory for an integer array and assign it to an integer pointer 
    int *thirdIntegerPointer;
    thirdIntegerPointer = new int[5];
    /*
    When we place SQUARE brackets, it is taken as the length of the array we want to create.
    The `thirdIntegerPointer` is then made to point to the first element of this newly created array.
    */

    return 0;
};

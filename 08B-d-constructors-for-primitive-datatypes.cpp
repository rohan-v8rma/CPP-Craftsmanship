#include <iostream>

/*
We know that structures and unions which are a part of C, have constructors.
Classes, which are a part of C++, have constructors.

Built-in types do not have constructors, but they can be value-initialized 
using the same syntax as class types with default constructors. 

TODO: Read about value initialization from the README file of this repository.

For example:
*/
int main() {
    int integer = int(); //this initializes the integer to 0
    printf("%d \n", integer);

    /*
    ! NOTE that we don't use the syntax: 
    ? int integer(); 
    ! over here because that defines a prototype of a function named 'integer'.
    */

    float floatingPt = float();
    printf("%f \n", floatingPt);

    //? We can also initialize with a particular value using this form

    int integer_1 = int(10);
    //OR
    int integer_2(15);

    return 0;
}

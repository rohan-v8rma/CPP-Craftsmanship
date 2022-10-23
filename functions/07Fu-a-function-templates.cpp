#include <iostream>
using namespace::std;

template <typename SomeType>

/*
A function template is a function-like definition that is used to generate 
one or more overloaded functions, each with a different set of actual types. 

This is what will allow us to create functions that can work with many different types.
*/

void print(SomeType value_to_be_printed) {
    cout << "The value is " << value_to_be_printed << "\n";
}

/*
This function is considered as an overloaded function by the compiler,
because the function performs differently (prints different types)
based on what input it is given (different function signatures).
*/


int main() {
    print("hello");
    print(9.2);
    print('a');
    print(10);
}
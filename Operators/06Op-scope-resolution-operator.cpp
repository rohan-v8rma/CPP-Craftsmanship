#include <iostream>
using namespace :: std;

/*
* In C++, scope resolution operator is :: 

It is used for following purposes:

! 1) To define a member function outside a class
    
    Functions should be DECLARED (prototype declaration) inside the class to bound it to the class 
    and indicate it as its member but they can be DEFINED (writing the working code) outside of the class.

    To define a function outside of a class, scope resolution operator :: is used.

* 2) To access a global variable when there is a local variable with same name:
*/

class Parent {
    
    public:
        int sample_variable;

        void defining_sample_variable(int value_argument) {
            
            sample_variable = value_argument;

            cout << "The value of the sample variable is:" << sample_variable << endl;
        };

        void printing_function(int integer); //! Declaring prototype of function to be defined outside class
};

//! 1) Defining member function outside a class

void Parent :: printing_function(int integer) {
    cout << sample_variable;
}

//* 2) Accessing a global variable when there is a local variable with same name

char variable[20] = "global variable";

int main() {
    
    char variable[20] = "local variable";

    cout << variable << endl;
    cout << ::variable << endl; //accessing the global version of the local variable present
    
    return 0;
}
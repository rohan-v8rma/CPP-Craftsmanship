#include <iostream>
using namespace :: std;

/*
                        INDEX
A. Scope Resolution Operator and its differences from (.) operator
B. Uses of Scope Resolution Operator
    Concept
    1) To define a member function outside a class
    2) To access a global variable when there is a local variable with same name
    Practical Examples
    1) To define a member function outside a class
    2) To access a global variable when there is a local variable with same name
*/
/*
* A. In C++, scope resolution operator is :: 

The dot (.) is used to access members of an object. 
The double colon (::) is used to access members of a namespace or a class.

? B. It is used for following purposes:

! 1) To define a member function outside a class
    
    Functions should be DECLARED (prototype declaration) inside the class to bound it to the class 
    and indicate it as its member but they can be DEFINED (writing the working code) outside of the class.

    To define a function outside of a class, scope resolution operator :: is used.

* 2) To access a global variable when there is a local variable with same name:
*/

class Parent {
    
    public:
        int sample_variable;


        //! Declaring prototype of function to be defined outside class
        void printing_function(int integer); 


        void defining_sample_variable(int value_argument) {
            
            sample_variable = value_argument;

            cout << "The value of the sample variable is:" << sample_variable << endl;
        };
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
#include <iostream>
using namespace std;

//! NOTE that this code is erroneous and hence can't be run

class BaseClass1 {
    public:
        void greet() {
            cout << "Hello beautiful" << endl;
        };
};

class BaseClass2 {
    public:
        void greet(string name) {
            cout << "Hello " << name << endl;
        };
};

class DerivedClass : public BaseClass1, public BaseClass2 {

    /*
    Note that inheriting two function definitions from two different classes
    is not the same as having two function definitions written in the derived class definition
    itself. This is in regard to scoping.

    Because if the two functions had been declared in the Derived Class itself,
    they would've formed an OVERLOAD SET.

    But in this case, Name Lookup occurs first and the compiler tries to figure out which BASE class
    `greet` member function belongs. But it finds that the function call is AMBIGUOUS because 
    a member function with the name `greet` is present in both the classes.

    The compiler stops EXECUTION there, irrespective of the member function SIGNATURES.
    */
};

int main() {
    DerivedClass sampleDerived; 
    sampleDerived.greet();
    sampleDerived.greet("rohan");
    
    return 0;
}
#include <iostream>
using namespace::std;

class Base {
    public: 
        Base() {
            cout << "Constructor of Base.\n";
        };
        ~Base() {
            cout << "Destructor of Base.\n";
        };
};

class Derived : public Base {
    public: 
        Derived() {
            cout << "Constructor of Derived.\n";
        };
        ~Derived() {
            cout << "Destructor of Derived.\n";
        };
};

int main() {
    /*
    Notice the sequence of Constructor and Destructor calls according to the `cout` statements
    when we create an instance of `Derived`.
    */
    Derived derivedInstance;
    /*
    It is seen that the Derived class instance is created later, and destroyed first, because it is a subclass.

    If we destroy the Base class instance first, the memory occupied by the Derived class instance will
    become junk memory because it inherits members of BaseClass but it also has some members of its own.
    */
    return 0;
}
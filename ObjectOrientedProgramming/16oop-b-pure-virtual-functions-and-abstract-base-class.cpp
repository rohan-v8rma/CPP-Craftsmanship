#include <iostream>
using namespace::std;

/*
* A pure virtual function simply acts as a placeholder that is meant to be redefined by derived classes.

To create a pure virtual function, rather than define a body for the function, 
we simply assign the function prototype the value 0.

When we add a pure virtual function to our class, we are effectively saying, 
? “it is up to the derived classes to implement this function”.

Using a pure virtual function has two main consequences: 

First, any class with one or more pure virtual functions becomes an ABSTRACT BASE CLASS, 
which means that it can not be instantiated! 
? Usually, BASE classes whose objects are too general to be useful (HENCE NO NEED FOR INSTANTIATION FUNCTIONALITY), 
? are considered as candidates for becoming abstract classes.

Second, any derived class must define a body for this function, 
or that derived class will be considered an abstract base class as well.

*/

class Base {
    public:
        virtual void display() = 0; //! `pure specifier` syntax (= 0)
        Base();
};

/*
The pure virtual function can still have a definition as seen below, but this is useless code
because a function call will NEVER be resolved to it, since `Base` can't be instantiated
so no object will be present for calling this member function.
Classes derived from Base all need to have their own definitions for `display` which will
be called, and if they don't have a definition of `display`, they themselves will be considered
as abstract classes.
*/

void Base::display() {
    cout << "hello" << endl;
}

class Derived : public Base {
    public:
        Derived(){};
};

int main() {
    //Derived d; 
    /*
    ! This gives an error since the pure virtual function doesn't have a definition in the
    ! `Derived` class, so `Derived` also becomes an abstract base class.
    */
    return 0;
}
#include <iostream>
using namespace::std;

/*
* Continuing from 14oop-pointer-to-derived-class.cpp,
where we saw that if a `base class pointer` pointed to a
`derived class`, we could only access the members that the
`derived class`, inherited from the `base class`

? Virtual keyword makes the method of derived class, which
? has a method of the same name defined in the base class,
? accessible through the `base class pointer`.

Virtual constructors aren't allowed. But virtual destructors are allowed.

When destructor is made virtual, the derived class object alone can 
be released.

? Virtual keyword is usually used in making of library functions
*/

class BaseClass {
    public:
        int base;
        
        virtual void show() {
            cout << "Show base\n";
        };
};

class DerivedClass : public BaseClass {
    public:
        int derived;

        virtual void show() {
            cout << "Show derived\n";
        };
};

int main() {
    BaseClass baseInstance;
    DerivedClass derivedInstance;
    
    BaseClass *baseClassPointer;
    
    baseClassPointer = &baseInstance;
    //baseClassPointer points to 'baseInstance'
    baseClassPointer -> show();
    
    baseClassPointer = &derivedInstance;
    //baseClassPointer points to 'derivedInstance'
    
    
    baseClassPointer -> show();
    /*
    ? Even when the function `show()` is made virtual, 
    ? we can still use the scope resolution operator to 
    ? access the definition of `show()` present in the `BaseClass
    */
    baseClassPointer -> BaseClass::show();

    return 0;
}
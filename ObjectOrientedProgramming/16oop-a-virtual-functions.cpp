#include <iostream>
using namespace::std;
/*
                    INDEX
1. Continuing from 14oop-pointer-to-derived-class.cpp...
2. What does the `virtual` keyword do?
3. How do virtual functions help in late binding?
*/

/*
* 1. Continuing from 14oop-pointer-to-derived-class.cpp...

where we saw that if a `base class pointer` pointed to a
`derived class`, we could only access the members that the
`derived class`, inherited from the `base class`.

* 2. What does the `virtual` keyword do?

? Virtual keyword makes the method of derived class, which
? has a method of the same name defined in the base class,
? accessible through the `base class pointer`.

* 3. What is the significance of virtual functions?

It's like creating a blueprint for all the derived classes.

It's declared in the base class so you know that all classes 
which inherit will override it to achieve their custom functionalities.

* 4. How do virtual functions help in late binding?

Upon adding this virtual keyword, the binding of the function call
with a particular function definition happens at RUN-TIME

Its not as if the logic for which function definition would be bound to
the call can only be figured out run time. We can easily predict the 
output by looking at the code.

? But what happens in actuality
is that compiler binds the object with the function call only at run-time.

* 4. Rules for virtual functions

They cannot be static

Virtual functions are accessed by object pointers

Virtual functions can be a friend of another class

A virtual function in the base class might not be used.

If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
 

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

        void show() {
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
#include <iostream>
using namespace::std;

/*
            INDEX
* 1. How does a pointer of type `BaseClass`, when storing the address of a `DerivedClass` object, not throw an error?
* 2. Accessing member functions of `BaseClass` using `baseClassPointer` which points to instance of `DerivedClass`

*/

class BaseClass {
    int baseClassMember;

    public:
        //Default Constructor
        BaseClass() {
            baseClassMember = -100;
        };
        
        void displayBase() {
            cout << baseClassMember << endl;
        };    
        
        void test() {
            cout << "This is BaseClass member function.\n";
        };
};

class DerivedClass : public BaseClass {
    public:
        int derivedClassMember;

        void test() {
            cout << "This is DerivedClass member function.\n";
        };
};

int main() {
    BaseClass *baseClassPointer;

    DerivedClass derivedInstance;
    
    baseClassPointer = &derivedInstance;

    /*
    * 1. How does a pointer of a BaseClass type, when storing the address of a DerivedClass object, not throw an error?

    We have made a BaseClass pointer point to an instance of the DerivedClass. This is not 
    throwing an error because `derivedInstance` is actually a type of BaseClass,
    ! albeit with some extra members of its own. 

    So, we can use this pointer to only access members of BaseClass, not those
    that are declared in DerivedClass.
    */
    
    //? This code is fine (because we are accessing a member of BaseClass using a pointer of type `BaseClass`)
    baseClassPointer -> displayBase();
    
    //! Erroneous code (because we are trying to access a member of DerivedClass using a pointer of type `BaseClass`)
    //// baseClassPointer -> derivedClassMember;


    /*
    * 2. Accessing member functions of `BaseClass` using `baseClassPointer` which points to instance of `DerivedClass`

    Above, we have defined the member function `test()` in both BaseClass and DerivedClass.

    When we try to access `test()` member function using the baseClassPointer pointing 
    to the instance of the Derived Class, name lookup is only done among the members which 
    have been inherited from `BaseClass` BY `derivedInstance` because we are using pointer
    of type `BaseClass`. 

    ? Which is why when we try to run the below code, the function call is resolved to
    ? the definition of `test()` inside the BaseClass and NOT the DerivedClass.
    */

    baseClassPointer -> test();

    return 0;   
}
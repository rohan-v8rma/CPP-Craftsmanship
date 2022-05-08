#include <iostream>
using namespace::std;

/*
* Friend Class

A friend class can access PRIVATE and PROTECTED members of other class in which it is declared as friend. 
It is sometimes useful to allow a particular class to access private members of other class.


* Important points about friendship

- Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
- Friendship is not inherited
*/

class PrimaryClass {
    private: 
        int private_var_primary;
    public:
        void variable_access_fn(class SecondaryClass &example_secondary_class) { 
            //! This variable access function has to be a public member function to allow its usage
            /*
            we put an ampersand (&) over here because in order to change 
            the original copy of the private data member, we need to pass the object by reference. 
            
            In C++, pass by reference is done by adding an ampersand to the name of the variable `int &<variable-name>`.
            unlike in C, where we wrote the pointer data type `int *<variable-name>` as an argument. 
            */
            example_secondary_class.private_var_secondary = 10;
            cout << example_secondary_class.private_var_secondary;
        };
};

class SecondaryClass {
    friend class PrimaryClass;

    private: 
        int private_var_secondary;
};

int main() {
    class PrimaryClass one;
    class SecondaryClass two;

    one.variable_access_fn(two);

    return 0;
}
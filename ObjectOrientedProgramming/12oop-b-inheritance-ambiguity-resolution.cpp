#include <iostream>
using namespace::std;

/*
! REFERENCE NOTE:

Note that this problem is different from that of function overloading because the scopes of the functions are
different over here, which leads to easy differentiation by the compiler in some cases, 
on which method to call in case of inheritance.

NOTE that it is anyways bad practice to keep functions with the same name in derived classes but
it is explained here for the sake of understanding AMBIGUITY RESOLUTION.
*/

//* First Case of AUTOMATIC Ambiguity Resolution

class BaseClass {
    public : 
        int base;
        void greet() {
            cout << "Hello World" << endl;
        };

};

class DerivedClass1: public BaseClass {
   
    /*
    This class DOES have a locally defined `greet()` method and it inherits
    the member function `greet()` from BaseClass as well.
    ! However, the derived class overrides the inherited function definition

    ? But, we can run the definition of `greet` inherited from BaseClass by using
    ? the scope resolution operator (::)
    */

    public :
        void greet() {
            cout << "Hello World my beautiful people" << endl;
        };     
};

class DerivedClass2: public BaseClass {
        /*
        Since this class doesn't have a locally defined `greet()` method, 
        whenever we call the `greet()` method using an object of this class,
        the version of `greet()` inherited from BaseClass is run.
        */
};



//* Second Case of MANUAL Ambiguity Resolution

class BaseClass1 {
    public:
        void punch() {
            cout << "Normal punch" << endl;
        };
};

class BaseClass2 {
    public:
        void punch() {
            cout << "Falcon punccchhh!!" << endl;
        };
};

class DerivedClass : public BaseClass1, public BaseClass2 {
    /*
    Since DerivedClass inherits two definitions of the punch method,
    one from BaseClass1 and one BaseClass2, the compiler is unable to resolve 
    which function definition to match the function call with.

    This is because now instead of 
    one definition being in the LOCAL SCOPE and one definition in the OUTER SCOPE like in the first case, 
    both base classes have a function name punch().
    
    */

   //? Manually Resolving the ambiguity
   public:
        void punch() {
            BaseClass2::punch();
        };

};

int main() {
    DerivedClass first;
    first.punch();
    
    return 0;
};
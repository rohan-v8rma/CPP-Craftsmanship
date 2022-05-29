#include <iostream>
using namespace std;

/*
* 1st set of Base and Derived class.

Here, Base class has all data members 
that should be allocated memory, 
upon instantiation of the class, 
! set as PRIVATE.
*/
class BasePrivate {
    private:
        int a;
        float b;
    public:
        BasePrivate() {
            cout << "Constructor of BasePrivate.\n";
        };
};

class DerivedPrivate : private BasePrivate {
    public:
        DerivedPrivate() {
            cout << "Constructor of Derived.\n";
        };
};

/*
* 2nd set of Base and Derived class.

Here, Base class has all data members 
that should be allocated memory, 
upon instantiation of the class, 
? set as PUBLIC.
*/

class BasePublic {
    public:
        int a;
        float b;
        
        BasePublic() {
            cout << "Constructor of BasePrivate.\n";
        };
};

class DerivedPublic : private BasePublic {
    public:
        DerivedPublic() {
            cout << "Constructor of Derived.\n";
        };
};

int main() {
    DerivedPrivate obj_private;
    DerivedPublic obj_public;

    /*
    In theory, the MEMORY OCCUPIED by both these objects should be different because,
    
    private data members of the BasePrivate class can't be accessed 
    using objects of DerivedPrivate so one would naturally think they wouldn't 
    be allocated memory as it would be wasteful.

    However, it is simpler and more consistent to group those data members 
    with the derived class and allocate memory to them irrespective of the access modifier.

    This is why the objects of both these derived classes occupy the same amount
    of memory.
    */

    cout << "Size of derived class object whose base class has data members set as PRIVATE: " 
         << sizeof(obj_private) 
         << "\n";
    
    cout << "Size of derived class object whose base class has data members set as PUBLIC: " 
         << sizeof(obj_public) 
         << "\n";

    return 0;
}

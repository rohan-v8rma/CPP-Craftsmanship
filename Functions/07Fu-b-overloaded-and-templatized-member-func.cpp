#include <iostream>
using namespace::std;

/*
? What we see below is a function that has been both overloaded and templatized

Now, when we call this a function, there are a certain rules for deciding which
function definition the call would be resolved to.
*/


template <typename T>
void func(T passed) {
    cout << "This is the templatized function definition" << endl;
};

void func(int passed) {
    cout << "This is the integer overloaded function definition" << endl;
};

void func(float passed) {
    cout << "This is the float overloaded function definition" << endl;
};

int main() {
    
    func(4);
    /*
    Since there is a DIRECT match in function signature of this function call,
    it is resolved to the INTEGER overloaded function definition.
    */
    
    func('c');
    /*
    There is no DIRECT match in function signature of this function call,
    so it is resolved to the TEMPLATIZED function definition.
    */

    func(6.5);
    /*
    We would think that this would get resolved to the FLOAT overloaded function definition 
    but C++ by default considers that the input is of `double` type.
    
    TODO WHY IS THE INPUT BY DEFAULT CONSIDERED TO BE OF `DOUBLE` DATA TYPE?

    So, this is resolved to the TEMPLATIZED function definition as well.
    */
    func((float)(6.5));
    /*
    Since we have type-casted the parameter to `float`, now the function call 
    gets resolved to FLOAT overloaded function definition.
    */
    
}
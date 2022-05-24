#include <iostream>

/*
In the previous script, we noticed a problem where when we kept names of the 
parameters of the object constructors the same as the names of the data members
of the particular class we were creating, 
! it lead to the data members of the class becoming inaccessible.

? We use the `this` keyword to resolve this issue.

`this` is a keyword in C++ that is a pointer that points to the object 
which is invoking a particular member function.
*/

class Complex {
    public:
        int real, imaginary;

        Complex(int real, int imaginary) {
        
            (*this).real = real;
            //OR
            this -> imaginary = imaginary;
            /* 
            ? Arrow operator dereferences the `this` pointer which points to the object 
            ? (the one being created using the constructor) that called the constructor function. 
            Then it accesses the data members and sets their values to 
            the value of the passed parameters.
            */
        };
        /*
        NOTE that when we were previously setting the values of data members 
        in case of different variable names, we were IMPLICITLY calling the `this` pointer.
        */

};

int main() {
    return 0;
}
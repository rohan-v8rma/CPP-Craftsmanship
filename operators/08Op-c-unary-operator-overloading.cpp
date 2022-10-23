#include <iostream>
using namespace::std;


class Complex {
    
    friend Complex operator ! (Complex &complex_num);
    
    private:
        int real, imag;
    public:
        Complex();

        Complex(int real_parameter, int imag_parameter) {
            real = real_parameter;
            imag = imag_parameter;
        };

        /* 
        This is an example of an OPERATOR FUNCTION
        that is also an inline member function of the class 

        (-) is a unary operator that requires 1 operand.

        Note how we don't need to pass one object because 
        this function is defined within the class so 
        it already has access to one set of `real` and `imag` values 
        from the class which is why we are able to use `real` and `imag` variables directly.
        */
        
        Complex operator - () {
            Complex negative(-1 * real, -1 * imag);
            return negative;
        };

        void printComplex() {
            if (imag >= 0) {
                printf("The complex number is (%d + %dj)\n", real, imag);
            }
            else {
                printf("The complex number is (%d - %dj)\n", real, -1 * imag);
            };
        };
};

/*
This is an example of an OPERATOR FUNCTION that is declared as a 
Friend Function of the class the operator is overloaded for.
*/

Complex operator ! (Complex &complex_num) {
    Complex complement(complex_num.real, -1 * complex_num.imag);
    return complement;
};

int main() {
    Complex sample(2, 3);
    
    Complex negative_sample = -sample;
    /*
    Compiler indentifies that the unary operator (-) is before the instance `sample` of class `Complex`.
    It searches for an operator function for (-) and since it is present, it concludes that this is a 
    case of operator overloading and a call is given to the operator function of (-).
    */

    negative_sample.printComplex();

    Complex sample_complement = !sample;
    sample_complement.printComplex();

    return 0;
}


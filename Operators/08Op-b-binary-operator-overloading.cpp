#include <iostream>
using namespace::std;

class Complex {
    
    friend Complex operator * (Complex const &first, Complex const &second);
    
    private:
        int real, imag;
    public:
        Complex(){};

        Complex(int real_parameter, int imag_parameter) {
            real = real_parameter;
            imag = imag_parameter;
        };

        /* 
        This is an example of an OPERATOR FUNCTION
        that is also an inline member function of the class 

        (+) is a binary operator that requires 2 operands

        Note how we only need to pass one object because 
        this function is defined within the class so 
        it already has access to one set of `real` and `imag` values 
        from the class which is why we are able to use `real` and `imag` variables directly.
        */
        
        Complex operator + (Complex const &complex_no) {
            Complex sum;
            sum.real = real + complex_no.real;
            sum.imag = imag + complex_no.imag; 
            return sum;
        };

        void printComplex() {
            printf("The complex number is (%d + %dj)\n", real, imag);
        };
};

/*
This is an example of an OPERATOR FUNCTION that is declared as a 
Friend Function of the class the operator is overloaded for.
*/
Complex operator * (Complex const &first, Complex const &second) { 
    //these parameters can be made not 'const' and pass by value. It won't make much difference
    Complex product;
    product.real = (first.real * second.real) + (first.imag * second.imag);
    product.imag = (first.imag * second.real) + (first.real * second.imag);
    return product;
};

int main() {
    
    Complex first(1, 2);
    Complex second(2, 4);

    Complex sum = first + second;
    
    Complex product = first * second;

    sum.printComplex();
    product.printComplex();

    return 0;
}
#include <iostream>
using namespace::std;

template <typename T>

//! This example demonstrates how objects derived from DIFFERENT classes(but SAME class template) interact

class Vector {
    public : 
        T *arr;
        int size;

        Vector(int size) {
            this -> size = size;
            arr = new T[size];
            /*
            This helps us to create a `Vector` with integer, floating-point, double coefficients etc.
            
            Suppose we had just put `int` as the datatype. Even the floating-point values 
            that we would try to enter would get undergo a narrowing type conversion to `int`,
            and we would lose the information after the decimal point.
            */
        };
        
        T dotProduct(Vector &passed) { 
            /*
            ! NOTE that once an object is created using this class template,
            ! the placeholder datatype, wherever used, is made CONSTANT.

            This means that if we try to pass a Vector which has `float` placeholder type,
            into member function of a Vector having `int` data type, it won't be able convert the 
            object from `Vector<float>` to `Vector<int>` data type.
            */
            T dotProduct = 0;
            
            for(int coeffPosition = 0; coeffPosition < size; coeffPosition++) {
                dotProduct += (this -> arr[coeffPosition]) * (passed.arr[coeffPosition]);
            };
            
            return dotProduct;
        }
};

int main() {
    
    Vector<float> integerVector(3);
    integerVector.arr[0] = 1;
    integerVector.arr[1] = 3;
    integerVector.arr[2] = 4;

    Vector<float> floatVector(3);
    floatVector.arr[0] = 1.2;
    floatVector.arr[1] = 3.7;
    floatVector.arr[2] = 4.3;

    cout << floatVector.dotProduct(integerVector) << endl; 
    //! This will return an error because of the above specified reason.

    return 0;
}
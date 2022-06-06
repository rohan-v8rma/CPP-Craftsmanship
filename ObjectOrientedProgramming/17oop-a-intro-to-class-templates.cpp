#include <iostream>
using namespace::std;

//! This is an example of a template with MULTIPLE (comma separated) PARAMETERS

template <typename T=int, typename F=float>
/*
Template classes are instanced in the same way template functions are,

the compiler stencils out a copy upon demand, with the template parameter 
replaced by the actual data type the user needs, and then compiles the copy. 

If you don’t ever use a template class, the compiler won’t even compile it.
*/
class Array {
    public:
        T arr[50];
        
        Array<T,F>() {
            for(int index = 0; index < 50; index++) {
                *(arr + index) = 0;
            };
        };
        
        void display();
};
/*
? Note that the name of the templated array class is `Array<T, F>`, not `Array`,
which is the name we would have to use along with scope resolution operator 
when defining member functions outside the class.

`Array` would refer to a non-templated version of a class named `Array`.
*/

template <typename F, typename G>  

void Array<F,G>::display() {
    /*
    Each TEMPLATED MEMBER FUNCTION defined outside the class declaration needs 
    its own TEMPLATE DECLARATION.

    Note that even if we change the PLACEHOLDER name of the template parameter, it doesn't
    matter as long as we use the same template parameter in the class name below.

    ! However it is best if we use the same template parameter name in order to avoid confusion.
    */
    cout << "{ ";
    cout << arr[0];
    for (int index = 1; index < 50; index++) {
        cout << ", " << arr[index];
    };
    cout << "}";
}

int main() {
    
    Array<int, int> integerArray; 
    Array<float, float> floatArray;
    /*
    Here, we are creating two objects by effectively using two different classes 
    coming from the same template,
    */
    
    //* Usage of default template parameters 

    Array firstDefaultTypeArray;
    Array<> secondDefaultTypeArray;

    Array<int> singleParameterTypeArray;
    /*
    Since we are specifying only 1 datatype over here instead of 2, it is assumed that
    this datatype corresponds to the first template parameter.

    ! Note that it is not possible to give the datatype for the second template parameter ONLY.
    ! We have to specify a datatype for the first one if we are specifying a datatype for the second,
    ! even if it the first parameter has a default datatype specified.
    */
}

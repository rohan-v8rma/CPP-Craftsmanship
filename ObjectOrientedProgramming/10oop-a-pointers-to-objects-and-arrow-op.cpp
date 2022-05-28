#include <iostream>
using namespace::std;

/*
                    INDEX
1. Ways of declaring pointers to objects

2. Modifying data members of objects using object pointers
    A. By regular dereferencing (*) and direct member selection (.)
    B. By INDIRECT member selection using ARROW OPERATOR (->)
*/

class ProjectCar {
    public:
        string name;
        float purchase_cost;
        int km_travelled;

        ProjectCar() {

        };
        
        //! Solution to this problem of names which is seen below is shown in the next script

        ProjectCar(string name_parameter, float purchase_parameter, int km_parameter) {
            name = name_parameter;
            purchase_cost = purchase_parameter;
            km_travelled = km_parameter;
        }
};

int main() {
    /*
    * 1. Ways of declaring pointers to objects
    */

    //* 1st Way (straightforward way)

    ProjectCar ford("Ford", 23.3, 5000000);
    ProjectCar *ford_pointer = &ford;

    /*
    * 2nd Way (using `new` operator)

    The new operator is an operator which denotes a request for memory allocation on the Heap. 
    If sufficient memory is available, new operator initializes the memory and returns the 
    address of the newly allocated and initialized memory to the pointer variable.
    */

    ProjectCar *chevy_pointer = new ProjectCar("Chevrolet", 251200.2, 100000);

    
    //* 2. Modifying data members of objects using object pointers

    /*
    * A. By regular dereferencing (*) and direct member selection (.)

    The normal way to access data members using object pointers is 
    by dereferencing the pointer and then using dot(.) operator.
    */

    cout << ((*chevy_pointer).name) << endl;

    /*
    ? We are placing brackets around the dereferencing operation 
    ? because the dot(.) operator (USED FOR DIRECT MEMBER SELECTION) 
    ? has a higher precedence than the dereferencing operator (*).
    */

    /*
    * B. By INDIRECT member selection using ARROW OPERATOR (->)

    The second way to use object pointers is to use the 
    ARROW OPERATOR(->) (Operator for INDIRECT MEMBER SELECTION)
    which dereferences the pointer and accesses the data member (or member function).
    */
    cout << (chevy_pointer->name) << endl;

    return 0;
}
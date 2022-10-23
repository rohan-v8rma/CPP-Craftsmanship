#include <iostream>
using namespace::std;

class ProjectCar {
    public:
        string name;
        float purchase_cost;
        int km_travelled;

        ProjectCar() {
            name = " ";
            purchase_cost = 0;
            km_travelled = 0;
        };
};

// Pointers to arrays containing objects are also extremely useful in some situations.

int main () {
    
    ProjectCar *garage_1 = new ProjectCar[5];

    //OR

    ProjectCar carList[10];
    ProjectCar *garage_2 = carList; 
    // we need not use the referencing operator over here because 
    // an array name is already a pointer which points to the first element of the array
    
    /*
    ? Now we can access elements of each element of this array by adding and dereferencing the pointer.
    ! NOTE that all objects in this array are created using the default constructor.
    */

    cout << (*garage_1).km_travelled << endl;
    
    cout << (*(garage_1 + 1)).km_travelled << endl;
    
    //OR (using Arrow operator)

    cout << (garage_1 + 1)->km_travelled << endl;

    return 0;
}
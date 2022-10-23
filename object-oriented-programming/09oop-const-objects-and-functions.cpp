#include <iostream>
using namespace::std;

/*
* Constant Objects

Like member functions and member function arguments, the objects of a class can also be declared as CONST. 

? An object declared as const cannot be modified and hence, can invoke only CONST member functions 
? as these functions ensure not to modify the object. 

A const object can be created by prefixing the const keyword to the object declaration. 
Any attempt to change the data member of const objects results in a compile-time error.

* Constant Functions

A function becomes const when the const keyword is used in the function’s declaration. 
? The idea of const functions is not to allow them to modify the object on which they are called. 
It is recommended the practice to make as many functions const as possible so that accidental changes 
to objects are avoided.

Following is a simple example of a const function. 
*/
class Point {
    private:
        int x, y;
    
    public:
        Point() {
        x = 0;
        y = 0;
        };

        void displayPoint() const { //this function can't modify any instance of the class it is defined in.    
            printf("The point is {%d, %d}", x, y);
            // x = 10;  this command will throw an error.
        };
        void movePoint() {
            x += 1;
            y += 1;
            displayPoint();
        };
};

int main() {
    const Point origin;
    Point changeable_origin;

    changeable_origin.movePoint();
    //we can use this member function that modifies value of object here but not for the CONST object.
}
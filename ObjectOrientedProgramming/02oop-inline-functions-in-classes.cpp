#include <iostream>
using namespace::std;

//TODO Read 14-inline-functions.c in Learning C repository for 

/*
Defining a member function within the class definition implicitly converts 
the function to inline, even if we do not use the inline specifier.

! NOTE that any function declared within a class is IMPLICITLY INLINE, 
! irrespective of the fact whether it is defined INSIDE or OUTSIDE the class.
*/
class Point {
    private:
        int x, y;
    public:
        //inline function DECLARED and DEFINED within a class
        
        int getX() {
            return x;
        };
        
        //inline function DECLARED within a class but DEFINED OUTSIDE it
        
        int getY();
};

//DEFINITION of the function DECLARED above
int Point::getY() {
    return y;
};

/*
? Here, the functions getX() and getY() are inline member functions of the class `Point`
*/
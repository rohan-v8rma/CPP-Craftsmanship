#include <iostream>
using namespace::std;

//TODO Read 14-inline-functions in Learning C repository for 

/*
Defining a member function within the class definition declares the function inline, 
even if we do not use the inline specifier.
*/
class Point {
    private:
        int x, y;
    public:
        int getX() {
            return x;
        };
        int getY() {
            return y;
        };
};

/*
Here, the functions getX() and getY() are inline member functions of the class `Point`
*/
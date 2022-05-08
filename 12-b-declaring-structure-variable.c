#include <stdio.h>

/*  
? What are structure variables?
Structure variables are instances of structures.

? How to declare structure variables? 
A structure variable can either be declared with structure declaration or as a separate declaration like basic types. 
*/ 

//* A structure variable declaration along with the structure declaration.

struct Point_1 //! Note that this `Point_1` name signifies a point in the 2D-Plane.
{
   int x, y;
} p1;  // The structure variable p1 is declared with the structure 'Point'

//! We can also create an unnamed structure, and just create a few structure variables using it.

struct {
   int x, y;
} p2, p3, p4;

 
//* A variable declaration like basic data types

struct Point_2  
{
   int x, y;
};


int main()
{
    struct Point_2 first_point;  // The variable p1 is declared like a normal variable
    
    /*
    ? Note that we can use the combination `struct <structure-name` just like `int` or `char`
    
    Just like we can use `int` to create either integer variables OR integer pointers OR integer arrays like this:
    */
    int first_integer;
    int* pointer_to_first_integer = &first_integer;
    int integer_array[10];
    
    /*
    We can use `struct <structure-name>` to create:
    structure variables OR structure variable pointers OR structure variable arrays.
    */
   
    struct Point_2* pointer_to_first_point = &first_point; // pointer

    struct Point_2 array_of_Point_structure_variables[10]; // array

    return 0;
}
//! Note: In C++, the struct keyword is optional before the declaration of a structure variable. In C, it is mandatory.




#include <stdio.h>

/*  
? What are structure variables?
Structure variables are instances of structures.

? How to declare structure variables? 
A structure variable can either be declared with structure declaration or as a separate declaration like basic types. 
*/ 

//* A structure variable declaration along with the structure declaration.

struct Point
{
   int x, y;
} p1;  // The structure variable p1 is declared with the structure 'Point'
 
 
//* A variable declaration like basic data types

struct Point  
{
   int x, y;
};


int main()
{
    struct Point first_point;  // The variable p1 is declared like a normal variable
    
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
   
    struct Point* pointer_to_first_point = &first_point; // pointer

    struct Point array_of_Point_structure_variables[10]; // array

    return 0;
}
//! Note: In C++, the struct keyword is optional before in declaration of a variable. In C, it is mandatory.




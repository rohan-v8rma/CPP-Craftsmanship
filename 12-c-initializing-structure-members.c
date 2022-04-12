#include <stdio.h>

/*
? How to initialize structure members? 
Structure members cannot be initialized when we are creating the structure. 
For example the following C program fails in compilation. 

// struct Point
// {
//    int x = 0;  // COMPILER ERROR:  cannot initialize members here
//    int y = 0;  // COMPILER ERROR:  cannot initialize members here
// };

The reason for the error above is that, this is just the structure that we have created.
No memory is allocated for it. 
! Memory is only allocated when we use this structure to declare a structure varibale.

? That is why we first have to declare a structure variable and 
? initialize the values of the structure members of that structure variable.


Structure members can be initialized using curly braces ‘{}’. 
For example, following is a valid initialization. 
*/
struct Point
{
   int x, y;
};
 
int main()
{
   /* 
   A valid initialization. 
   The structure member x gets value 0 and y gets value 1. 
   These structure members are a part of the structure variable `p1`.
   */
   struct Point p1 = {0, 1};
}

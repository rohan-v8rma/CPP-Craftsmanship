#include<stdio.h>
/*
        INDEX   
1. Arrays in C
2. Static Allocation
TODO 3. Dynamic Allocation
*/

int main () {
/*
* 1. Arrays in C

Arrays in C can store homogenous data like only

? SYNTAX of Declaring an array:
    <datatype-of-stored-elements> <array-name>[<number-of-elements>];
? SYNTAX of Initializing an array:
    <datatype-of-stored-elements> <array-name>[<number-of-elements>] = {<array>};

! NOTE: When we assign a value to a variable while declaring it, it is called INITIALIZATION.
! If we declare it first and assign a value to it later, it is called ASSIGNMENT.

? Difference between lists in Python and array in C

Arrays don't have in-built methods like lists in Python. 
Arrays have a fixed size which has to be pre-defined

* The numpy API in python uses C arrays which is why it is so fast.


* 2. Static Allocation

Static Allocation is when we enter a numerical value directly
indicating the length of the array we are declaring. 
? For example:
?     int arr[30];
Here, we are directly specifying a numerical value as the length of the array

*/
    float arr[6] = {16.0, 12.5, 6.45, 8.0};
    printf("%.f", arr[1]);
/*
TODO: 3. Dynamic Allocation

When we use pointers and dynamically allocate space for our array, it is called
Dynamic Allocation.
*/
    return 0;
}
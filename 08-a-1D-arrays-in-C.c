#include<stdio.h>
/*
        INDEX   
1. Arrays in C
2. Some basic terminologies related to Arrays
3. SYNTAX
4. Difference between lists in Python and array in C
*/

int main () {
    /*
    * 1. Arrays in C

    In C, arrays consist of contiguous memory locations.
    The lowest address corresponds to the first element and 
    the highest address to the last element. 
  
    The variable we assign the array to points to the 
    base address(first contigouous memory location) of the array and 
    we can obtain the that element by DEREFERENCING the name of the variable


    ? For example:
    */
    int array[5] = {1,2,3,4,5};
    printf("%d\n", *array); //? gives us `1`
    printf("%d\n", *(array + 1)); //TODO learn how this works internally.
    /*
    Arrays in C can store homogenous data only.


    * 2. Some basic terminologies related to Arrays

    --> The data type of array elements is known as the BASE TYPE of the array.
    --> The element numbers in [] are called SUBSCRIPTS or INDICES. 


    * 3. SYNTAX
    ? SYNTAX of Declaring an array:
        <base-type> <array-name>[<number-of-elements>];

    ? SYNTAX of Initializing an array:
        <base-type> <array-name>[<number-of-elements>] = {<array>};


    ! NOTE: When we assign a value to a variable while declaring it, it is called INITIALIZATION.
    ! If we declare it first and assign a value to it later, it is called ASSIGNMENT.

    * 4. Difference between lists in Python and array in C

    Arrays don't have in-built methods like lists in Python. 
    Arrays have a fixed size which has to be pre-defined

    * The numpy API in python uses C arrays which is why it is so fast.
*/

    
    return 0;
}
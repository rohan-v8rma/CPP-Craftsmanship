#include<stdio.h>
/*
        INDEX   
1. Arrays in C
2. Some basic terminologies related to Arrays
3. SYNTAX
4. Difference between lists in Python and array in C
5. Static Allocation
    a. Normal static allocation
    b. Initializing an array with all elements as 0
TODO 6. Dynamic Allocation
*/

int main () {
    /*
    * 1. Arrays in C

    In C, arrays consist of contiguous memory locations.
    The lowest address corresponds to the first element and 
    the highest address to the last element. 

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


    * 5. Static Allocation

    Static Allocation is when we enter a numerical value directly
    indicating the length of the array we are declaring. 
    ? For example:
    ?     int arr[30];
    Here, we are directly specifying a numerical value as the length of the array

    */
    //* a. Normal static allocation

    float arr[6] = {16.0, 12.5, 6.45, 8.0};
    printf("%.f\n", arr[1]);
    

    //* b. Initializing an array with all elements as 0

    int arr_1[10] = {}; //initializing an array with all values as zero
    for (int index = 0; index < 10; index++) {
        printf("%d\n", arr_1[index]);
    
    };
    /*
    TODO: 3. Dynamic Allocation

    When we use pointers and dynamically allocate space for our array, it is called
    Dynamic Allocation.
    */
    return 0;
}
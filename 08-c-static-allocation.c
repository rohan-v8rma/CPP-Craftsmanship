#include<stdio.h>
/*
        INDEX   
1. Static Allocation
    a. Normal static allocation
    b. Initializing an array with all elements as 0
    c. Taking input/Providing a variable as the size of the array in DECLARATION
    ? Works in C AND C++
    d. Taking input/Providing a variable as the size of the array in INITIALIZATION
    ! Only works in C++
*/
int main() {
    /*
    * 1. Static Allocation

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
    * c. Taking input/Providing a variable as the size of the array in DECLARATION
    
    ? Works in both C and C++
    
    int size;
    scanf("%d", &size);
    int array[size];

    OR 
    int size = 5;
    int array[size]; 
    */
    /*

    * d. Taking input/Providing a variable as the size of the array in INITIALIZATION
    
    ! Works only in C++

    int size = 5;
    int array[size] = {1, 2, 3, 4, 5}; 

    TODO why?    
    */

    return 0;
}
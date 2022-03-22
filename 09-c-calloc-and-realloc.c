#include<stdio.h>
#include<stdlib.h>

/*
* 1. calloc()
calloc() stands for contiguous allocation 
It reserves n blocks of memory with the given amount of bytes. 
The return value is a VOID pointer to the allocated space, which needs to be casted 
to the appropriate type as per the requirements.

However, if the space is insufficient, allocation of memory fails and it returns a NULL pointer. 
! All the values at allocated memory are initialized to 0

? SYNTAX: <datatype> *<ptr-name> = (<datatype>*)(calloc(<number-of-blocks>, <size-in-bytes>))

* 2. realloc()
realloc() stands for reallocation 
If the dynamically allocated memory is insufficient we can change 
the size of previously allocated memory using realloc() function 

! NOTE: If the current contiguous location of storage isn't long enough to accomodate
! the new size, the pointer location is changed to a location where that amount of storage
! is available.

? SYNTAX: <ptr-name> = (<datatype>*)(realloc(<ptr-name>, <new-size-in-bytes>)))
*/

int main() {
    
    int length_of_integer_array = 3;
    int *base_address_ptr;

    //Using calloc
    base_address_ptr = (int *)(calloc(length_of_integer_array, sizeof(int))); 
    for(int index = 0; index < length_of_integer_array; index++) {
        *(base_address_ptr + index) = index;
    }
    
    length_of_integer_array = 6; //new array length for memory re-allocation
    
    //Using realloc
    base_address_ptr = (int *)(realloc(base_address_ptr, length_of_integer_array * sizeof(int)));
    for(int index = 0; index < length_of_integer_array; index++) {
        *(base_address_ptr + index) = index;
    }

    //Printing the array
    for(int index = 0; index < length_of_integer_array; index++) {
        printf("The array element at index %d is `%d`\n", index, *(base_address_ptr + index));
    }
    return 0;
}
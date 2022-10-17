#include<stdio.h>
#include<stdlib.h>
/*
            INDEX
1. malloc()
2. free()
3. difference between malloc and calloc()
*/

/*
* 1. malloc() 

malloc() stands for `Memory Allocation`
It reserves a block of memory with the given amount of bytes.
The return value is a VOID pointer to the allocated space, which needs to be casted 
to the appropriate type as per the requirements.

However, if the contiguous memory space is insufficient, allocation of memory fails
and it returns a NULL pointer. 

! In older compilers, all values at allocated memory were initialized to garbage values. 
! But in newer compilers, they are initialized to `0` value. SAME AS CALLOC

? SYNTAX: <datatype> *<ptr-name> = (<datatype>*)(malloc(<size-in-bytes>))

* 2. free()
free() is used to free the allocated memory, when we no longer need the data stored in a 
block of memory. 
If the dynamically allocated memory is not required anymore, we can free it using free function.
This will free the memory being used by the program in the heap.

? SYNTAX: free(<ptr-name>)
*/
    
    
int main() {
    int length_of_integer_array = 3;
    int *base_address_ptr;

    //* 1. Using malloc
    base_address_ptr = (int *) (malloc(length_of_integer_array * sizeof(int)));
    
    //Printing the array
    for(int index = 0; index < length_of_integer_array; index++) {
        printf("The array element at index %d is `%d`\n", index, *(base_address_ptr + index));
    } //!NOTICE how all elements are initialized with `0`
    

    //Allocating elements in array
    for(int index = 0; index < length_of_integer_array; index++) {
        *(base_address_ptr + index) = index;
    }

    //Printing the array again to see the new values
    printf("\n");
    for(int index = 0; index < length_of_integer_array; index++) {
        printf("The array element at index %d is `%d`\n", index, *(base_address_ptr + index));
    }

    //* 2. Using free
    free(base_address_ptr);
    
    return 0;
}
/*
* 3. Difference between malloc and calloc

1.

malloc() function creates a single block of memory of a specific size.
calloc() function assigns multiple blocks of memory to a single variable.

2.

The number of arguments in malloc() is 1.
The number of arguments in calloc() is 2.

3.

malloc() is faster.
calloc() is slower.

4.

malloc() has high time efficiency.
calloc() has low time efficiency.

5.

The memory block allocated by malloc() has a garbage value. 
! Although in newer compilers, unitialized variables seem to be assigned 0 at runtime
The memory block allocated by calloc() is initialized by zero.

? calloc used to have an extra overhead of initializing all array elements with 0, which makes it inefficient
*/
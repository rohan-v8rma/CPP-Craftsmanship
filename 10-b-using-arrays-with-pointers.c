#include<stdio.h>
/*
            INDEX
1. Decaying of array names to pointers
2. `%p` (pointer or address) tag
3. pointers pointing to array elements
*/
int main() {
    /*
    * 1. Decaying of array names to pointers

    In most contexts, array names decay to pointers. 
    In simple words, array names are converted to pointers. 
    That's the reason why you can use pointers to access elements of arrays. 
    However, you should remember that pointers and arrays are not the same.

    ? There are a few cases where array names don't decay to pointers, such as:
    a. When it's the argument of the & (address-of) operator.
    b. when it's the argument of the sizeof operator.
    */
    int array_1[4];
    int index;

    //* 2. `%p` (pointer or address) tag

    for(index = 0; index < 4; index++) {
        printf("&x[%d] = %p\n", index, &array_1[index]);
    }

    printf("Address POINTED to by the variable name `array_1`: %p\n", array_1);
    printf("Adress of first contiguous memory location of `array_1`: %p\n", &array_1); //both give the same output
    /*
    Since `%p` tag means address or pointer

    We know that the variable name of an array points to its base address so,
    
    In the first line, we are getting that base address that the variable (technically, the pointer)
    is pointing to, which is the address of the first element of the array.
    
    In the second line, we are referencing the array using (&) operator, which gives us 
    the first contiguous storage location of the array.
    ! Here, the array name is not DECAYING into pointer
    */

    //* 3. pointers pointing to array elements

    int array_2[] = {10, 20, 30, 45, 67, 56, 74};
    // int *pointer_1, *pointer_2; 
    int *pointer_1 = &array_2[1]; 
    int *pointer_2 = &array_2[5]; 
    
    printf ("%d\n", pointer_2 - pointer_1); 
    /*
    Although integers usually occupy 4 bytes of memory, in case of pointers,
    the compiler internally recognizes according to the datatype, that how many
    elements separation is between the addresses stored in two pointers.

    ? Just like we can simply move to the next address by incrementing the value
    ? of the pointer by 1, we can simply get that difference between the two pointers.
    */
    printf ("%ld\n", *pointer_2 - *pointer_1);
    return 0;
}
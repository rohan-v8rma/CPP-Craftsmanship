#include<stdio.h>

int main()
{
    int array[5] = {1,2,3,4,5};
    // array += 1; 
    //! it is not possible to do this because the array pointer cannot be changed to point to any other element except the base by default
    printf("%d", *(array + 1));
    return 0;

    /*
    ? how does compiler recognize what + 1 means? because +1 over here means 4 bytes (space occupied by integer)
    `+` operator is overloaded for use with a pointer and depending on the size of the datatype the pointer is meant to point to, adding 1 to the pointer increments the memory address.
    */
}

#include<stdio.h>
/*
Usage of this is when we want to dynamically allocate memory for 2D arrays
or higher in DATA MINING.

But, nowadays we use Python for Data Mining.
*/

int main() {
    int **pointer_to_a_pointer;
    /*
    This pointer points to `pointer`, which stores the address of `variable`
    */
    int *pointer;
    int variable;
    pointer = &variable;
    pointer_to_a_pointer = &pointer;

    return 0;
}
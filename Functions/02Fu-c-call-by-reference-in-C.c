#include<stdio.h>

/*
In C++ we can genuinely pass by reference. 
The easier method of pass by reference used in C++, where we need not 
change how we give inputs to a function, is not available in C. 

In C, passing by reference is really just passing a pointer by value.
*/

void swap_by_pointers(int *first_num, int *second_num) {
    /*
    Here, we are specifying that we would be inputting: 
    
    pointers which point to an integer value 
    OR 
    pointers which hold the address of integer values 
    OR 
    addresses of integer values DIRECTLY
    */
    

    if (*first_num < *second_num) {
        int temp = *first_num;
        *first_num = *second_num;
        *second_num = temp;
    };
    /*
    In this function, we are manipulating the variables as if we
    have addresses stored in them. 
    
    In the case of the Call by Reference method of C++, 
    we manipulate the variables normally as in Call by Value.
    It's just that the original copies are getting mutated.
    */

}

int main() {
    int variable_1 = 10;
    int variable_2 = 20;

    swap_by_pointers(&variable_1, &variable_2);
    //as specified in the function definition, we are providing addresses of integer values
    
    printf("%d\n", variable_1);
    printf("%d\n", variable_2);

    return 0;
}
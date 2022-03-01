#include <stdio.h>

/*
            INDEX
1. 'Address of' (&) operator
2. sizeof() operator
*/


int main() {
/*
* 1. 'Address of' (&) operator
The ampersand (&) is the 'Address of' operator. It returns the memory 
location of a variable, and it is used by prefixing to the name of a 
variable. 
The variable doesn't even have to be initialized, just declared.
*/
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
        
/*
* 2. sizeof() operator

The sizeof operator is the most common operator in C. 

It is a compile-time unary operator and used to compute the size of its operand. 
It returns the size of a variable. It can be applied to any data type, 
float type, pointer type variables.

When sizeof() is used with the data types, it simply returns the amount of 
memory allocated to that data type.

! NOTE: In order to print the size of any variable, we need to give %ld (long int)
! or %lu (unsigned long int) format specifier, otherwise, we will encounter error.
*/

    printf("Size of variable a : %ld\n", sizeof(a));
    printf("Size of int data type : %ld\n", sizeof(int));
    printf("Size of char data type : %ld\n", sizeof(char));
    printf("Size of float data type : %ld\n", sizeof(float));
    printf("Size of double data type : %ld\n", sizeof(double));
    
    return 0;
}
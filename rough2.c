#include<stdio.h>

int main() {
    int integer_1, integer_2;
    
    printf("Enter integer 1 : ");
    scanf("%d", &integer_1);
    
    printf("\nEnter integer 2 : ");
    scanf("%d", &integer_2);

    int *pointer_1 = &integer_1;
    int *pointer_2 = &integer_2;
    if (*pointer_1 < *pointer_2) {
        int temp = *pointer_1;
        *pointer_1 = *pointer_2;
        *pointer_2 = temp;
    }
    printf("The max out of %d and %d is %d", *pointer_1, *pointer_2, *pointer_1);
    
    return 0;
}
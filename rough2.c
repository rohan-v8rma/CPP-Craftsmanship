#include<stdio.h>
#include<math.h>

//Adding two numbers by pass by reference

int addition(int* num_ptr_1, int* num_ptr_2) { //this function takes pointer arguments or address arguments
    return (*num_ptr_1 + *num_ptr_2);   
}

int main() {
    int num_1 = 1;
    int num_2 = 2;
    
    int sum = addition(&num_1, &num_2);
    printf("%d", sum);
    
    return 0;
}
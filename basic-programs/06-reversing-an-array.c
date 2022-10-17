#include<stdio.h>

int main() {
    int length_of_array_1 = 5;

    //(1st method) Without taking input
    int array_1[5] = {1,2,3,4,5};

    for(int index = 0; index <= (length_of_array_1 / 2); index++) {
        int swap_variable = array_1[index];
        array_1[index] = array_1[length_of_array_1 - index - 1];
        array_1[length_of_array_1 - index - 1] = swap_variable;
    }

    for(int index = 0; index < length_of_array_1; index++) {
        printf("%d\t", array_1[index]);
    }

    //2nd method (fastest when taking inputs)
    
    int length_of_array_2;
    scanf("%d", &length_of_array_2);
    
    int array_2[length_of_array_2];    
    
    
    for(int index = length_of_array_2 - 1; index >= 0; index--) {
        scanf("%d", &array_2[index]);
    }
    for(int index = 0; index < length_of_array_2; index++) {
        printf("%d\t", array_2[index]);
    }
 
    return 0;
}
#include<stdio.h>

//Printing the elements of an array using pointers


int main() {
    int length_of_array = 5;
    int array[length_of_array];
    for(int index = 0; index < length_of_array; index++) {
        scanf("%d", &array[index]);

    };
    printf("\n");
    int* pointer = array;
    for(int index = 0; index < length_of_array; index++) {
        printf("%d\n", *(pointer + index));
    }

    return 0;
}
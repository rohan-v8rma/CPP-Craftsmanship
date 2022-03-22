#include<stdio.h>

int main() {
    int length_of_array;
    scanf("%d", &length_of_array);
    
    int array[length_of_array];    
    
    int smallest = -10000;
    int largest = -10000;
    for(int index = 0; index < length_of_array; index++) {
        scanf("%d", &array[index]);
        if ((smallest == -10000) && (largest == -10000)) {
            smallest = array[index];
            largest = array[index];
        }
        else {
            if (array[index] > largest) {
                largest = array[index];
            }
            else if (array[index] < smallest) {
                smallest = array[index];
            }
        };
    }
    printf("%d\n", largest - smallest);

    return 0;
}

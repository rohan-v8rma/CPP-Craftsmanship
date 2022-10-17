#include <stdio.h>
#include <stdlib.h>


int main () {
    int exit_status = 0;
    int array_size = 1;

    int *array = (int*)( calloc(array_size, sizeof(int)) );
    
    printf("Input a number: ");
    scanf("%d", array);
    
    while (exit_status == 0) { // this condition is tested after the current iteration of the loop ends.
        
        printf("0. Do you wish to input a number?\n1. Print the array and exit.\n2. Exit.\n>>> ");
        scanf("%d", &exit_status);
        
        if (exit_status == 0) {
            
            array = (int *)(realloc(array, sizeof(int) * (++array_size)));

            printf("Enter the number: ");
            scanf("%d", (array + (array_size - 1)));
        }

        else if (exit_status == 1){
            
            printf("\n{%d", *array);

            for(int index = 1; index < array_size; index++) {
                printf(", %d", *( array + index ));
            };

            printf("}\nSize occupied by the array is %ld bytes\n", array_size * sizeof(int));
        }
        
        else if (exit_status == 2) {
            break;
        };
    };

    free(array);

    return 0;
}
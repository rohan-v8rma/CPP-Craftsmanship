#include <stdio.h>

int main() {
    int matrix[3][3];
    int out_limit = ( sizeof(matrix) / sizeof(matrix[0]) );
    int in_limit = ( sizeof(matrix[0]) / sizeof(int) );

    //* Loop for creating and printing the matrix
    int element = 1;
    for(int out_index = 0; out_index < out_limit ; out_index++) {
        for(int in_index = 0; in_index < in_limit ; in_index++) {
            
            *(*(matrix + out_index) + in_index) = element++;
            
            printf("%d ", *(*(matrix + out_index) + in_index));
        };
        printf("\n");
    };
    printf("\n");

    //! Loop for transposing the matrix (NOTICE how it doesn't work)

    int temp;
    for(int out_index = 0; out_index < out_limit ; out_index++) {
        for(int in_index = 0; in_index < in_limit ; in_index++) {

            temp = *(*(matrix + out_index) + in_index);
            *(*(matrix + out_index) + in_index) = *(*(matrix + in_index) + out_index);
            *(*(matrix + in_index) + out_index) = temp; 
            
        };
    };

    for(int out_index = 0; out_index < out_limit ; out_index++) {
        for(int in_index = 0; in_index < in_limit ; in_index++) {
            
            printf("%d ", *(*(matrix + out_index) + in_index));
        };
        printf("\n");
    };
    printf("\n");



    //? CORRECT loop for transposing the matrix

    for(int out_index = 0; out_index < out_limit ; out_index++) {
        for(int in_index = (out_index + 1); in_index < in_limit; in_index++) {

            /*    
            ? We have to write `in_index = out_index + 1` because if we have the matrix:

            1 2 3
            4 5 6 
            7 8 9 

            We should only be selecting the elements 2, 3 and 6 for transposition (diagonal is left undisturbed).

            Because if we select  4 7 8 as well, then replacement will happen twice, resulting in the same matrix.
        
            */
            
            temp = *(*(matrix + out_index) + in_index);
            *(*(matrix + out_index) + in_index) = *(*(matrix + in_index) + out_index);
            *(*(matrix + in_index) + out_index) = temp; 
            
        };
    };

    for(int out_index = 0; out_index < out_limit; out_index++) {
        for(int in_index = 0; in_index < in_limit; in_index++) {
            
            printf("%d ", *(*(matrix + out_index) + in_index));
        };
        printf("\n");
    };
    printf("\n");


    return 0;
}
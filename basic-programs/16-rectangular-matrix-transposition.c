#include <stdio.h>

int main() {

    int matrix[3][4];
    int out_limit = ( sizeof(matrix) / sizeof(matrix[0]) );
    int in_limit = ( sizeof(matrix[0]) / sizeof(int) );

    //* Loop for creating and printing the matrix
    int element = 1;
    for(int out_index = 0; out_index < out_limit ; out_index++) {
        for(int in_index = 0; in_index < in_limit ; in_index++) {
            
            *(*(matrix + out_index) + in_index) = element++;
            
            printf("%2d ", *(*(matrix + out_index) + in_index));
        };
        printf("\n");
    };
    printf("\n");

    /*
    ? Loop for creating a TRANSPOSED version of the matrix 

    
    */
    int transposed_matrix[in_limit][out_limit];

    for(int out_index = 0; out_index < out_limit ; out_index++) {
        for(int in_index = 0; in_index < in_limit ; in_index++) {

            *(*(transposed_matrix + in_index) + out_index) = *(*(matrix + out_index) + in_index);
            
        };
    };

    for(int out_index = 0; out_index < in_limit ; out_index++) {
        for(int in_index = 0; in_index < out_limit ; in_index++) {
            
            printf("%2d ", *(*(transposed_matrix + out_index) + in_index));
        };
        printf("\n");
    };
    printf("\n");


    return 0;
}
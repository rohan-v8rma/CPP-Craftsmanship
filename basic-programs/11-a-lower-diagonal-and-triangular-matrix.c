#include<stdio.h>

int main() {
int square_size;
    printf("%s", "Enter square size: ");
    scanf("%d", &square_size);

    int matrix[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };  

    //* Lower triangular matrix (Diagonal is included in this one)
    printf("%s", "Lower triangular matrix:\n");

    for(int outer_index = 0; outer_index < square_size; outer_index++) {
        
        for(int inner_index_1 = 0; inner_index_1 <= outer_index; inner_index_1++) {
            printf("%d ", matrix[outer_index][inner_index_1]);
        }

        //Zero Printer
        for(int inner_index_2 = 0; inner_index_2 < (square_size - outer_index - 1); inner_index_2++){
            printf("%d ", 0);
        }
        printf("%s", "\n");
    }
    printf("%s", "\n");

    //* Lower diagonal matrix (diagonal NOT included)
    printf("%s", "Lower diagonal matrix:\n");

    for(int outer_index = 0; outer_index < square_size; outer_index++) {
        
        for(int inner_index = 0; inner_index < outer_index; inner_index++) {  //just `<=` sign changed to `<`
            printf("%d ", matrix[outer_index][inner_index]);
        }

        //Zero printer
        for(int inner_index_2 = 0; inner_index_2 < (square_size - outer_index); inner_index_2++){
            printf("%d ", 0);
        }
        printf("%s", "\n");
    }
}
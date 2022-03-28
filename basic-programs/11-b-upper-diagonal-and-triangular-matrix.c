#include<stdio.h>

int main() {
int square_size;
    printf("%s", "Enter square size: ");
    scanf("%d", &square_size);

    int matrix[5][5] = {
        {1  ,2  ,3  ,4  ,5 },
        {6  ,7  ,8  ,9  ,10},
        {11 ,12 ,13 ,14 ,15},
        {16 ,17 ,18 ,19 ,20},
        {21 ,22 ,23 ,24 ,25}
    };  

    //* Upper triangular matrix (diagonal included)
    printf("%s", "Upper triangular matrix:\n");
    for(int outer_index = 0; outer_index < square_size; outer_index++) {
        
        //Zero Printer
        for(int inner_index_1 = 0; inner_index_1 < outer_index; inner_index_1++) {
            printf("%d ", 0);
        }

        for(int inner_index_2 = outer_index; inner_index_2 < square_size; inner_index_2++) {
            printf("%d ", matrix[outer_index][inner_index_2]);
        }
        printf("%s", "\n");
    }

    //* Upper diagonal matrix (diagonal NOT included)
    printf("%s", "Upper diagonal matrix:\n");
    for(int outer_index = 0; outer_index < square_size; outer_index++) {
        
        //Zero Printer
        for(int inner_index_1 = 0; inner_index_1 <= outer_index; inner_index_1++) {
            printf("%d ", 0);
        }

        for(int inner_index_2 = outer_index + 1; inner_index_2 < square_size; inner_index_2++) {
            printf("%d ", matrix[outer_index][inner_index_2]);
        }
        printf("%s", "\n");
    }
}
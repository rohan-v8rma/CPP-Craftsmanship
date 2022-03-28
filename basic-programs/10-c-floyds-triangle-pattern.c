#include<stdio.h>

int main() {
    int no_of_rows;
    printf("Number of rows of the floyds triangle: ");
    scanf("%d", &no_of_rows);

    int floyd_number = 1;

    for(int row = 0; row < no_of_rows; row++) {
        for(int column = 0; column < (row + 1); column++) {
            printf("%d ", floyd_number);
            ++floyd_number;
        }
        printf("%s", "\n");
    }

    
}
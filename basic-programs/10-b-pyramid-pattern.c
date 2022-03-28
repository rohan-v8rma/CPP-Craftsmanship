#include<stdio.h>

/*
Pattern
   *
  ***
 *****
*******
*/

int main() {
    int no_of_rows = 1;
    printf("Enter number of rows greater than 1: ");
    scanf("%d", &no_of_rows);
        
    for(int row = 1; row <= no_of_rows; row++) {
        
        //Space Printer
        for(int column = 0; column < (no_of_rows - row); column++) {
            printf("%s", " ");
        }

        for(int column = 0; column < (1 + (row - 1) * 2); column++) {
            printf("%s", "*");
        }
        printf("%s", "\n");

    }

}
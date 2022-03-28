#include<stdio.h>

int main() {

/*
Pattern
*
**
***
****
*****

Each row has as many stars as its row number
*/

    int no_of_rows;
    scanf("%d", &no_of_rows);

    for(int row = 1; row <= no_of_rows; row++) {
        for(int column = 0; column < row; column++) {
            printf("%c", '*');
        }
        printf("%s" ,"\n");
    }
}
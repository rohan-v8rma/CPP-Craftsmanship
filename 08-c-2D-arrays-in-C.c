#include<stdio.h>

int main() {
    /*
    2D Arrays OR Matrices

    Two dimensional arrays are called Matrices.
    
    ? SYNTAX for declaring a 2D Array:
    */
    int matrix[4][2];
    /*
    If we look at this in terms of matrices, 
    
    the first number represents the number of rows (each student occupies a row)
    the second number represents the number of columns (each data point related to the students occupies a column)

    According to C/C++ language specifications, matrices are laid out in memory in a ROW-MAJOR ORDER: 
    the elements of the first row are laid out consecutively in memory, 
    followed by the elements of the second row, and so on.

    ? COLUMN-MAJOR ORDER is the opposite of this where column wise layout is present.
    */

    for (int student_index = 0; student_index < 4; student_index++) {
        printf("\nEnter your roll number: ");
        scanf("%d", &matrix[student_index][0]);   
        
        printf("\nEnter your marks: ");
        scanf("%d", &matrix[student_index][1]);
    };            
    //As we can see, we are 

    

    return 0;
}
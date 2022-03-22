#include<stdio.h>
/*
        INDEX
1. What are 2D Arrays OR Matrices?
2. SYNTAX for declaring a 2D Array:
3. Memory Allocation of 2D Arrays.
4. Accessing elements in 2D Arrays like 1D Arrays.
5. Printing elements of 2D Arrays by decaying of array names to pointers 
TODO: refer 09-b-using-arrays-with-pointers for more info
*/
int main() {
    /*
    * 1. What are 2D Arrays OR Matrices?

    Two dimensional arrays are called Matrices.
    
    * 2. SYNTAX for declaring a 2D Array:
    */
    //* First method
    int matrix_1[4][2] = {
        {1,2},
        {3,4},
        {5,6},
        {7,8}
    };

    //* Second method
    int matrix_2[][2] = {1,2,3,4,5,6,7,8};
    //according to the length of the row specified, the compiler is able to decipher the number of rows
    //! BUT, avoid this to prevent confusion.

    //* Third method
    int matrix_3[4][2];
    /*
    * 3. Memory Allocation of 2D Arrays.

    If we look at this in terms of matrices, 
    
    the first number represents the number of rows (each student occupies a row)
    the second number represents the number of columns (each data point related to the students occupies a column)

    According to C/C++ language specifications, matrices are laid out in memory in a ROW-MAJOR ORDER: 
    the elements of the first row are laid out consecutively in memory, 
    followed by the elements of the second row NEXT TO THEM in the memory, and so on.

    ? COLUMN-MAJOR ORDER is the opposite of this where column wise layout is present.
    */

    // for (int student_index = 0; student_index < 4; student_index++) {
    //     printf("\nEnter your roll number: ");
    //     scanf("%d", &matrix_3[student_index][0]);   
        
    //     printf("\nEnter your marks: ");
    //     scanf("%d", &matrix_3[student_index][1]);      
    // };            

    //* 4. Accessing elements in 2D Arrays like 1D Arrays.

    for(int index = 0; index < 4; index++) {
        printf("Address of element %d is %p\n", (index + 1), &matrix_1[index]);
        /*
        As seen by the output, each address is 8 bytes apart.

        Which signifies that if we try accessing the 1st, 2nd etc element of `matrix_1`,
        we are accessing a complete row, which has two integers. Each integer takes up
        4 bytes, so 2 integers take up 8 bytes.

        So, the matrix is stored row wise in contiguous memory locations.
        */
    }
    
    /*
    * 5. Printing elements of 2D Arrays by decaying of array names to pointers 
    TODO: refer 09-b-using-arrays-with-pointers for more info
    */

    for(int outer_index = 0; outer_index < 4; outer_index++) {
        for(int inner_index = 0; inner_index < 2; inner_index++) {
            printf("%d  ", *(*(matrix_1 + outer_index) + inner_index));
            /*
            Here, in the inner bracket, the name of the 2D-Array `matrix_1` 
            is decaying to pointer to it's first element and 
            when we add whatever value the `outer_index` holds, 
            it moves to that element of matrix_1. 
            
            Note that elements of matrix_1 are 1D arrays themselves, so when we dereference
            the pointer to whatever element of the `matrix_1`, we get a new pointer to the first 
            element within the 1D-Array. 
            
            Now, if we add `inner_index` to this new pointer, we move within the 1D-Array to whatever element.
            
            Upon dereferencing the second and final time, we get the value of the element 
            inside the 1D-Array, which is the value that get's printed.
            */
        }
        printf("\n");
    }
    

    return 0;
}
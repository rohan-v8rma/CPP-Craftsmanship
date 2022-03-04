#include<stdio.h>

int main() {
    int log_book[8] = {1, 1, 2, 3, 4, 5, 6, 7};
    int length_of_array = sizeof(log_book)/sizeof(int);
    
    int unique[8] = {}; 
    /*
    initializing an array with every element as 0 since 
    registration numbers have to be non-zero.
    */
    int index = 0;
   
    printf("\nThe unique reg numbers entering the library are:\n");
    for(int iter_var = 0; iter_var < length_of_array; iter_var++) {
        for(int iter_var_2 = 0; iter_var_2 <= index; iter_var_2++) {
            if (unique[iter_var_2] == log_book[iter_var]) {
                goto dont_add;
            };
        } 
        unique[index] = log_book[iter_var];
        index += 1;
        printf("%d\n", log_book[iter_var]);
        dont_add:;
    }    
    return 0;
}   
#include <stdio.h>

int main()
{

    char str[128] = "We all scream for ice cream!";
    char *pointer_1 = str;
    
    //* Pointer as LOOP VARIABLE of a WHILE loop    

    while(*pointer_1) {
        /*
        since null character '\0' has FALSE truth value, as soon as *pointer_1 == '\0', 
        which is also the end of the string, the loop will terminate.
        */
        printf("%c", *pointer_1);
        pointer_1++;
    } 
    printf('\n');

    //* Pointer as LOOP VARIABLE of a FOR loop    

    for(char *pointer_2 = str; *pointer_2; pointer_2++) {
        // here we see again the loop exit condition *pointer_2 == '\0'
        printf("%c", *pointer_2);
    }
    printf('\n');

    return 0;
}
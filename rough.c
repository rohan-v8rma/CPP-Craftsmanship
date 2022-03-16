#include <stdio.h>

int main()
{

    char str[128] = "We all scream for ice cream!";
    char *pointer_1 = str;
    // here we see again the loop exit condition *p == '\0'
    while(*pointer_1) {
        printf("%c", *pointer_1);
        pointer_1++;
    } 
    printf("\n");

    for(char *pointer_2 = str; *pointer_2; pointer_2++) {
        printf("%c", *pointer_2);
    }
    printf("\n");
    return 0;
}
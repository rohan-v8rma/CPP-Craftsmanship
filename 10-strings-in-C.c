#include<stdio.h>
#include<string.h>

int main() {
/*
    Strings in C are 1-D arrays of 'char' type

    By convention, a string in C is terminated by the end-of-string
    sentinel '\0' (null character)

    ! NOTE : In computer programming, a SENTINEL value is a special value 
    ! in the context of an algorithm which uses its presence as a condition 
    ! of termination, typically in a loop or recursive algorithm.

    ? For example:
    ? char string [21] - can have variable length string delimited with \0 
    ? Max length of the string that can be stored is 20 as the size must 
    ? include storage needed for the \0.

    BUT, when we use strlen() function to determine the length of a string,
    the null character (\0) will be excluded from that count. 

    SYNTAX:
*/
 
    char string[6] = {'h', 'e', 'l', 'l', 'o','\0'};
    printf("\n%s\n", string);
/*
    * Most commonly used functions of <string.h> header file

TODO  The below functions are defined in the <string.h> header file

    1. strcat()
    2. strcmp()
    3. strcpy()
    4. strlen() 
*/
    int length_of_string = strlen(string);
    printf("%d\n",length_of_string);
    

    return 0;    
}
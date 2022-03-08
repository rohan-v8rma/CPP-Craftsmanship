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
    ? include storage needed for the \0 in both 'array' or 'double quote' initialization.
    ! NOTE: this is required when initializing a string with double quotes as well.

    ? OR we could just not specify a length and let the compiler decide automatically.

    BUT, when we use strlen() function to determine the length of a string,
    the null character (\0) will be excluded from that count. 

    SYNTAX of creating a string:
*/
 
    char string_1[6] = {'h', 'e', 'l', 'l', 'o','\0'};
    printf("\n%s\n", string_1);

    char string_2[] = {'h', 'e', 'l', 'l', 'o', 's', '\0'}; //no length specified
    printf("\n%s\n", string_2);

    char string_3[7] = "hellos"; 
    printf("\n%s\n", string_3);

    char string_4[] = "hello bro"; //no length specified
    printf("\n%s\n", string_4);
    
    /*
    * Most commonly used functions of <string.h> header file
    The below functions are defined in the <string.h> header file
        1. strlen()
        2. strcmp()
        3. strcpy()
        4. strcat()
    */

    /* 
    * 1. strlen()

    The strlen() function calculates the length of a given string.
    The strlen() function takes a string as an argument and returns its length.

    ! Note that the strlen() function doesn't count the null character \0 
    ! while calculating the length.
    */

    int length_of_string = strlen(string_1);
    printf("\nLength of string_1('%s') is %d\n", string_1, length_of_string);
    
    /*
    * 2. strcmp()

    The strcmp() compares two strings character by character. If the strings 
    are equal, the function returns 0.

    The function takes two parameters:
    str1 - a string
    str2 - a string

    =0	if strings are equal
    >0	if the first non-matching character in str1 is greater (in ASCII) than that of str2.
    <0	if the first non-matching character in str1 is lower (in ASCII) than that of str2.

    For example:
    */
    char str1[] = "heloss";
    char str2[] = "hemoss";
    int comparison_value = strcmp(str1, str2);
    
    if (comparison_value > 0) {
        printf("\n%s > %s\n", str1, str2);
    }
    else if (comparison_value < 0) {
        printf("\n%s < %s\n", str1, str2);
    }
    else {
        printf("\n%s == %s\n", str1, str2);
    };
    
    /*
    * 3. strcpy()

    ? SYNTAX:
    ? strcpy(<destination string>, <source string>)

    The strcpy() function copies the string pointed by source (including the null character) 
    to the destination.
    The strcpy() function also returns the copied string.

    ! NOTE: When you use strcpy(), the size of the destination string should be large enough 
    ! to store the copied string. Otherwise, it may result in undefined behavior.
    */
    char string1[20] = "C programming";
    char string2[20];

    strcpy(string2, string1); //copying string1 to string2
    puts(string2);

    /*
    * 4. strcat()
    In C programming, the strcat() function contcatenates (joins) two strings.
    It takes two arguments: destination string, source string
    
    The strcat() function concatenates the destination string and the source string, 
    and the result is stored in the destination string.
   
    ! NOTE: When we use strcat(), the size of the destination string should be large 
    enough to store the resultant string. If not,! we will get the segmentation fault error.
    */

    char str1[100] = "This is ", str2[] = "programiz.com";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);

   puts(str1);
   puts(str2);

    return 0;    
}
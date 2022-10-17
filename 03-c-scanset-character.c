#include<stdio.h>

/*
        INDEX
1. What is scanset?
2. Inverse scanset
3. Getting input of a string using scanset
*/

int main() {
    /*
    * 1. What is scanset?
    scanf family functions support scanset specifiers which are represented by %[]. 
    ? Inside scanset, we can specify single character or range of characters. 
    
    While processing scanset, scanf will process only those characters which are part of scanset. 
    As soon as a character not included in the scanset is encountered, 
    the input after that character is not considered.

    We can define scanset by putting characters inside square brackets. 
    ! Please note that the scansets are case-sensitive.
    */
    
    char str[120];
    
    //* Example of usage of scanset
    //? scanf("%[A-Z,_,a,b,c]s", str);
    //? if we input `ZtZtZ` for this, only `Z` will be stored in `str`.

    /*
    * 2. Inverse scanset

    If we place a caret (^) in front of a character, the scanf statement will
    continue taking input until that particular character is encountered
    
    ? Example:
    ? scanf("%[^A]s", str);
    If we input `ahAhaha, only `ah` will be stored in `str`.
    */
    /*
    * 3. Getting input of a string with spaces using scanset
    
    * A. Problem with regular `%s` format specifier  
    ? scanf("%s", str);

    If we use this command and give input `hello world`, only `hello` will be stored
    
    * B. solution
    ? scanf("%[^\n]s", str);
    
    ^\n tells to take input until newline doesn’t get encountered. This enables us to take inputs
    with spaces.
    */
    return 0;    
}
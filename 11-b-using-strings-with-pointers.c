#include<stdio.h>

//TODO understand in more depth
//? This is another way of storing strings in C but it is a DEPRECATED method. refer `11-a-strings-in-C` for the first method.
int main() {
    char *pointer = "abc"; //! these strings aren't mutable
    /*
    The compiler allocates space for `pointer`, puts the string constant "abc" in memory somewhere else, 
    initializes `pointer` with the BASE ADDRESS of the string constant.

    
    */
    printf("%s %s\n", pointer, pointer+1); 
    /*
    This statement requires a pointer variable so that it can print the string stored in a contiguous location.
    ! We can say that we use the pointer variable just as a variable in which declared the string directly
    */
    
    /*
    here we are using the `%s` format specifier to display the string 
    whose first character is pointed by `pointer` variable. 
    
    The compiler is able to detect the ending of the string due to the presence of the null character '\0'.

    When we increment the pointer variable by 1, 
    suppose location of first character of the string is 201, it moves to next location 202, where second
    character of the string is stored. So, it displays the string from the second character onwards.
    */
    printf("%c %c\n", *pointer, *(pointer+1)); 
    /*
    This statement doesn't require the address stored in the pointer, because we just need to print one character
    and not a contiguous set of characters. 
    So, we dereference the pointer(get the value at the address pointed by the pointer and get just the character.
    */
    printf("%d %d\n", *pointer, *(pointer+1)); //this converts the character to its ASCII value
    
    
    printf("%d %d\n", pointer, (pointer+1)); 
    return 0;
}
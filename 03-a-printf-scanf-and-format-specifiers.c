#include <stdio.h>

/*
        INDEX
1. Format Specifiers and `printf` function
    A. Integer type
    B. Float type
    C. Double type
    D. Char type
    E. Address/Pointer type

2. `scanf` function
    A. taking input of two variables together
*/

int main() {   
    /*
    In C programming, printf() is one of the main output function. 
    The printf() is a library function to send formatted output 
    to the screen. The function prints the string inside quotations.

    1. Format Specifiers

    * A. Integer type
    ? %d - integer(decimal) number (always base 10)
    
    ? %4d - integer will be displayed right aligned to 4 places.
    ! Useful for right-aligning integers
    */
    
    printf("number:%4d\n", 1);
    printf("number:%4d\n", 12);
    
    /*    
    ? %o - octal number 
    (In C, Octal number is of the format: 012, with a leading 0)
    */
    
    printf("%o\n", 01212); //leading 0 of octal number won't be displayed

    /*
    ? %x - hexadecimal number (%X for capital letters)
    (In C, Hexadecimal number is of the format: 0x1a2, with leading 0x)
    */    
   
    printf("%x\n", 0xab10);//leading 0x of hexadecimal won't be displayed  

    /*
    * B. Float type
    ?%f - floating-point number with 6 digits of precision
    !IMP: 
    ?%.1f - 1 decimal place displayed
    
    ?%.f - 0 decimal place displayed 
    Rounding takes place to nearest integer. 
    For example if number is between 2 and 3:
        if n > 2.5, 3 will be displayed
        if n <= 2.5, 2 will be displayed
    */

    printf("%.1f \n", 2.54);
    printf("%.f \n", 2.51);
    printf("%.f \n", 2.50);

    /*
    * C. Double type
    %lf - floating-point with 15 digits of precision
    * D. Char type
    %c - character
    * E. Address/Pointer type
    %p - an address or a pointer (since a pointer stores addresses as well)
    */
    
    /*
    ? 2. scanf function

    scanf function takes two arguments. A format specifier AND 
    the memory location assigned to the variable to which the input
    value has to be written.

    ? So, for example, we have a variable 'var' of 'int' data-type 
    ? which has a memory location 100. 

    In order to store a user-defined value in 'var', we have to give
    "%d" as the first argument in the scanf function and address of g,
    which is 100 or &g (reference operator used).
    */

    long int a = 10;
    scanf("%ld", &a);
    printf("%ld\n", a);
        
    //! int a = scanf("%d", &a); NOT VALID. DO IN DIFFERENT LINES


    //* A. taking input of two variables together
        // int b;
        // int c;
        // scanf("%d %d", &b, &c);


    return 0;
}

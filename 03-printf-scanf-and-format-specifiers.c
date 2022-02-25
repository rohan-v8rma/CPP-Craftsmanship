#include <stdio.h>
int main() {
    printf("\n\n");
/*
In C programming, printf() is one of the main output function. 
The printf() is a library function to send formatted output 
to the screen. The function prints the string inside quotations.

Format Specifiers

* 1. Integer type
? %d - integer(decimal) number (always base 10)
? %o - octal number 
(In C, Octal number is of the format: 012, with a leading 0)
? %x - hexadecimal number (%X for capital letters)
(In C, Hexadecimal number is of the format: 0x1a2, with leading 0x)

* 2. Float type
%f - floating-point number with 6 digits of precision
!IMP: 
%.1f - 1 decimal place displayed
%.f - 0 decimal place displayed

* 3. Double type
%lf - floating-point with 15 digits of precision
* 4. Char type
%c - character

*/
    
//? printf function
    
    printf("%o\n", 010); //printf doesn't display leading 0 of octal
    printf("%X\n", 0x1a2); //prinft doesn't display leading '0x' of hexadecimal

//* printing two variables together
    printf("%d %d\n", 1, 2);


//? scanf function

    long int a = 10;
    scanf("%ld", &a);
    printf("%ld\n", a);
    return 0;

// int a = scanf("%d", &a); NOT VALID. DO IN DIFFERENT LINES


//* taking input of two variables together
    // int b;
    // int c;
    // scanf("%d %d", &b, &c);
}

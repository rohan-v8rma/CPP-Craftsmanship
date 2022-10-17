#include <stdio.h>
/*
                INDEX
1. Implicit Type Conversion Hierarchy in C            
2. Rules for Implicit Type Conversion while evaluating an Expression

*/

int main() {
/*
* 1. Implicit Type Conversion Hierarchy in C

Type conversion performed by the compiler is known as 
implicit type conversion.

?                  ------------> (no data loss)
* (LOWER DATA TYPE)
     char -> short -> int -> long -> float -> double -> long double  
*                                                    (HIGHER DATA TYPE)
!                  <------------ (data loss)
*/
/*
* 2. Rules for Implicit Type Conversion while evaluating an Expression

- All short and char are automatically converted to int, then,

- If either of the operand is of type long double, then others 
will be converted to long double and result will be long double.

- Else, if either of the operand is double, then others are 
converted to double.

- Else, if either of the operand is float, then others are 
converted to float.
*/
/*
char data type in C is internally represented as integer ASCII
value of that character. 
*/  
    int d = 65;
    printf("%c\n", d);
    //Here, we can see that when we print d using chararacter format
    //specifier, d gets implicitly converted from int to char in a sense.

    char a = 'b'; //ascii value = 98
    char b = 'd'; //ascii value = 100
    int s = 3 * a; 
    /* 
    first a and b are added to form a character of ASCII value 198
    then it is stored in s, which is of integer data type.
    ? Resultingly, value stored in s is 198.
    */
    printf("%d\n", s);

    // int a = 27;
    // int b = 25;
    // char c = a + b;
    // printf("%d", c);
    return 0;
}
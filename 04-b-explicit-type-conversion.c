#include<stdio.h>
/*
                INDEX
1. Need of explicit type conversion 
2. Explicit type conversion

*/
int main() {
/*
* 1. Need of explicit type conversion 
    
    ? float a = 2.3;
    ? printf("%d", a);
    this will throw an error since we are going from 
    higher to lower data type using the format specifier, 
    which can only be done using EXPLICIT TYPE CASTING.

* 2. Explicit type conversion

Type conversion performed by the programmer is known as 
explicit type conversion.
Explicit type conversion is also known as TYPE CASTING. 

SYNTAX:
    (<type>)(<expression>)
*/
    int a = 165;
    int b = 100;

    float d = (float)a/b; 
    /*
    Here, first 'a' is being explicitly converted to float, then the operation is performed.
    Which is why type of 'b' is also upgraded before the operation.
    */
    printf("%f\n", d);
    
    float c = (float)(a/b);
    /*
    Here, first the operation is carried out and then the result is explicitly converted into 
    'float' data type. 
    */
    printf("%f\n", c);
    
    // Another example of Explicit type conversion

    float floating_point = 2.51;
    int integer = (int)(floating_point) + 1; //no rounding occurs, only the value after the decimal point is lost
    printf("Explicit Type Conversion : %d\n", integer);

    return 0;
}
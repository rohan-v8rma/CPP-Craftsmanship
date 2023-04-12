#include <iostream>
/*
            INDEX
1. What are Macros?
    a. Object-like Macros
    b. Function-like Macros 
2. Predefined Macros in C/C++
*/

int main(){
/*
    * 1. What are Macros?
    A macro is a segment of code which is replaced by the value of macro. 
    Macro is defined by #define directive. There are two types of macros:

    ? a. Object-like Macros
    The object-like macro is an identifier that is replaced by value. 
    It is widely used to represent numeric constants. For example:
    */
    
    #define pi 3.14    //defining a floating-point number
    
    // Here, pi is the macro name which will be replaced by the value 3.14.
    
    printf("\n%f\n", pi);
    

    /*
    ? b. Function-like Macros

    The function-like macro looks like function call. For example:
    */

    #define MIN(a,b) ((a < b)?(a):(b))  //defining an inline function using `?:` operator
    
    // Here, MIN is the macro name.
    
    printf("\nMinimum between 10 and 20 is %d\n", MIN(10,20));


    /*
    * 2. Predefined Macros in C/C++

    ANSI C defines many predefined macros that can be used in c program.

    No.	 Macro	           Description
    1	__DATE__	represents current date in "MMM DD YYYY" format.
    2	__TIME__	represents current time in "HH:MM:SS" format.
    3	__FILE__	represents current file name.
    4	__LINE__	represents current line number.
    5	__STDC__	It is defined as 1 when compiler complies with the ANSI standard.
    */
    printf("\nDate: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("File name: %s\n", __FILE__);

    return 0;
}
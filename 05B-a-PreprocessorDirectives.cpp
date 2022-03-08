#include<iostream>
/*
        INDEX
INTRO. What are preprocessor directives?
1.  #include preprocessor directive
2. #define preprocessor directive

* INTRO. What are preprocessor directives?
Statements that begin with # sign - are directives for the preprocessor.
That means these statements are processed before compilation takes place.
! These preprocessor directives don't require semi-colon delimiters at the end of them.

* 1. #include preprocessor directive

The #include<iostream> statement tells the compiler's preprocessor to 
include the header file 'iostream'.
*/

int main(){
/*
* 2. #define preprocessor directive

The #define preprocessor directive is used to define constant 
or micro substitution. It can use any basic data type.
*/
    #define pi 3.14    //defining a floating-point number
    printf("\n%f\n", pi);

    #define MIN(a,b) ((a < b)?(a):(b))  //defining an inline function using `?:` operator
    printf("\nMinimum between 10 and 20 is %d\n", MIN(10,20));
    
    return 0;
}
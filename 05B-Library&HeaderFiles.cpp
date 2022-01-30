#include <iostream>
using namespace std;

/*
* The C++ language, in actuality, only contains some statements and very basic function like exit().

1. Library

The C++ language does not, within the actual definition of the language, provide any method of 
performing I/O operations. Therefore, various functions(that are not part of the basic C++ language)
that help perform  I/O operations and some other operations, that can't be directly performing using 
C++ basic statements, are stored together in form of a 'Library'.

These stored functions can be called and used for desired programs.

* In programming languages, a 'Library' is a collection of subprograms used to develop software.

! Libraries are not independent programs, rather they are helper code used in other 'independent programs'.

2. Header Files

* The C++ library of functions stores functions of same category (e.g., mathematical functions, string functions etc.) 
* under separate files known as 'Header Files', containing standard functions that our program might use.

To make use of predefined functions, the header file(that contains the function prototypes {Example of function prototype
is 'int isalnum (int ch)', meaning some piece text defining the input and return value of a function as well as it's name.})
must be included in a program so that the declarations of the functions become available to the program.

? The name of the header files are enclosed in <> because this signifies that these header files are a part of C++
? standard library thus, the compiler searches for them in the standard library path.

! Datatypes and constants used with the library functions are also defined in them.
*/

//stdio.h

#include <stdio.h>
/*
This header files defines types and macros needed for the standard I/O package. This file also 
defines the standard I/O predefined streams e.g., stdin, stdout, stdprn and stderr.

When we include <iostream> file in our program, this file i.e., stdio.h automatically gets included
in our program.
*/

//string.h

#include <string>
/*
This header file declares several string manipulation and memory manipulation routines.
*/

//math.h

#include <math.h>
/*
This header file declares prototypes for the math functions and the math error handlers.
The routines in math.h file perform mathematical calculations and conversions.
*/

int main(){

}
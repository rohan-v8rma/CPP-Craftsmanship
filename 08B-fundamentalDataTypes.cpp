/*
CODING INDEX 
1. Obtaining the amount of space occupied in the memory by each data type
2. Obtaining the ASCII value of a character
3. Incrementing the ASCII value of a stored 'char' data
*/

/*
COMMENT INDEX
1. Fundamental and Derived Data Types 
2. Elaboration on Fundamental Data Types
3. Data Type Modifiers
*/



//! 1. Fundamental and Derived Data Types

/*

The Fundamental Data Types in C++ are char, string, int, float, 
double and void that represent character, string of characters, 
integer, floating-point, double floating-point and valueless data.


Derived Data Types are constructed from fundamental data types. 
They can be built-in or user-defined. 
E.g :- array, functions, pointers, references, constants, classes,
structures, unions and enumerations.
*/



//!  2. Elaboration on Fundamental Data Types

/*
? A. Integer (int) - 1,4,100 - 2 or 4 bytes = 16 or 32 bits assigned contiguously



? B. Floating-point number (float) - 3.14, 1.00 - 4 bytes = 32 bits --> 8 significant digits
(each digit - 0 to 9 requires 4 bits, 0000 to 1001)
A floating constant has 2 parts --> a 'mantissa' and an 'exponent'

E.g :- 2.5E02 or 0.17E-3 <-- another type of representation of float
In the above examples, 2.5 and 0.17 are the mantissas &
02 and -3 are the exponents

Although floating-point numbers can represent numbers between integers and
can represent a larger range of numbers, floating-point operations are 
slower than integer operations. 



? C. Double precision floating-point (double) - just like float but is 8 bytes --> 16 significant digits

It stores floating-point numbers with much larger range and precision.
It is used when type float is too small or insufficiently precise.

But, the type double is larger and slower than type float.



? D. Void - takes up no space

*check voidExplanation.cpp



? E. Character (char) - c, d, @, % - 1 byte = 8 bits - represented by ascii in 8 bit form

The char type is really another integer type (as inside memory, it actually holds
numbers i.e., equivalent ASCII codes of characters/symbols).

! ASCII Values are never negative so char values will always be stored internal 
! as positive integers.

We can use:
    character = 'a';
    int var = character;
    character ++;
to get the ascii code of the character stored in var, and the increment
operator can be used to get the next subsequent ascii character.
OR 
We can directly use, for example,  character == 50 to confirm relations
directly, without having to assign ascii_code of character to an integer.

Single character constants are of this data type, e.g- 'a', 'Z']
Character constants must be enclosed only in single quotation marks.

NOTE that 'char' data type is not the same as 'string' data type, char is used to 
represent only single characters where string can represent a collection of 
characters.



? F. String Literals (string) - refers to a sequence of characters enclosed within double quotes
E.g :- "abc", "jk"
Each string literal is automatically added with a special character "\0" as a terminator
So, the size of the string is the number of character plus 1 for this terminator
E.g :- size of "abc" is 4. it is stored as "abc\0" in the memory

Also, if we write '\0' (which is by default added to the end of every string), 
in the middle of a string, the part of the string after it is ignored.
(No particular application, just an observation.)

? G. Boolean (bool) - 0, 1 - 1 byte = 8 bits
*/

//! 3. Data Type Modifiers



/*
Except type void, the basic data types may have various modifiers preceeding them.


? a. Integer Type Modifiers

C++ offers 3 types of integers: short, int and long, 
each representing a different integer size. We can prefix int according to our
range needs. E.g - short int a; 

Each comes in both signed and unsigned versions(in binary signed representation, 
the Most Significant Bit{MSB} or the left most bit, represents the sign of the 
integer, 0 means + and 1 means -). 
This gives us a choice of six different integer types.

Advantage of unsigned integers is when a quantity can't be negative(population,
inventory counts etc.) we can store a bigger number in the same amount of space
as we get one extra bit which was previously occupied by the sign bit.


? b. Character Type Modifiers

The char type is guaranteed to be large enough to represent the entire range
of basic symbols - all the letters, digits, punctuation and the like because 
it occupies 1 byte(8 bits) by default and 8 bits can represent 256 unique values
which are more than enough for ever character.

Since char type is just another type of integer, it can be signed or unsigned.

By default, char is signed and the numerical values it can hold range from 
-128 to 127. So all characters(usually all the characters present on the keyboard),
occupy an ASCII value below 127. So their numerical codes aren't affected in signed
or unsigned char. 
But other special characters are associated with their normal numerical codes in 
unsigned, since in unsigned, the range is from 0 to 255 but in case of signed, suppose 
a character has ASCII value of 128, it's numerical code in signed char will be -128,
for a character with ASCII value of 129, it will be -127 and so on.


? c. Floating-point Type Modifiers

C++ has 3 floating-point types: float, double and long-double,
(double is just long float but we call it double, there is no
such thing as long float.)

float --> 4 bytes --> 32 bits --> 8 significant digits
double --> 8 bytes --> 64 bits --> 16 significant digits 
long double --> 10 bytes --> 80 bits --> 20 significant digits
(each digit - 0 to 9 requires 4 bits, 0000 to 1001)

These are signed by default and only some implementations
allow for unsigned. But this is not advisable, as it reduces
the portability of your code.
*/

#include<iostream>
using namespace std;

int main(){

    int a; 
/*
declaration in the format <data type> <variable name> where <data type> is a legal
C++ data type and <variable name> is a valid identifier
*/
    a = 12; 
//initialisation



//Obtaining the amount of space occupied in the memory by each data type

    cout << "size of int : " << sizeof(a) << endl;

    float b;
    cout << "size of float : " << sizeof(b) << endl;

    char c;
    cout << "size of char : " << sizeof(c) << endl;

    bool d;
    cout << "size of bool : " << sizeof(d) << endl;


    short int si;
    long int li;
    cout << "size of short int : " << sizeof(si) << endl;
    
    cout << "size of long int : " << sizeof(li) << endl;
//we get the size of these datatypes in bytes as output



//Obtaining the ASCII value of a character 

    char ch = 'z';
    int ascii_code = ch;
    cout << "The ASCII code for " << ch << " is : " 
    << ascii_code << '\n';



//Incrementing the ASCII value of a stored 'char' data

    ch++; //OR ch = ch + 1 OR any increment for that matter
    cout << ch; 
/*
Output will be B, the character with the subsequent ASCII number code.
 
This increment operator changes the associated ASCII number code 
of the character stored, and the character also changes as a 
result of that to the character with the new corresponding 
ASCII number code.

If, for example, the stored value of ch would have been 'z',
and increment by 1 would've been implemented, the stored 
character would change to '{' which is after 'z' in ASCII
code.
*/
    cout << "\n\n";
    return 0;
}

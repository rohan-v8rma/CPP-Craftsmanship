#include <iostream>
using namespace std;
/*
    INDEX
1. Relational Operators
2. Points of caution for Relational Operators
    A. Floating-point arithmetic
    B. Signed & Unsigned Values
    C. '==' sign
*/

int main(){
/*
1. Relational Operators

In the term relational operator, relational refers to the relationships that values(or operands)
can have with one another. Thus, the relational operators evaluate the relationship between
different operands.

C++ provides six different relational operators (<,>,<=,>=, ==, !=) for comparing 
numbers and characters. But, they don't work with strings. If the comparison is 'true', 
the relational expression results into the value 1 and to 0, if the comparison is 'false'.

We can assign outputs of relational expressions to variables of bool data type.
*/
    int val1 = 2;
    int val2 = 3;
    
    bool x = val1 == val2;
    cout << "val1 == val2 is " << (val1 == val2) << endl;
// OR cout << "val1 == val2 is " << x;
    


// 2. Points of caution for Relational Operators

/*
 A. Floating-point arithmetic
Floating-point arithmetic is not as exact and accurate as the integer arithmetic is.

For instance, 3*5 is exactly 15, but 3.25 * 5.25 is nearly equal to 17.06 
(if we are working with numbers upto 2 decimal places). The exact number
resulting from 3.25 * 5.25 is 17.0625. Therefore, after any calculation 
involving floating-point numbers, there may be a small residue error. Because of 
this error, WE SHOULD AVOID EQUALITY AND INEQUALITY COMPARISONS ON FLOATING-POINT
NUMBERS.
*/

/*
 B. Signed & Unsigned Values
Another point of caution is related to signed and unsigned values.

If we compare a signed and unsigned value, the 
compiler will treat the signed value as unsigned, which might not be as big of a deal.
But, if the signed value is negative, it will be treated as an unsigned integer
but it will still have the sign bit which will be taken as a general bit, so the
result of this comparison will be arbitrary.

For example, (let us consider 4 bit system for simplicity)
if we have 
    unsigned int a = 3;
    int b = -4;

Considering the expression,
    a < b
in case of a, there is no sign bit and binary representation will be 0011
in case of b, since it is not specified to be unsigned, it will have a sign bit.
representation of 4 in binary is 0100 but -4 will be 1100 (1 for -ve sign).

When comparing signed and unsigned values, signed values are treated as unsigned.
so in case of b, the sign bit will be treated as a numerical bit, so value of 
1100 = 12 and a < b will be evaluated to 1 which is not true.

However, if we really need to compare the two, then we should cast(explicitly
convert the data type) one of the two values so that they are both signed or unsigned.

Thus, the expression can be cast as follows:
    (signed int) a < b;

The operator (dataType) casts an operand into the given data type. 
*/

/*
 C. '==' sign

While comparing for equality, make sure to use two equal to signs because one equal to means
assignment.

This is very important as if we write:-
    if (p = 4){
        codeBlock1
    }
It will not throw an error.

In C++, this will function as a truth value test of 'p' because initialization of a variable can 
be done almost anywhere and will always evaluate to 'TRUE' unless p = 0 is written (in which case, 
truth value of p will be 'false'), in which case, it will evaluate to 'FALSE'. 
*/

    cout << "\n\n";
    return 0; 
}
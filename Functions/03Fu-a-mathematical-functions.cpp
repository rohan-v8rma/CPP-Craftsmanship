#include <iostream>
using namespace std;

/*
C++'s mathematical functions that are part of the C++ standard library and are contained in 
the header file <math.h>.

All the mathematical functions part of the math.h file are of the form : 

? double functionName(double < Parameter 1 >, double < Parameter 2> ...)

which means these functions accept double floating point values as well as return them.

! The trignometric functions accept values in radians.


! Also if suppose your passing an argument of pi/2 to a trignometric function,
! write 22.0/14.0 so as to prevent it from rounding off.
! If we were to write 22/14, it would not implicitly convert the type to 'float'
! because both the numerator and denominator are of 'int' data type.
! If we even wrote 22.0/14, it would change type of denominator to float, since
! different data types are mixed in an expression.

? Also, if suppose we are executing:
?    cout << asin(1);
// output will be 2.3029

We will get a double value as return type itself of the function is double, it doesn't
matter if the argument is of integer or float or double data type.
But datatype of argument will only matter in case of multiplication or division as rounding
might take place before the passing of the argument.

? For instance:
? cout << asin(3/2);
//this will also have output 2.3029 because of rounding of 3/2 to 1.

*/
#include <math.h>
int main(){


//* 1. Trignometric Functions

    cout << "sin(22.0/14.0) is " << sin(22.0/14.0) << '\n';
//Similarly cos(<angle>) and tan(<angle>)

    cout << "sinh(22.0/14.0) is " << sinh(22.0/14.0) << '\n';

//This function returns the hyperbolic sine of the argument.
//Similarly cosh(<angle>) and tanh(<angle>)

    cout << "asin(1) is " << asin(1) << '\n';

//Similarly acos(<value>) and atan(<value>)
/*
? If suppose we are executing:
?    cout << asin(1);
// output will be 2.3029

We will get a double value as return type itself of the function is double, it doesn't
matter if the argument is of integer or float or double data type.
But datatype of argument will only matter in case of multiplication or division as rounding
might take place before the passing of the argument.

? For instance:
? cout << asin(3/2);
//this will also have output 2.3029 because of rounding of 3/2 to 1.
*/

    cout << "atan2(4,3) is " << atan2(4,3) << '\n';
    cout << "atan2(4.0,3.0) is " << atan2(4.0,3.0) << '\n';
/*
Now, in this case it returns tan inverse of P/B or 4.0/3.0.

! The point to note is that both the arguments are of double data type,
! meaning even if integers are specified as the arguments, they will
! be converted 4.0 and 3.0 because taking arguments as double is a property
! of the function.

? Similarly, if asin(1) is executed, the argument is first converted to 1.0
? as it is a property of the function to take arguments in double data type.

* When we pass 4/3 as an argument, it is first divided according to it's type,
* to an integer output which is 1, then converted to 1.0 by function because of its property.
*/



//* 2. Exponential Functions

    cout << "exp(1.0) is " << exp(1.0) << '\n';
//This function returns the natural logarithm 'e' raiseD to its argument

    cout << "log(2) is " << log(-1) << '\n';
/*
This function returns the natural log of the given argument.
Domain error(-nan) occurs if negative number is entered.
Range error(-inf) occrus if the argument is zero.
*/
    cout << "log10(1000) is " << log10(1000) << '\n';
//This function returns the base 10 log of the given argument

    cout << "pow(3.0, 4.0) is " << pow(3.0, 4.0) << '\n';
/*
This function returns base(first argument) raised to exponent(second argument).
An domain error occurs in two cases,
if base is zero and the exponent is <= 0
OR
if base is negative and the exponent is fractional
*/



//* 3. Other functions

    cout << "ceil(1.03) is " << ceil(1.03) << '\n';
//This function returns the smallest integer not less than the argument.

    cout << "floor(1.03) is " << floor(1.03) << '\n';
//This functions returns the largest integer not more than the argument.

    cout << "fabs(-1.4) is " << fabs(-1.4) << '\n'; 
//This function returns the absolute value of the argument.
}
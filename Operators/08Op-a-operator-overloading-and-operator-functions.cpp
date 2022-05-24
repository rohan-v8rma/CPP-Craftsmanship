#include <iostream>
/*
* What is Operator Overloading?

In C++, we can make operators to work for user defined classes. 
This means C++ has the ability to provide the operators with
a special meaning for a data type, this ability is known as operator overloading. 

Some example classes where arithmetic operators may be overloaded are 
Complex Number, Fractional Number, Big Integer, etc.

Note that operator precedence still remains same in the case of operator overloading.

* What are Operator Functions?

Operator functions are like regular functions but they have the `operator` keyword 
after the return type, followed by the operator we wish to overload.
 
It is essential that we define a return type for an operator function
because the operator has to perform an `operation` on the operand(s)
and return something in order for us to assign the operated value
somewhere.
        

The syntax is as follows:
? <return-type which is same as the operand(s)> operator <any operator> ( parameter(s) ) {
?     ...
?     ...
?     return <value>;
? }
*/


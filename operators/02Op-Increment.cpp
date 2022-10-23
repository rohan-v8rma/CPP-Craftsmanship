#include <iostream>
using namespace::std;
/*
            INDEX
* 1. Introduction about Increment/Decrement Operators (++ and --)
* 2. Do increment expressions return values as well?
    ? Prefix version (++a) 
    ? Postfix version(a++)
* 3. Modification of a variable more than once between two sequence points
*/

/*
* 1. Introduction about Increment/Decrement Operators (++ and --)

C++ includes 2 useful operators not generally found in other computer languages
(except C). These are the increment(++) and decrement(--) operators. 

The operator ++ adds 1 to its operand, and -- subtracts 1,
! along with returning a value

So
a = a + 1 or a += 1 is ALMOST same as a++ or ++a

a = a - 1 or a -= 1 is ALMOST same as a-- or --a

TODO: Look at point 2 to understand why they are NOT exactly same.

The prefix and postfix version have the same effect on the operand but they
differ when they take place in an expression.


* 2. Do increment expressions return values as well?

It is important to understand that expressions like (n++) or (++n), perform two tasks,
? a. They increment/decrement the variable.
? b. Return a value either before or after the increment/decrement operation.

So if we assign an increment expression to a variable like:

! variable = ++n;

! So the expression on the right hand side will increment `n` first, then 
! return the new value of `n`. As a result (n+1) gets assigned to `variable`.


Now coming to the two types of operators:

? Prefix version (++a): 

In an expression, C++ performs the increment or decrement operation before 
using the value of the operand to evaluate the expression.
PRINCIPLE : Change-then-use
*/
int main() {
    int sum = 8;
    int prefix_count = 6;
    int postfix_count = 6;
    int prefix_final, postfix_final;

    prefix_final = sum * ++prefix_count;    
    /*
    In this case value of prefix_count swill be incremented before the multiplication
    takes place. So the result will be 8 * (6+1) = 56    
    */
    cout << prefix_final << '\n';

    /*
    ? Postfix version(a++): 
    In an expression, C++ performs the increment or decrement operations after 
    using the value of the operand to evaluate the expression.
    PRINCIPLE : Use-then-change
    */
    postfix_final = sum * postfix_count++;
    /*
    In this case the value of postfix_count will be incremented after the multiplication
    takes place. So the result will be 8 * 6 = 48 after which value of postfix_count will change to 7
    */
    cout << postfix_final << '\n';
    //In both the cases final value of the count will be same, only difference will be in value of expression

    /*
    * 3. Modification of a variable more than once between two sequence points

    ! Important Case: b = a++ + ++a
    Such an expression, where value of a variable is being modified more than once,
    is UNDEFINED in C++. Some compilers won't give errors and give some result but no C++ rule
    defines their execution. It is completely compiler dependent.

    TODO Look at learning-C/README.md for more details about sequence points    
    */

    cout << "\n\n";    
    return 0;
}
#include <iostream>
using namespace std;
/*
    INDEX
1. Arithmetic Operators
    A. Binary Operators
    B. Unary Operators
2. Increment/Decrement Operators (Prefix and Postfix)
5. Logical Operators
*/
int main(){
/*
1. Arithmetic Operators

a. Binary Operators

To do arithmetic, C++ uses operators. It provides for 5 basic arithmetic
calculations : addition, subtraction, multiplication, division and remainder
which are +,-,*,/ and % respectively.
Each of these operators is a binary operator i.e., it requires two values (operands)
to calculate a final answer.

+, -, * : work as expected. The operands may be of integer or float types
% : works as expected. But both operands can only be of integer type.
/ : works as expected. Operands may be of int, float or double types.

b. Unary operators
Apart from these binary operators, C++ provides two unary arithmetic operators,
(that require one operand) also, which are unary + and unary -

Unary + : It precedes an operand.
Unary - : It precedes an operand as well. It reverses the sign of the operand's
value.
*/


/*
2. Increment/Decrement Operators (++ and --)

C++ includes 2 useful operators not generally found in other computer languages
(except C). These are the increment(++) and decrement(--) operators. 

The operator ++ adds 1 to it's operand, and -- subtracts 1.

In other words,
a = a + 1 or a += 1 is the same as a++ or ++a

a = a - 1 or a -= 1 is the same as a-- or --a

The prefix and postfix version have the same effect on the operand but they
differe when they take place in an expression.

Prefix version (++a): In an expression, C++ performs the increment or 
decrement operation before using the value of the operand to evaluate 
the expression.
PRINCIPLE : Change-then-use
*/
    int sum = 8;
    int prefix_count = 6;
    int postfix_count = 6;
    int prefix_final, postfix_final;

    
    prefix_final = sum * ++prefix_count;
//In this case value of prefix_count will be incremented before the multiplication
//takes place. So the result will be 8 * (6+1) = 56    
    
    cout << prefix_final << '\n';

/*
Postfix version(a++): In an expression, C++ performs the increment 
or decrement operations after using the value of the operand to evaluate 
the expression.
PRINCIPLE : Use-then-change
*/
    postfix_final = sum * postfix_count++;
//In this case the value of postfix_count will be incremented after the multiplication
//takes place. So the result will be 8 * 6 = 48 after which value of postfix_count will change to 7
    
    cout << postfix_final << '\n';

//In both the cases final value of the count will be same, only difference will be in value of expression

/*
Important Case: b = a++ + ++a
Such an expression, where value of a variable is being modified more than once,
is UNDEFINED in C++. Some compilers won't give errors and give some result but no C++ rule
defines their execution. It is completely compiler dependent.
*/

//Another Example
    int n = 7;
    cout << "n++ = " << n++ << endl;
    cout << "n = " << n << endl;
/*
In this case as well, since n++ is written directly to be written to the output stream,
C++ will first use the value of n(which is 7), write it to the output stream, then 
increment n to 8.
If we were to increment it beforehand or use ++n, we would have seen 8 as the first output.
*/




    cout << "\n\n";
}



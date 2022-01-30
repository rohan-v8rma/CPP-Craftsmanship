#include <iostream>
using namespace std;
/*
    INDEX
1. Logical Operators
    A. Logical OR "||"
    B. Logical AND "&&"
    C. Logical NOT "!"
2. Important points relating to Logical Operators
*/

int main(){

/*
1. Logical Operators

Logical operators refer to the ways relationships created using relational operators,
can be interconnected. 
C++ provides three logical operators to combine existing expressions. These are 
 || (logical OR), && (logical AND) {binary operators} and ! (logical NOT) {unary operator}.

 A. Logical OR "||"

The combined expression containing the logical OR operator evaluates to true i.e., 
1 if either of it's operands/expressions evaluate to true/non-zero.

(4 == 4) || (5 == 8)  --> will evaluate to 1/true since first relation is true
    0    ||     0     --> will evaluate to 0/false since neither operand has truth value 1
 (5 > 8) || (5 < 2)   --> will evaluate to 0/false since neither relation has truth value 1
    0    ||     8     --> will evaluate to 1/true since 8 has truth value 1

B. Logical AND "&&"

The combined expression containing the logical AND operator evaluates to true i.e.,
1 if both of it's operands/expressions evaluate to true/non-zero.

(6 == 3) && (4 == 4)  --> will evaluate to 0/false since only second expression has truth value 1
(6 < 9)  && (4 > 2)   --> will evaluate to 1/true since both expressions have truth value 1

C. Logical NOT "!"

The logical NOT operator negates or reverses the truth value of the expression following
it i.e., if the expression is true, then !expression is false, and vice versa.

Or, another way of saying it is, if the expression is non-zero then !expression is zero and
if the expression is zero, then the !expression is 1. 
*/

//2. Important points relating to Logical Operators

    int z = 9;
    if ((z >= 10) && (z <= 20))
    {
        cout << "z is between 10 and 20";
    }


    if (10 <= z <= 20){
        cout << "z is between 10 and 20";
    }
    /*
    We can't use this method as it this stye of conditions don't work 
    in C++. We can only combine conditions using &&(and), ||(or).
    It will give a faulty output.
    */

    cout << "\n\n";
    return 0;
}

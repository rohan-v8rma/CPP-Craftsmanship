#include <iostream>
using namespace::std;
/*
! As mentioned in 01Fu-c-function-parameters.cpp
! Signature of a function is the number and type of parameters passed to it.

* What is Function Overloading?

Function overloading is a feature of object oriented programming where two or more functions
can have the same name but different parameters.

In Function Overloading “Function” name should be the same and the arguments should be different.

? Function overloading can be considered as an example of polymorphism feature in C++.

* How does Function Overloading work?

- Exact match:- (Function name and Parameter)

- If a not exact match is found:–
    -> Char, Unsigned char, and short are promoted to an int.
    -> Float is promoted to double

- If no match found:
    -> C++ tries to find a match through the standard conversion.

- Otherwise error is thrown

* Example of Function Overloading:
*/
void print(int i) {
    cout << " Here is int " << i << endl;
}
void print(double  f) {
    cout << " Here is float " << f << endl;
}
void print(char const *c) { 
    /* 
    this function is taking an argument of a pointer string 
    which is already an immutable data type so the const keyword is 
    redundant over here
    */
    cout << " Here is char* " << c << endl; 
}
 
int main() {
    print(10);
    print(10.10);
    print("ten");
    return 0;
}

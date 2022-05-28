#include <iostream>

/*
* Types of Polymorphism

There are two types of polymorphism in C++,

1. Compile time polymorphism
2. Run time polymorphism
*/

/*
* 1. Compile-time polymorphism

! Compile-time polymorphism is also known as Static binding, Early binding or overloading.

BINDING refers to the process of converting identifiers (such as variable and performance names) 
into addresses. Binding is done for each variable and functions.

? The meaning of BINDING in the context of Functions in C++ is the process of matching 
? the function call with the right function definition.

Method overloading is the compile-time polymorphism where more than one methods 
share the same name with different parameters or signature and different return type.

FUNCTION OVERLOADING and OPERATOR OVERLOADING come under Method Overloading.

Here, the compiler decides while compiling which version of the overloaded function 
to run in the case of function overloading 
(This decision is made by the compiler by seeing the signature of the function that is called).

AND

which operator function to use to define the operator behaviour in the case of operator overloading.
(This decision is made by the compiler by seeing the data type of the operands.)

TODO Read `Operators/07Op-operator-functions.cpp` for more details on OPERATOR OVERLOADING
TODO Read `Functions/06Fu-a-function-overloading.cpp` for more details on FUNCTION OVERLOADING

? Both these function calls (regular function call OR operator function call) are resolved by the compiler itself.

! NOTE that compile time polymorphism is less flexible.
*/

/*
* 2. Run-time polymorphism

Dynamic Binding OR Late Binding

In this type of binding the compiler adds code that identifies the object type at runtime 
then matches the call with the right function definition. 

This is achieved by using virtual functions.

TODO Read `16oop-virtual-functions.cpp` for more details on Late Binding
*/
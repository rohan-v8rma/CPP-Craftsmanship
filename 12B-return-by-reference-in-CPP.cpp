#include <iostream>
using namespace::std;

int globalVar;
int& test();

/*
Note that scope of the function `test` and `globalVar` is same
*/

int main() {

    test() = 5;

    int* dynamic = &(test());
    
    cout << *dynamic;
    
    globalVar = 7;
    
    cout << *dynamic;    

    return 0;
}

int& test() {
    return globalVar;
}
/*
In program above, the return type of function test() is ( int& ).

Hence this function returns by reference.
    
The return statement is return globalVar; 

but unlike return by value, this statement doesn't return value of `globalVar`, 
instead it returns variable `globalVar` itself.

! NOTE that in C, when the return type was `int*`, we had to return an address of a variable
! which had already been passed by reference into the function, by first referencing it using the `&` operator.

? Here, we just have to return the variable which had already been passed by reference using the C++ method ( int& ).

? Unlike, the C method where the returned value was actually bound by address to the original variable,
? here, only a reference is returned, meaning we can replace the function call at the places,
? where the variable itself is used.

Then the variable `globalVar` is represent by  the left side of the assignment operatation, 

test() = 5; 

assigning 5 to `globalVar`.
*/
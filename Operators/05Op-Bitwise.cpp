#include <iostream>
using namespace std;
/*
        INDEX
1. Bitwise left shift (<<)
2. Bitwise right shift (>>)
*/
int main () {
/*
* 1. Bitwise left shift (<<)
SYNTAX:
'variable-name' << 'number of bits left shifted';
This operator shifts the bits of an integer towards left.
*/
    int a = 1;
    cout << (a << 20);
/*
* 2. Bitwise right shift (>>)
SYNTAX:
'variable-name' >> 'number of bits right shifted';
This operator shifts the bits of an integer towards right.

! NOTE: If we keep right-shifting, the variable will ultimately 
! become 0.

TODO We can use Bitwise shift on floating point numbers but it is a 
TODO complex process and we will learn it digital logic course
*/
}
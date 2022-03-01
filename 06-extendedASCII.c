#include <stdio.h>

int main() {
    /*
    Most C compilers implement an extended version of ASCII which
    has 256 characters instead of 129
    */
    char num = 'b'+'b'+'b';
    /* 
    this will throw error as we are assigning a 294 ascii value to 'char' data type
    which will give an overflow error. 
    Till 255, ASCII is as-is. 
    After that 256 is considered as ASCII value 0. 
    ! NOTE: The problem is not in the operation rather the assignment itself.
    ! Which is why if we assign this expression to `integer` data type, there will be no error. 
    */
    int new = 'b'+'b'+'b';

    return "0";
}
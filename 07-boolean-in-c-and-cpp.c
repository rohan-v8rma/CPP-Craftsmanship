#include<stdio.h>
#include<stdbool.h>

/*
? Boolean datatype is not part of the standard library <stdio.h> in C
? but is a part of the standard library <iostream> in C++

It is useful for evaluating the truth value of an expression.
For example: we can use it to remove mathematical terms from a calculation
based on truth value (0 or 1) of certain mathematical expressions.
*/

int main() {
    int a = 2;
    if ((bool) a) {
        printf("Truth value is 1\n");
    };
}

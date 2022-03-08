#include<stdio.h>

/*
* What is puts in C?
The puts function in C is used to write a line or string to the output stream (stdout) that 
is up to, but does not include, the null character. The puts function also appends a 
newline character to the output and returns an integer.

* Parameters
The puts function takes a single mandatory parameter, i.e., a null-terminated character array.

* Output
The puts function writes the provided argument to the output stream and appends 
a newline character at the end.

* Return Value
If the execution is successful, the function returns a non-negative integer; 
otherwise, it returns an EOF (End-of-File) for any error.
*/

int main() {
    puts("hello world");
    return 0;
}
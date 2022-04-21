#include<stdio.h>

int main() {
    const char* pointer = "string";
    pointer += 1; //this code works because the const modifier is applicable on the string rather than the address pointed to by the pointer
    printf("%c\n", *pointer);
    
    return 0;
}


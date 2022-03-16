#include <stdio.h>

int main()
{
    char hello[] = "abc";
    hello[1] = 'y';
    printf("%s\n", hello);

    char *pointer = "abc";
    //pointer[1] = 'y';  //this command will throw an error as pointer strings are immutable
    printf("%s\n", pointer);

    
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 165;
    int b = 100;
    float c = (float)(a/b);
    printf("%f\n", c);
    
    float d = (float)a/b;
    printf("%f\n", d);
    return 0;
}
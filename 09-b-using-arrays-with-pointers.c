#include <stdio.h>

int main() {
    int x[4];
    int index;

    for(index = 0; index < 4; index++) {
        printf("&x[%d] = %p\n", index, &x[index]);
    }


    printf("Address of array x: %p\n", x);
    printf("Address of array x: %p\n", &x); //both give the same output

    return 0;
}
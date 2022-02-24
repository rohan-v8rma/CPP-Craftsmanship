#include <stdio.h>
int main() {
/*
all characters have truth value 1 except 
'\0' which has truth value 0.
*/
if ('\0') {
    printf("truth val 1");
}
else {
    printf("truth val 0");
};

    printf("\n");
    return 0;
}

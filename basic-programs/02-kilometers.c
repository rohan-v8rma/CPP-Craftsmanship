#include <stdio.h>

int main () {
    int kilometers, bill;
    bill = 0;
    scanf("%d", &kilometers);
    if (kilometers >= 100) {
        bill += (6 * (kilometers - 100));
        kilometers = 100;
    };
    if (kilometers >= 10) {
        bill += 8 * (kilometers - 10);
        kilometers = 10;
    };
    bill += 15 * kilometers;
    
    printf("%d", bill);
}
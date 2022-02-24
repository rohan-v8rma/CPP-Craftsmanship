#include <stdio.h>

int main() {
    int hrs_used;
    int min_used;
    printf("Enter time in the format: hours minutes\n");
    scanf("%d %d", &hrs_used, &min_used);
    if ((hrs_used > 7) || ((hrs_used == 7) && (min_used > 0))) {
        printf("Usage time exceeded!\n");
    }
    else {
        int price = 0;
        if (hrs_used >= 5) {
            price = 200;
            hrs_used -= 5;
        };
        price += (hrs_used * 50) + (min_used * 1);
        printf("The amount to be paid is: %d", price);
    };

    return 0;

}
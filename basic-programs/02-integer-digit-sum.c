#include <stdio.h>

int main() {
    int integer = 234325;
    int digit;
    int sum = 0;
    int higher_digit = -1;
    int divisor = 1;
    while (higher_digit != 0) {
        digit = ((integer % (10 * divisor)) / divisor);
        sum += digit;
        integer -= divisor * digit;
        divisor *= 10;
        higher_digit = integer / divisor;
    }
    printf("Sum of the digits is %d\n", sum);
    return 0;
}
#include <stdio.h>

int main() {
    int integer, digit;
    int sum_of_digits = 0;
    
    scanf("%d", &integer);

    while (integer != 0) {
        digit = integer % 10; //gives current unit digit of integer
        sum_of_digits += digit; //adds the digits to the sum
        integer /= 10; //makes the tens digit the units digit by performing floor division
        //repeat
    };
    printf("Sum of the digits is %d\n", sum_of_digits);
    return 0;
}
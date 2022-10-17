#include<stdio.h>
/*
Two numbers are said to be 'amicable' if they are different and the sum of the divisors of each number 
(including 1 but excluding the number itself) equals the other number. 

? For example: 2620 is divisible by 1, 2, 4, 5, 10, 20, 131, 262, 524, 655 and 1310; these add up to 2924.
Similarly, the proper divisors of 2924 add up to 2620.
*/

int proper_divisor_sum(int number) {
    int sum = 0;
    for(int divisor = 1; divisor <= (number / 2); divisor++) {
        if (number % divisor == 0) {
            sum += divisor;
        };
    }
    return sum;
}

int main() {
    int first_number = 66928;
    int second_number = 66992;
    
    if ((first_number == proper_divisor_sum(second_number)) && 
        (second_number == proper_divisor_sum(first_number)) && 
        (first_number != second_number)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    };
    return 0;
}
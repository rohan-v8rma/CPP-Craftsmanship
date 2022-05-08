#include <stdio.h>

union car {
    long int vin_number;
    int price;
    float power;
};

int main() {
    union car aston_martin, *car_pointer;

    car_pointer = &aston_martin;
    
    // modifying a union member using union pointer
    printf("Enter vin number: ");
    scanf("%ld", &(car_pointer -> vin_number));

    // accessing union member using the union's pointer
    printf("%ld", car_pointer -> vin_number);

    // accessing the union member using the union directly
    printf("%ld\n", aston_martin.vin_number);

    return 0;
}
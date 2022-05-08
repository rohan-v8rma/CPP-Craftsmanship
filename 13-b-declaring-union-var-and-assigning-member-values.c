#include <stdio.h>

/*
When a union is created, it is a user-defined type. However, no memory is allocated.
To allocate memory for a given union type and work with it, we need to declare union variables.

A union variable is always the size of its largest element.
*/

union car {
    long int vin_number;
    int price;
    float power;
};

int main() {
    
    //* Declaring a union variable
    
    union car aston_martin, *car_pointer;

    car_pointer = &aston_martin;

    //* Assigning values to union members

    aston_martin.price = 1000;
    
    // when `aston_martin.power` is assigned a value,
    // `aston_martin.price` will no longer hold 1000

    aston_martin.power = 812.5;

    printf("Garbage value: %d\n", aston_martin.price);
    // As we can see, a garbage value is returned

    return 0;
}
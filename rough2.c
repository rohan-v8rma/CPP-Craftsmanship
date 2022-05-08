#include <stdio.h>
#include <string.h>

union car {
    char name[50];
    int price;
    float power;
};

int main() {
    union car car_1;

    //Not working
    car_1.name[] = "aston martin";
    
    //This is working
    strcpy(car_1.name, "aston martin");

    printf("%s\n", car_1.name);


    return 0;
}

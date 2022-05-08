#include <stdio.h>

/*
A UNION is a user-defined type similar to structs in C except for one key difference.

Structures allocate enough space to store all their members, 
whereas unions can only hold one member value at a time.

The same storage space is utilized for multiple members one at a time.

? Creating a union:
*/

union car {
    char name[50];
    int price;
    float power;
};

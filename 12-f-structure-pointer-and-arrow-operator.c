#include <stdio.h>
/*
* Arrow Operator (->)

An Arrow operator in C/C++ allows to access elements in Structures and Unions. 
It is used with a pointer variable pointing to a STRUCTURE or UNION. 

* Difference between Dot(.) and Arrow(->) operator:  

The Dot(.) operator is used to normally access members of a structure or union.
The Arrow(->) operator exists to access the members of the structure or the unions using pointers.

We can both view and modify a structure member using the pointer to the structure.

*/
struct Student {
        char name[40];
        int age;
};

int main() {
    struct Student *rohan_struct_pointer;
    struct Student rohan = {"ROHAN", 19};
    
    rohan_struct_pointer = &rohan;

    // modifying a structure member using structure pointer
    printf("Enter new age: ");
    scanf("%d", &(rohan_struct_pointer -> age));

    // accessing structure member using the structure's pointer
    printf("%d\n", rohan_struct_pointer -> age);

    // accessing the structure member using the structure directly
    printf("%d\n", rohan.age);

    

    return 0;
}
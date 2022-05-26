#include <stdio.h>
/*
* Arrow Operator (->)

An Arrow operator in C/C++ allows to access elements in Structures and Unions. 
It is used with a pointer variable pointing to a STRUCTURE or UNION (or instance of a CLASS in C++). 

This operator performs the operation of first dereferencing the pointer then access that particular
member.
TODO: Read more about Arrow Operator in 10oop-a-pointers-to-objects-and-arrow-op.cpp


* Difference between Dot(.) and Arrow(->) operator:  

The Dot(.) operator is used to normally access members otakingf a structure or union.
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
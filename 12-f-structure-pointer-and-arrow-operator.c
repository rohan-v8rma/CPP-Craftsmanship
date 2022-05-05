#include <stdio.h>
/*
* Arrow Operator (->)

An Arrow operator in C/C++ allows to access elements in Structures and Unions. 
It is used with a pointer variable pointing to a STRUCTURE or UNION. 

* Difference between Dot(.) and Arrow(->) operator:  

The Dot(.) operator is used to normally access members of a structure or union.
The Arrow(->) operator exists to access the members of the structure or the unions using pointers.

*/
struct Student {
        char name[40];
        int age;
};

int main() {
    struct Student *rohan_struct_pointer;
    struct Student rohan = {"ROHAN", 19};
    
    rohan_struct_pointer = &rohan;

    // accessing structure member using the structure's pointer
    printf("%s\n", rohan_struct_pointer -> name);

    // accessing the structure member using the structure directly
    printf("%s\n", rohan.name);
    
    return 0;
}
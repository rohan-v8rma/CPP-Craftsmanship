#include<stdio.h>

struct Student {
        char name[40];
        int age;
};

int main() {
    struct Student *rohan_struct_pointer;
    struct Student rohan = {"ROHAN", 19};
    
    rohan_struct_pointer = &rohan;

    printf("%s", rohan_struct_pointer -> name);

    return 0;
}


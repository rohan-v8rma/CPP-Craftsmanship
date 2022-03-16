#include <stdio.h>
/*
            INDEX
1. What are Pointers?
2. Dereference Operator (*)
3. Dereference(*) AND Reference-to(&) operators are converse of each other
4. What is the type of a pointer variable?
5. (Pointer initialization) Vs. (Pointer declaration & assignment)
    a. When we initialize a pointer with a value
    b. When we declare a pointer and assign a value to it later

*/
int main() {
    /*
    * 1. What are Pointers?

    Pointers (pointer variables) are special variables that are used to store 
    addresses rather than values of data items.

    * 2. Dereference Operator (*)

    What the * operator does in actuality is that it gets the corresponding 
    data of the memory location stored in the variable.
    ? For example, if a variable 'var' stores an integer 100, 
    ? *var will get us the data stored in memory location 100.

    * 3. Dereference(*) AND Reference(&) operators are converse of each other

    The Reference/Address-of operator(&) gets us the memory location
    of the data stored in a variable.
    ? For example, if we have a variable 'var', which holds an integer value,
    ? &var will get us the memory location where that integer value is stored

    After this operation, if we use * operator, it will go back to the integer value,
    as it is using the newly obtained address to obtain the data item stored in that
    address.
    */
    int a = 10;
    printf("%d\n", a);
    printf("%d\n", *&a); //Same output
    
    /*
    ! So, *&var is equal to var, proving that * and & operator are the converse
    ! of each other.


    * 4. What is the type of a pointer variable?

    Pointer to the datatype of the data item whose address is stored 
    Example: integer pointer, float pointer, char pointer etc.

    SYNTAX:
    */
    int *point, var; 
    /*
    Here, we are declaring a pointer variable 'point' and 
    a regular integer variable 'var'.

    ! The asterisk (*) tells the compiler that 'point' is a pointer variable.
    
    ! NOTE: `point` is a pointer, not `*point`
    */
    point = &var;
    var = 0;
    printf("%d\n", var);
    *point = 1; //Note that `*point` is the same as `var`
    printf("%d\n", var);

    /*
    * 5. (Pointer initialization) Vs. (Pointer declaration & assignment)
    */
    int variable = 10;
    
    //? a. When we initialize a pointer with a value:
        
    int *pointer_1 = &variable;
    /*
    Here, note that we are not assigning a value to *pointer_1,
    but to pointer_1 itself. 
    The first part of the statement just tells the compiler that pointer_1 is a pointer variable.
    */

    //? b. When we declare a pointer and assign a value to it later

    int *pointer_2;
    pointer_2 = &variable; 
    /*
    we don't have to apply an asterisk before `pointer_2` in the above statement
    as we have already told the compiler that `pointer_2` is a pointer variable 
    when we declared it.

    if we do put an asterisk, that would be an attempt to change the value of the 
    variable whose address is already stored in `pointer_2`, but since there is no
    address stored in `pointer_2`, that statement would throw an error.
    */



    return 0;
}
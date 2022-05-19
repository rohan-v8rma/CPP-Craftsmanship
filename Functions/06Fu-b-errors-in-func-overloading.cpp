#include <iostream>
using namespace std;
/*
* Errors encountered in function overloading when compiler tries to resolve second function name

? One function is consider an erroneous re-declaration of the other

This occurs when:
* 1. Signatures of two subsequent functions match
* 2. Signatures of two subsequent functions match but the return type may differ

? Ambiguity in function name

This occurs when:
* 1. An attempt at overloading is made without any function signatures. E.g:
    
    void hello() {
        printf("num_1");
    }   
    
    int hello() {
        printf("num_2");
        return 2;  
    }


* 2. In the case of implicit type conversions
*/

 
// Overloaded Function with
// float type parameter
void test(float f) {
    cout << "Overloaded Function with float "
         << "parameter being called";
}
  
// Overloaded Function with
// double type parameter
void test(double d) {
    cout << "Overloaded Function with double "
         << "parameter being called";
}
  
int main() {
    // Overloaded Function called
    // with char type value
    test('a');
    
    /*
    When there is no exact type match, the compiler looks for the closest match. 
    The closest match for “test(‘a’);” will be “void test(int a)”. 
    
    Since it is not present, void test(double d) and void test(float f) will cause ambiguity. 
    Both are valid conversions. 

    This confusion causes an error message to be displayed and prevents the program from compiling.
    */

    return 0;
}

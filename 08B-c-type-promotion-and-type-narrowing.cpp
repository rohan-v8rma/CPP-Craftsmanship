#include <iostream>
using namespace std;

/*
            INDEX
1. Type Promotion
2. Narrowing-Type Conversion
*/

int main() {    
    /*
    * 1. Type Promotion

    The implicit conversions that preserve values are commonly referred to as promotions. 
    
    Before an arithmetic operation is performed, integral promotion is used to create 
    ints out of shorter integer types. Similarly, floating-point promotion is used to create 
    doubles out of floats. 
    
    Note that these promotions will not promote to long (unless the operand is a char16_t, char32_t, wchar_t, 
    or a plain enumeration that is already larger than an int) or long double. 
    
    This reflects the original purpose of these promotions in C: to bring operands to 
    the ‘‘natural’’ size for arithmetic operations.
    
    * 2. Narrowing-Type Conversion

    Integral and floating-point types can be mixed freely in assignments and expressions.
    Wherever possible, values are converted so as not to lose information. 
    
    ! Unfortunately, some value destroying (‘‘narrowing’’) conversions are also performed implicitly. 
    
    A conversion is value-preserving if you can convert a value and then convert the result back to its 
    original type and get the original value. If a conversion cannot do that, it is a narrowing conversion.

    When writing code, you should always aim to avoid undefined behavior and conversions 
    that quietly throw away information (‘‘narrowing conversions’’).
    
    A compiler can warn about many questionable conversions. Fortunately, many compilers do.
    
    ? The {}-initializer syntax prevents narrowing as demonstrated below.
    */
   
   //Type narrowing not taking place
    char hello_1 {'b'}; 
    printf("%c", hello_1);
    
    //! Type narrowing taking place (run this code and see the error message)
    float floating_point_number = 7.2;
    int integer {floating_point_number};
    printf("%d", integer);

    return 0;
}
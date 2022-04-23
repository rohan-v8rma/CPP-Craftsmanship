#include <iostream>
using namespace std;

int main() {    
    /*
    When writing code, you should always aim to avoid undefined behavior and conversions 
    that quietly throw away information (‘‘narrowing conversions’’).
    A compiler can warn about many questionable conversions. Fortunately, many compilers do.
    
    The {}-initializer syntax prevents narrowing as demonstrated below.
    */
    char hello_1 {'b'}; 
    printf("%c", hello_1);
    
    //! Why is the below code not giving error. 
    
    float floating_point_number = 7.2;
    int integer (floating_point_number);
    printf("%d", integer);

    return 0;
}
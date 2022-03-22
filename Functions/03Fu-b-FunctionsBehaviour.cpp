#include <iostream>
#include <math.h>
using namespace std;

int main(){
//* Division of integers, Data type conversion in passing of arguments
    
    
    cout << "atan2(4,3) is " << atan2(4,3) << '\n';
    cout << "atan2(4.0,3.0) is " << atan2(4.0,3.0) << '\n';

    cout << "sin(22/14) is" << sin(22/14) << '\n';
    cout << "sin(22.0/14.0) is" << sin(22.0/14.0) << '\n';
/*
Now, in this case it returns tan inverse of P/B or 4.0/3.0.

! The point to note is that both the arguments are of double data type,
! meaning even if integers are specified as the arguments, they will
! be converted 4.0 and 3.0 because taking arguments as double is a property
! of the function.

? Similarly, if asin(1) is executed, the argument is first converted to 1.0
? as it is a property of the function to take arguments in double data type.

When we pass 4/3 as an argument, it is first divided according to it's type,
to an integer output which is 1, then converted to 1.0 by function because of its property.
*/
}
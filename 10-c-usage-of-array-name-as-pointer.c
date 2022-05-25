#include <stdio.h>
#include <string.h>

void array_fn(int arr[3]) { 
    /*
    Because the array name itself is a pointer, 
    it automatically gets passed by reference when we give it to a function,
    meaning the original copy of the array is modified every time we make a change to it.
    */
    
    *(arr + 1) = 5;     
    
    arr[1] = 5;
}
/* 
Note that in both the methods of modification of array above, 
it modifies the original copy of the array because it is 
passed by reference in the `array_fn`
*/

int main() {
    int arr[3] = {1, 2, 3};

    array_fn(arr);
    printf("%d", arr[1]);

    return 0;
}
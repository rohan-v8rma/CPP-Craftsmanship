#include <stdio.h>

/*
* Bubble Sort

In bubble sort, like bubbles in a water column, one sorted element reaches the end OR start 
after each iteration.

We run 1 iteration less than the number of elements.

In each iteration, we check 1 index less than the last iteration because we know that one additional
element was sorted in the last iteration so it need not be checked.
*/

int main () {


    int array[7] = {-2, 482, -37, 0, 9, 100, -11};
    int temp;

    for(int iteration = 0; iteration < (-1 + (sizeof(array) / sizeof(int))); iteration++) {
        for(int index = 0; index < (((sizeof(array) / sizeof(int))) - (1 + iteration) ); index++) {
            if ((array[index] > array[index + 1])||(array[index] == array[index + 1])) {
                temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
            };
        }
    };

    printf("{");
    for(int index = 0; index < (sizeof(array) / sizeof(int)); index++) {
        if (index == 0) {
            printf("%d", array[index]);
        }
        else {
            printf(", %d", array[index]);
        };
    };
    printf("}\n");


    return 0;
}
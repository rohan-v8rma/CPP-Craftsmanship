#include <stdio.h>
/*
The‘struct’ keyword is used to create a structure. Following is an example. 
*/

struct address
{
   char name[50];
   char street[100];
   char city[50];
   char state[20];
   int pin;
};
/*
? Here, we have created the structure in the global scope.
? So, any function can access it to create a structure variable.
*/
 


int main() {

    return 0;
}
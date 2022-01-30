#include <iostream>
using namespace std;


/*
The void data type specifies an empty set of values and it is 
? used as the return type for functions that do not return a value

! A function that does not return a value is declared as follows:
*/
void printHelloIteration(int number = 1){
    for(int iter_var = 0; iter_var < number; iter_var++){
        cout << "Hello\n";
    }
}        
/*
A function that does not require any parameter (i.e., it has an empty argument list)
can be declared as follows:
*/
int printBye(void){
    cout << "Bye";
    return 0;
}
int main(){
    printHelloIteration(2);
    printBye();
    cout << "\n\n";
    return 0;
}
#include<iostream>
using namespace::std;

//* a. Call by Value 
void swap_values(int variable_1, int variable_2){
    int temp = variable_1;
    variable_1 = variable_2;
    variable_2 = temp;

}
//* b. Call by Reference
void swap_values_corrected(int & variable_1, int & variable_2){ 
    /*
    References of the variables are set up instead of copies.
    We need not pass the variables in any special way, just the names itself, when calling the function
    */
    int temp = variable_1;
    variable_1 = variable_2;
    variable_2 = temp;

//TODO : See notebook for more detailed explanations of Call by Value & Reference 
}
//! A function need not be purely by value or by reference. A function can be invoked 
//! by using mix of the two methods

int main(){
    int num_1 = 2, num_2 = 3;
    cout << "\nValue of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << "\n\n";

    swap_values(num_1, num_2);
    cout << "Function called by value" << "\n\n";
    cout << "Value of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << "\n\n";
    cout << "The values are unchanged" << "\n\n\n";

    swap_values_corrected(num_1, num_2);
    cout << "Function called by reference" << "\n\n";
    cout << "Value of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << endl;

    cout << "\n\n";

    return 0;

}
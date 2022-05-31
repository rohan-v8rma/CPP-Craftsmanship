#include<iostream>
using namespace::std;

/*
            INDEX
a. Call by Value
b. Call by Reference
c. Call by Reference method of C (more intuitive approach)
*/

//* a. Call by Value 
void swap_values(int variable_1, int variable_2){
    int temp = variable_1;
    variable_1 = variable_2;
    variable_2 = temp;

}
//* b. Call by Reference
void swap_values_corrected(int & variable_1, int & variable_2){ 
    /* 
    In CPP method of pass by reference, we need NOT use ampersand and provide addresses of the parameters, 
    rather that procedure is abstracted and we just need to enter the variable names along with 
    adding an ampersand(&) in the function declaration/definition.
    */
    int temp = variable_1;
    variable_1 = variable_2;
    variable_2 = temp;

//TODO : See notebook for more detailed explanations of Call by Value & Reference 
}
/* 
A function need not be purely by value or by reference. A function can be invoked 
by using mix of the two methods
*/


//* c. Call by Reference method of C (more intuitive approach)
/*
In C++ we can genuinely pass by reference. 
The easier method of pass by reference used in C++, where we need not 
change how we give inputs to a function, is not available in C. 

In C, passing by reference is really just passing a pointer by value.

! NOTE that this C method of call by reference also works in C++ and is much more intuitive.
*/
//

void swap_by_pointers(int *first_num, int *second_num) {
    /*
    Here, we are specifying that we would be inputting: 
    
    pointers which point to an integer value 
    OR 
    pointers which hold the address of integer values 
    OR 
    addresses of integer values DIRECTLY
    */
    int temp = *first_num;
    *first_num = *second_num;
    *second_num = temp;
    /*
    In this function, we are manipulating the variables as if we
    have addresses stored in them. 
    
    In the case of the Call by Reference method of C++, 
    we manipulate the variables normally as in Call by Value.
    It's just that the original copies are getting mutated.
    */
}

int main(){
    int num_1 = 2;
    int num_2 = 3;

    cout << "\nValue of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << "\n\n";

    swap_values(num_1, num_2);
    cout << "Function called by value" << "\n\n";
    cout << "Value of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << "\n\n";
    cout << "The values are UNCHANGED" << "\n\n\n";

    swap_values_corrected(num_1, num_2);
    cout << "Function called by reference" << "\n\n";
    cout << "Value of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << endl;
    cout << "The values got CHANGED" << "\n\n";

    swap_by_pointers(&num_1, &num_2);
    cout << "Function called by reference using pointer method of C" << "\n\n";
    cout << "Value of first variable is " << num_1 << endl;
    cout << "Value of second variable is " << num_2 << endl;
    cout << "The values got CHANGED again" << "\n\n";

    return 0;

}
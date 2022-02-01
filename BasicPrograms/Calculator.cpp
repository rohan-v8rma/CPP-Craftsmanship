#include <iostream>
using namespace std;
//This is probably not the most refined version, it can be rethought.

float operand_1, operand_2;

float sum(){
    return operand_1 + operand_2;
}
float difference(){
    return operand_1 - operand_2;
}
float multiply(){
    return operand_1 * operand_2;
}
float divide(){
    return operand_1 / operand_2;
}
char option;
int main(){
    cout << "Options:\n" << "1. + \n"
    << "2. - \n" << "3. * \n"
    << "4. /" << '\n';

    cin >> option;
    cout << "\nOperand_1 : ";
    cin >> operand_1;
    cout << "\nOperand_2 : ";
    cin >> operand_2;

    if (option == '+'){
        cout << sum();
    }
    else if (option == '-'){
        cout << difference();
    }
    else if (option == '*'){
        cout << multiply();
    }
    else if (option == '/'){
        cout << divide();
    }
    cout << "\n\n";
    return 0;
}
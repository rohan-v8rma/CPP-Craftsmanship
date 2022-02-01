#include <iostream>
using namespace std;

int factorial(int number){
    if (number == 2){
        return 2;
    }
    else{
        return number * factorial(number - 1);
    }
}
int main(){
    int number;
    cout << "Number : ";
    cin >> number;
    cout << '\n' << factorial(number);
}
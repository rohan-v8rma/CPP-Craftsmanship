#include <iostream>
using namespace std;

int length, breadth;

void hollow_line(int breadth){
    cout << "*";
    for(int iter_var_1 = 2; iter_var_1 <= (breadth - 1) ; ++iter_var_1){
//Iteration variable is to be less than or equal to (breadth - 1) because 
//for example breadth is 5, so hollow line will contain 3 white spaces
//iter_var_1 goes from 2 to 3 to 4 for 3 white spaces. 
        cout << " ";
    }
    cout << "*" << endl;
}
void filled_line(int breadth){
    for(int iter_var_2 = 1; iter_var_2 <= (breadth) ; ++iter_var_2){
    cout << "*";
    }
    cout << '\n';
}
int main(){
    cout << "Length ? >> ";
    cin >> length;
    cout << "\nBreadth ? >> ";
    cin >> breadth;

    for(int down_iter = 1; down_iter <= length; ++down_iter){
        if (down_iter == 1 || down_iter == length){
            filled_line(breadth);
        }
        else{
            hollow_line(breadth);
        }
    }

}
#include <iostream>
using namespace std;

int length, breadth;

void line(int breadth){
    int iter_var = 1;
    for(; iter_var <= breadth; ++iter_var){
        cout << "*";
    }
    cout << '\n';
}

int main(){
    cout << "Length ? >> ";
    cin >> length;
    cout << "\nBreadth ? >> ";
    cin >> breadth;

    int iter_var_2 = 1;
    for( ; iter_var_2 <= length ; ++iter_var_2){
        line(breadth);
    }
}
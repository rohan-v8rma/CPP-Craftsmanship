#include <iostream>
using namespace std;

int length, breadth;


void length_print(int length){ 

/* 
We are writing void in front of the function as the function is not returning anything
We also have to write int in front of the parameter as even though it is already declared as int,
we have to specify that argument of which dataType is being passed into the function.
*/
    int i = 1;
    cout << "+";
    while(i <= (length - 2)){
        cout << "-";
        i++;
    }
    cout << "+";
}
void line_print(int length){
    int i = 1;
    cout << "|";
    while(i <= (length - 2)){
        cout << " ";
        i++;
    }
    cout << "|";
}

void breadth_print(int length,int breadth){
    int i = 1;
    while (i <= (breadth - 2)){
        line_print(length);
        cout << '\n';
        i++;
    }

}

int main(){
    cout << "What is the length : ";
    cin >> length;
    cout << "What is the breadth : ";
    cin >> breadth;
    length_print(length);
    cout << '\n';
    breadth_print(length, breadth);
    length_print(length);
    cout << "\n\n";
    
    return 0;
}
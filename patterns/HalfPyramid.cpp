#include <iostream>
using namespace std;

int size_of_pyramid;

void line_print(int line_size){
    for (int iter_var0 = 1; iter_var0 <= line_size; ++iter_var0){
        cout << "*";
    }
    cout << '\n';
}
void number_line_print(int line_size){
    for (int iter_var0 = 1; iter_var0 <= line_size; ++iter_var0){
        cout << line_size << ' ';
    }
    cout << '\n';
}
int main(){
    cout << "size_of_pyramid : ";
    cin >> size_of_pyramid;
    cout << '\n';

//Half Pyramid 
    for(int iter_var = 1; iter_var <= size_of_pyramid; ++iter_var){
        line_print(iter_var);
    }
//Inverted Half Pyramid
    cout << "\n";
    for(int iter_var = size_of_pyramid; iter_var >= 1; --iter_var){
        line_print(iter_var);
    }
    cout << "\n";
//Numbers half Pyramid
    for(int iter_var = 1; iter_var <= size_of_pyramid; ++iter_var){
        number_line_print(iter_var);
    }
}
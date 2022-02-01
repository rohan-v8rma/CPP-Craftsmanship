#include <iostream>
using namespace std;


void line_print(int line_size, int current_const){
    
    for(int iter_var = 1; iter_var <= line_size ; ++iter_var){
        cout << current_const << ' ';
        current_const++;
    }
    cout << '\n';
}
int main(){
    int no_of_lines;
    cout << "How many lines --> ";
    cin >> no_of_lines;
    int current_constant = 1;
    for(int iter_var0 = 1 ; iter_var0 <= no_of_lines ; ++iter_var0){
        line_print(iter_var0, current_constant);
        current_constant += iter_var0;
        
    }
}
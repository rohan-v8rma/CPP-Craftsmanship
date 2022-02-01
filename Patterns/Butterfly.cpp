#include <iostream>
using namespace std;

void space_print(int spaces){
    for(int iter_var0 = 1 ; iter_var0 <= spaces ; ++iter_var0){
        cout << " ";
    }
}

void star_print(int stars){
    for(int iter_var0 = 1; iter_var0 <= stars ; ++iter_var0){
        cout << "*";
    }
}

void line_print(int no_of_stars, int size){
    star_print(no_of_stars);
    space_print(2*(size - no_of_stars));
    star_print(no_of_stars);
    cout << '\n';
}
int main(){
    int size;
    cout << "size? : ";
    cin >> size;
    for(int iter_var1 = 1; iter_var1 <= size; ++iter_var1){
        line_print(iter_var1, size);
    }
    for(int iter_var2 = size; iter_var2 >= 1; --iter_var2){
        line_print(iter_var2, size);
    }
}
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "character? : ";
    cin >> ch;
    if ((48 <= ch) && (ch <= 57)){
        cout << "You have entered a digit.";
    }
    else if ((65 <= ch) && (ch <= 90)){
        cout << "You have entered an uppercase alphabet.";
    }
    else if ((92 <= ch) && (ch <= 127)){
        cout << "You have entered a lowercase alphabet.";
    }   
    // and so on 
    
    cout << "\n\n";
    return 0;
}
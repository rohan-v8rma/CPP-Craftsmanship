#include <iostream>
using namespace std;

int main(){
    string str = "Hello, my name is rohan.";
    char alpha = 'z';
    for(int iter_var = 0 ; iter_var < str.size() ; iter_var++){
        if(str[iter_var] == alpha){
            cout << "The alphabet '" << alpha << "' is present in : " << str << "\n\n";
            return 0;
        }
        else{
            continue;
        }
    }
    cout << "The alphabet '" << alpha << "' is NOT present in : " << str << "\n\n";
}


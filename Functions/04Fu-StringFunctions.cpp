#include <iostream>
using namespace std;

//String functions in C++

#include <string.h>
/*
C++ treats a string as a null-terminated ('\0' in the end) sequence of characters.

* Also, if we write '\0' (which is by default added to the end of every string), 
* in the middle of a string, the part of the string after it is ignored.
(No particular application, just an observation.)
*/
int main(){
/*
*/
    char ch;
    cout << "What is the character : ";
    cin.get(ch);

    cout << '\n' << ch;

    cout << "\n\n";
    return 0;
    
}
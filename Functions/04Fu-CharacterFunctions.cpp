#include <iostream>
using namespace std;

//Character functions in C++
#include <ctype.h>

/*
Some important character functions are  :

<int> isalnum(<int> ch)

It returns integer data either 0 or a non-zero value(not always 1). It takes int or 
character data type(which is also just a form of integer) as argument. This is true
for all the character functions.
*/
int main(){

//<int> isalnum(<int> ch)
    char ch0 = 'a';
    if (isalnum(ch0)){
        cout << "Alphanumeric\n";
    }
    else{
        cout << "NOT Alphanumeric\n";
    }

//<int> isalpha(<int> ch)
    ch0 = 'b';
    if (isalpha(ch0)){
        cout << "Alphabet\n";
    }
    else{
        cout << "NOT Alphabet\n";
    }

//<int> isdigit(<int> ch)
    ch0 = '1';
    if (isdigit(ch0)){
        cout <<  "Digit\n";
    }
    else{
        cout << "NOT Digit\n";
    }

//<int> islower(<int> ch)
    ch0 = 'a';
    if (islower(ch0)){
        cout <<  "Lowercase\n";
    }
    else{
        cout << "NOT Lowercase\n";
    }

//<int> isupper(<int> ch)
    ch0 = 'A';
    if (isupper(ch0)){
        cout <<  "Uppercase\n";
    }
    else{
        cout << "NOT Uppercase\n";
    }

/*
* tolower and toupper functions are a bit different from the rest.

In all the previous functions, when we printed their returned value, we would get
a 0 or a RANDOM non-zero value depending on the truth value of the expression.

But in the case of tolower and toupper, we get the ASCII value of the upper or 
lower case version of the character which was passed as the argument.

? For instance, 
?    char ch = 'A';
?    cout << tolower(ch);

The above code will print 97 which is the ASCII value of 'a'

! Also, it is to be noted that an error won't be thrown if the character is a non-alphabet.
! It will simply return the character unchanged ASCII value of the character, but not the character itself.
*/

//<int> tolower(<int> ch)
    ch0 = 'A';
    char ch1 = 'B';
    cout << ch0 << '\n';
    cout << tolower(ch0) << '\n';
// To print the resulting character
    putchar(tolower(ch1));
    cout << '\n';
    
//<int> toupper(<int> ch)
    ch0 = '/';
    cout << ch0 << '\n';
    cout << toupper(ch0) << '\n';
    }
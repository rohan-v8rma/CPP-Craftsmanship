/*
INDEX
1. I/O operators and cin
2. Cascading of I/O operators
    a. usage of '<<' in multiple lines
    b. usage of one cin statement to get multiple inputs
3. get() function
4. printf and scanf for faster (incomplete)
*/
#include <iostream>
using namespace std;



//* 1. I/O Operators and cin(single & multiple input)

int main(){
    cout << "The sum of 2 + 5 is = ";
    cout << 2 + 5 << '\n';

//Look below to understand cascading

/*
'<<' is the output operator "put to", also called 
stream insertion operator. It is used to direct a 
value to standard output. 

Also, by default '\n' escape sequence is not added
to each output stream
*/

    int value1, value2, value3, sum;
/* 
Variables have to be declared
before we are able to use them in the program. 
In the above statement we have declared 3 variables
of integer data type.
Initialization is when we assign the first starting 
value to a variable.
NOTE:- If we don't initialize a variable and only 
declare it, it won't be empty, it will contain junk
values left over from the program that last used the
memory they occupy now, until places a value at that 
memory location.
But, in some implementations, there is some specific 
default value for each data type.
For e.g:- 0 for int and float, '' for char etc
*/

    cout << "Enter value1 : ";
    cin >> value1;
/* 
'cin' is an istream class object tied to standard input.
cin stands for console input.

'>>' is the input operator "get from", also called
stream extraction operator. It is used to read a 
value from standard input.

Stream extraction operator, >>, signifies 
"extract the next value" from the stream named cin
and assign it to the next named variable
*/
    cout << '\n' << "Enter value2 : ";
    cin >> value2;



//* 2. Cascading of I/O operators

    cout << '\n' << "The sum of 2 + 5 is = " << 2 + 5 << '\n';
/*
Successive occurrences of I/O operators can be 
concatenated. 
Each successive output operator is applied in turn 
to cout.
For readability, the concatenated output statement
may span several lines. For e.g: 
*/
    cout << "The sum of " <<
    value1 << " and " 
    << value2 << " is "
    << value1 + value2 << '\n';


//b. usage of one 'cin' statement to get multiple inputs

/*
cin >> A >> B;

In this format, it will ask for value of A on the first line, 
and on the next line it will ask for value of B.
*/



/*
* 3. get() 'single-character' function for input

get() function is an input function. It fetches a single character and stores it 
in a character variable.

The get() is a 'member-function' of input/output class and it is involved with an
iostream object 'cin' as shown
*/


    char ch;
    cout << "Enter the character : ";
    cin.get(ch);

/*
The difference between 
! 'cin >> ch' and 'cin.get(ch)' is that
? when '>>' operator is used, the white spaces(tabs, spaces, and newline characters)
? are ignored whereas it is not so with cin.get(ch)
*/
//printf and scanf
    



    cout << "\n\n"; 
    return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;

/*
The word 'Console' refers to the combination of monitor and keyboard.

Console I/O functions perform input from the 'standard input device' and output to the
'standard output device'.
*/


int main(){
/*
* 1. Single Character Functions

The simplest of the console I/O functions are 'getchar()', which reads a character from 
the keyboard, and 'putchar()', which prints a character on the screen.
*/
    char ch = getchar();

//This function waits until a character is typed and entered using the keyboard.

    putchar(ch);
    
//This function displays the given character on the screen at the current cursor position.
//It can be used with tolower() and toupper() functions which only return the ASCII code of the resulting alphabet.

/*
* 2. String Functions

The function 'gets()' and 'puts()' are string functions.
*/
    cout << "Enter a string : ";
    string str1;
    gets(str1);
//
}
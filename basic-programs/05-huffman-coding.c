#include<stdio.h>
#include<string.h>

#define length_of_english_alphabet 26
//macro

/*
This program is a simplified version of huffman coding where
we send an array containing the frequency of all the characters
of the alphabet, which are present in the given string.
*/

void print_array(int arr[length_of_english_alphabet]) {
    for(int index = 0; index < length_of_english_alphabet; index++) {
        printf("%c - %d\n", index+97, arr[index]);
    };
}

int main() {
    int huffman_code[length_of_english_alphabet] = {};
    char string[40];
    scanf("%[^\n]s", string);
    int length_of_string = strlen(string);
    
    for(char *pointer = string; *pointer; pointer++) {
        /*
        since null character '\0' has FALSE truth value, as soon as *pointer == '\0', 
        which is also the end of the string, the loop will terminate
        */
        if (isalpha(*pointer)) {
            //isalpha() used to ensure we only use the alphabets
            int letter = tolower(*pointer) - 97;
        //we dereferenced the pointer to get the character of the string        
        //we used tolower() in order to eliminate the ASCII values of uppercase letters
        huffman_code[letter] += 1;        
        };        
    };
    print_array(huffman_code);
    return 0;    
}


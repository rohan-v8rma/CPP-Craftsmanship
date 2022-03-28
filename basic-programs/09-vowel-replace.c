#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main() {
    
    char string[] = "I love you";
    int length_of_string = strlen(string);
    int ascii_value;
    // for(int index = 0; index < length_of_string; index++) {
    for(char* pointer = string; *pointer; pointer++) {
        ascii_value = tolower(*pointer);
        if (ascii_value == 97 //'a'
        || ascii_value == 101 //'e'
        || ascii_value == 105 //'i'
        || ascii_value == 111 //'o'
        || ascii_value == 117 //'u'
        ) {
            *pointer += 1;
        };
    }
    
    printf("%s", string);

    
    return 0;
}
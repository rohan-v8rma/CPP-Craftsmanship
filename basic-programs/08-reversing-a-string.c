#include<stdio.h>
#include<string.h>

int main() {
    char string[200];
    scanf("%[^\n]s", string);
    printf("The original string is `%s`\n",string);

    int length_of_string = strlen(string); //strlen excludes null character from the length of the string
    char temp = 'a';
    for(int index = 0; index < (length_of_string / 2); index++) {
        char temp = string[index];
        string[index] = string[length_of_string - index - 1];
        string[length_of_string - index - 1] = temp;
    }
    printf("The reversed string is `%s`\n",string);
}
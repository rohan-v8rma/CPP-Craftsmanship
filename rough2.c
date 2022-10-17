#include <stdio.h>
#include <string.h>

int main() {
    int totalNames = 3;
    int nameLength = 10;

    char nameList[totalNames][nameLength];

    for(int index = 0; index < totalNames; index++) {
        printf("\nEnter name %d : ", index + 1);    
        scanf("%s", nameList[index]);
    };
    
    char* namePoint[totalNames];
    for(int index = 0; index < totalNames; index++) {
        *(namePoint + index) = *(nameList + index);
    };

    char temp[10];
    
    for(int iter = 0; iter < (totalNames - 1); iter++) { //loop for bubble sort
        for(int name = 0; name < (totalNames -iter - 1); name++) {
            for(int index = 0; index < nameLength; index++) {
                if( *( *(namePoint + name) + index) < *( *(namePoint + name + 1) + index) ) {
                    break;
                }
                else if ( *( *(namePoint + name) + index) > *( *(namePoint + name + 1) + index) ) {
                    strcpy(temp, *(nameList + name) );
                    strcpy(*(nameList + name), *(nameList + name + 1));
                    strcpy(*(nameList + name + 1), temp);

                    break;
                }
            }
        }
    }

    for(int index = 0; index < totalNames; index++) {
        printf("%s", *(namePoint + index));
    };

    return 0;
}
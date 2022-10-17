#include <stdio.h>

int main () {
    
    int hour = 25;
    int minute = 60;
    int second = 60;
    printf("\nEnter time in 24-hour format <HH:MM:SS> --> ");
    scanf("%d:%d:%d",&hour, &minute, &second);
    while((hour >= 25) || (minute >= 60) || (second >= 60)) {
        printf("\nInvalid time entered!\nEnter time in 24-hour format <HH:MM:SS> --> ");
        scanf("%d:%d:%d",&hour, &minute, &second);
    };
    
    return 0;
}

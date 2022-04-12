#include <stdio.h>

//TODO: check out `12-b-declaring-a-structure-variable.c` for more information about STRUCTURE VARIABLE ARRAYS

int main() {

    struct soldier 
    {
        int enlistment_num;
        int kills;
        int guns_used;
    };

    struct soldier soldier_list[3];

    for(int index = 0; index < 3; index++) {
        printf("Enter soldier details ( `enlistment_num` `kills` `guns_used` ):");
        scanf("%d %d %d", &soldier_list[index].enlistment_num, &soldier_list[index].kills, &soldier_list[index].guns_used);
    };

    for(int index = 0; index < 3; index++) {
        printf("Soldier %d STATS\n Enlistment number : %d \n Kills : %d\n Guns Used : %d\n", index + 1, 
        soldier_list[index].enlistment_num, soldier_list[index].kills, soldier_list[index].guns_used);
        
    };
    return 0;
}
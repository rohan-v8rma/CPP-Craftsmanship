#include <stdio.h>

int main() {
    int class_number, fail_subjects;
    int grace_mark = 0;
    printf("\nClass number of student - ");
    scanf("%d", &class_number);
    printf("\nNumber of fails - ");
    scanf("%d", &fail_subjects);
    switch (class_number) {
        case 1:
            if (fail_subjects <= 3) {
                grace_mark = 5;
            };
            break;
        case 2:
            if (fail_subjects <= 2) {
                grace_mark = 4;
            };
            break;
        case 3:
        if (fail_subjects <= 1) {
            grace_mark = 5;
        };
        break;
    }
    printf("\nGrace marks per subject are %d\n\n", grace_mark);
    return 0;
    
}	 	  	 	 		     	      	      	  	  	 	

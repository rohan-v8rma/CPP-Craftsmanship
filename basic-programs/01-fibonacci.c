#include <stdio.h>

int fibonacci(int term) {
    
    if (term == 1) {
        return 0;
    }
    else if (term == 2) {
        return 1;
    }
    else {
        return (fibonacci(term - 1) + fibonacci(term - 2));
    };
}

int main() {
    int no_of_terms;
    scanf("%d", &no_of_terms);
    if (no_of_terms < 1) {
        printf("Series cannot be created");
    }
    else {
        for(int iter_var = 1; iter_var <= no_of_terms; iter_var++) {
            printf("%d\n", fibonacci(iter_var));
        };
    };
}	 	  	 	 		     	      	      	  	  	 	

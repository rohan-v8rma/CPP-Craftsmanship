#include <stdio.h>

/*
        INDEX
1. We can INITIALIZE structure variables while declaring them using values  
2. We can also INITIALIZE them by directly copying the structure details of one structure variable to another
3. We can assign numerical values using the assignment operator `=`
4. We can declare structure variables and use scanf to assign values to structure members
*/

int main() {
    struct book
    {
        char name[40];
        float price;
        int pages;
    };
    
    //* 1. We can INITIALIZE structure variables while declaring them using values

    struct book first_book = {"Lord of the Rings", 999.99, 1200};
    
    //? We can REFERENCE a MEMBER of a structure by the Direct Component Select Operator, which is PERIOD (.) as shown below
    //? This operator has the highest precedence out of all operators.
    printf("%s\n", first_book.name);

    // OR

    //* 2. We can also INITIALIZE them by directly copying the structure details of one structure variable to another
    /*
    The copy of an entire structure can be easily done by the assignment operator.
    Each component in one structure is copied into the corresponding component in the other structure.
    */
    struct book second_book = first_book;
    

    //! BUT, we also have methods for assigning values to structure variables after they've been created

    //* 3. We can assign numerical values using the assignment operator `=`

    struct book third_book;

    third_book.price = 499.99;
    third_book.pages = 100;

    //* 4. We can declare structure variables and use scanf to assign values to structure members
    
    struct book fourth_book;

    printf("Enter the details of the book: ");

    scanf("%[^\n]s", fourth_book.name); 
    //not used & here because a string(which is actually an array here) is itself a pointer
    scanf("%f", &fourth_book.price);
    scanf("%d", &fourth_book.pages);

    return 0;
}
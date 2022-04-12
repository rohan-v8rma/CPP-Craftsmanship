#include <stdio.h>

int main() {
    struct book
    {
        char name[40];
        float price;
        int pages;
    };
    
    //* We can INITIALIZE structure variables while declaring them using values

    struct book first_book = {"Lord of the Rings", 999.99, 1200};
    
    //? We can REFERENCE a MEMBER of a structure by the Direct Component Select Operator, which is PERIOD (.) as shown below
    //? This operator has the highest precedence out of all operators.
    printf("%s\n", first_book.name);

    // OR

    //* We can also INITIALIZE them by directly copying the structure details of one structure variable to another
    /*
    The copy of an entire structure can be easily done by the assignment operator.
    Each component in one structure is copied into the corresponding component in the other structure.
    */
    struct book second_book = first_book;
    

    //! BUT, we also have methods for assigning values to structure variables after they've been created


    //* We can declare structure variables and use scanf to assign values to structure members
    
    struct book third_book;
    
    printf("Enter the details of the book: ");

    scanf("%[^\n]s", third_book.name); 
    //not used & here because a string(which is actually an array here) is itself a pointer
    scanf("%f", &third_book.price);
    scanf("%d", &third_book.pages);

    return 0;
}
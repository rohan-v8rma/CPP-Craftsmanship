#include <iostream>
using namespace::std;

class Book {
    public:
        string* author;
        string* title;
        float* price;
        string* publisher;
        int* stock;

        Book() {
            author = (string*)(new string); 
            /*
            Note that this method of explicit type casting which we used with 
            `malloc` and `calloc` is not required as the `new` operator already 
            returns a pointer of the same datatype.
            */
            title = new string;
            price = new float;
            publisher = new string;
            stock = new int;
        };

        ~Book() {
            delete author;
            delete title;
            delete price;
            delete publisher;
            delete stock;
        };

        void printTitle() {
            cout << *title << endl;
        };
};

void printTitles(Book *bookshelf, int size) {
    for(int index = 1; index <= size; index++) {
        printf("%2d. ", index);
        cout <<  *((*(bookshelf + index - 1)).title)  << "\n";
    };
}

int main() {
    int size = 3;
    Book bookshelf[size];
    
    int flag = 0;
    while(flag < size) {
        *(bookshelf[flag].title) = "Hello";
        flag++;
    };

    printTitles(bookshelf, size);

    
    return 0;
}
#include <iostream>
using namespace::std;

//TODO read `### Size of an Empty Class` in the README of this repository for the reasoning for this behaviour.

class EmptyClass {
    public:
        void printHello() {
            cout << "Hello\n";
        };
};

int main() {
    EmptyClass emptyClassInstance;
    cout << "Size of object made from an empty class: " << sizeof(emptyClassInstance) << " bytes.\n";

    return 0;
}
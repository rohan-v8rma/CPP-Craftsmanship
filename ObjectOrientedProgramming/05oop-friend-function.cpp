#include <iostream>
using namespace::std;

/*
* Friend Function 

Like friend class, a friend function can be given a special grant to access PRIVATE and PROTECTED members. 

A friend function is a function that is specified outside a class but has the ability to access 
the class members’ protected and private data.

A friend function can be any of the TWO: 
a) A member of another class 
b) A global function 

* Syntax for declaring a Friend Function:

class <class-name> {
    friend <return-type> <function-name> (argument/s);
    ...
    ...
};
*/
class Box {    
    private:    
        int length;    
    public:    
        Box() {
            length = 0;
        }
        friend int printLength(class Box example_box); //friend function    
};    

int printLength(class Box example_box) {    
    example_box.length += 10;      
    return example_box.length;    
}     
int main() {    
    class Box first_box;
    cout << "Length of box: " << printLength(first_box) << endl;    
    return 0;    
}   
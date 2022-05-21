#include <iostream>
using namespace::std;

/*
            INDEX
1. What is a Friend Function?
2. Benefits of Friend Function over MEMBER FUNCTIONS of a class
3. Syntax for declaring a Friend Function
*/

/*
* 1. What is a Friend Function?

Like friend class, a friend function can be given a special grant to access PRIVATE and PROTECTED members. 

A friend function is a function that is specified outside a class but has the ability to access 
the class members’ protected and private data.

A friend function can be any of the TWO: 
a) A member of another class 
b) A global function 

* 2. Benefits of Friend Function over Member Functions of a class

? The benefit of using friend functions instead of member functions defined 
? within a class is that MEMBER functions are implicitly made INLINE 
? which is good for speed but can cause some functional problems.

! Member functions are USEFUL in case of short codes that will benefit from
! reduced time of creating a function call stack.

* 3. Syntax for declaring a Friend Function

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
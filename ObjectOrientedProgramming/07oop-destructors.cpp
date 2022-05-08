#include <iostream>

/*
            INDEX
1. What is a destructor?
2. When is destructor function called?
3. When do we need to write a user-defined constructor?
*/


/*
* 1. What is a destructor?
Destructor is an instance member function which is invoked automatically 
whenever an object is going to be destroyed. 

? Meaning, a destructor is the last function that is going to be called before an object is destroyed.

? It has no return type just like CONSTRUCTOR.

? But, unlike CONSTRUCTOR, 
? Destructor doesn't take any argument. 
? There can only one destructor in a class with classname preceded by ~, no parameters and no return type.

Destructors have same name as the class preceded by a tilde (~).

* 2. When is destructor function called?
A destructor function is called automatically, in order to destroy the object from memory, 
when the object goes out of scope: 

(1) the function ends 
(2) the program ends 
(3) a block containing local variables ends 
(4) a delete operator is called

* 3. When do we need to write a user-defined constructor?
If we do not write our own destructor in class, compiler creates a default destructor for us. 
The default destructor works fine unless we have dynamically allocated memory or pointer in class. 
When a class contains a pointer to memory allocated in class, we should write a destructor 
to release memory before the class instance is destroyed. This must be done to avoid memory leak.

*/
class First_Point_Class {
    private:
        int x, y;
    public:
        First_Point_Class() {
            x = 0;
            y = 0;
        };
        ~First_Point_Class() {}; //explicitly defined constructor
};
#include <iostream>
using namespace::std;

/*
            INDEX
1. Properties of Constructors 
2. Implicitly Defined Constructors
3. Best practice of Default Constructors
4. Types of Constructors
    A. Default Constructor
    B. Copy Constructor
    C. Parameterized Constructor
*/

/*
* 1. Properties of Constructors

A constructor is a special type of member function of a class which initializes objects of a class. 

In C++, Constructor is automatically called when object(instance of class) is created. 
? It is special member function of the class because it DOES NOT HAVE ANY RETURN TYPE.

! NOTE: Members of a class are by default private. 
! When we explicitly create a constructor under the class, it is private

* 2. Implicitly Defined Constructors

However, when we don't define a constructor explicitly:

? From C++11 standard 12.1.5:

If there is no user-declared constructor for class X, a constructor having no parameters is 
implicitly declared by default. An implicitly-declared default constructor is 
an inline public member of its class.

? and 12.8.7, 12.8.11:

If the class definition does not explicitly declare a copy constructor, one is declared implicitly. 
[...] An implicitly-declared copy [...] constructor is an inline public member of its class.

? and finally 12.8.18, 12.8.20, 12.8.22:

If the class definition does not explicitly declare a copy assignment operator, one is declared implicitly. 
[...] If the definition of a class X does not explicitly declare a move assignment operator, one 
will be implicitly declared [...]. 
An implicitly-declared copy/move assignment operator is an inline public member of its class.

* 3. Best practice of Default Constructors

Whenever we define one or more non-default constructors ( with parameters ) for a class, 
a default constructor ( without parameters ) should also be explicitly defined as the compiler 
will not provide a default constructor in this case. 

Although, it is not necessary but it’s considered best practice to always define a default constructor. 

* 4. Types of Constructors:

    A. Default Constructor
    B. Copy Constructor
    C. Parameterized Constructor
*/


/*
* A. Default Constructor
A constructor which doesn't take any arguments is known as the default constructor
*/

class First_Point_Class {
    private:
        int x, y;
    public:
        First_Point_Class() {
            x = 0;
            y = 0;
        };
};

/*
* B. Copy Constructor
A copy constructor is a member function which initializes an object 
using another object of the same class.
*/

/*
* C. Parameterized Constructor
We can add parameters to constructors just like any other function. 
These parameters help initialize an object when it is created.
*/

class Second_Point_Class {
    private: 
        int x, y;
    public:
        Second_Point_Class(int x1, int y1) {
            x = x1;
            y = y1;
        };

        Second_Point_Class() {}; //default constructor

        Second_Point_Class(Second_Point_Class &reference_point) { //copy constructor
            x = reference_point.x + 1;
            y = reference_point.y + 1;
        }; //! We can also use the C method of pass by reference over here.

        /*
        ? Note that it is necessary to pass objects by reference in copy constructors always
        TODO: Understand reason for this. 
        */

};
/*
Now, when we create an object using this class, we can give parameters, 
and the object will be initialized using it.
*/

int main() {
    //* Use of parameterized constructor
    class Second_Point_Class parameterized_point(10, 15);
    
    //* Use of default constructor
    class Second_Point_Class default_point;
    /*
    this won't create an object of this class unless we define
    a default constructor along with the parameterized one 
    which we already defined
    */

    //* Use of copy constructor
    class Second_Point_Class copy_constructor_point(parameterized_point);
    /*
    Values of `parameterized_point` are used to initialize values of 
    `copy_constructor_point`.
    */

    return 0;
}
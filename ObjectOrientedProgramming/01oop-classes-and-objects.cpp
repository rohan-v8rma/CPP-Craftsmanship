#include <iostream>
using namespace std;

/*
Because objects are dynamic, they are called run-time entities as they
are created and modified during the run-time.

A class is a user-defined type. It consists of a set of members which might be PRIVATE or PUBLIC. 

! A struct which we studied earlier is a type of class where all MEMBERs are by default public. 

? PUBLIC MEMBERS provide the class’s interface.
? PRIVATE MEMBERS provide implementation details.

* The most common kinds of members are data members and member functions.

? MEMBER FUNCTIONS can define the meaning of initialization (creation), copy, move, and cleanup (destruction)
? The variables defined within an objects are called its DATA MEMBERS.

Members are accessed using . (dot) for objects and −> (arrow) for pointers

A class is defined in C++ using keyword class followed by the name of the class.

The body of the class is defined inside the curly brackets and terminated by a semicolon at the end.

class className {
   // some data
   // some functions
};
For example,
*/

class Room {
    public:
        double length;
        double breadth;
        double height;   

        double calculateArea() {   
            return length * breadth;
        }

        double calculateVolume() {   
            return length * breadth * height;
        }

};
/*
When a class is defined, only the specification for the object is defined; no memory or storage is allocated.
To use the data and access functions defined in the class, we need to create objects.
*/

int main() {
    return 0;
}
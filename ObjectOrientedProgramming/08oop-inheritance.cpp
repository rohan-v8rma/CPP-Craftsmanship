#include <iostream>
using namespace::std;

/*
        INDEX
* 1. Syntax for Inheritance
* 2. Types of Inheritance
* 3. Modes of Inheritance
*/

/*
* 1. Syntax for Inheritance

? class <derived-classname> : access-specifier <base-classname>[, access-specifier-1 <base-classname-1>....]

* 2. Types of Inheritance

* a. Single Inheritance

A class when derived from a single class is referred to as SINGLE inheritance

? derived class ---> base class

* b. Multi Level Inheritance

When a class is derived from another derived class which in turn 
is derived from a base class, it is called MULTI-LEVEL inheritance.

? derived class ---> another derived class ---> base class

* c. Multiple Inheritance

It is the process of creating new class from more than one base
classes.

? base class <--- derived class ---> base class

* d. Hierarchial Inheritance

In heirarchial inheritance, more than one derived class is 
created from a single base class.

? derived class ---> base class <--- derived class

* e. Hybrid Inheritance

This is a combination of more than one inheritance. 
Hence, it may be a combination of Multilevel and Multiple inheritance or 
Hierarchical and Multilevel inheritance Hierarchical and Multipath inheritance, 
or Hierarchical, Multilevel and Multiple inheritances.

* 3. Modes of Inheritance

Public mode: If we derive a sub class from a public base class, then 
- public member of the base class will become public in the derived class and, 
- protected members of the base class will become protected in derived class.

Protected mode: If we derive a sub class from a Protected base class, then 
- both public member and protected members of the base class will become protected in derived class.

Private mode: If we derive a sub class from a Private base class, then 
- both public member and protected members of the base class will become Private in derived class. 
 
! Note: The private members in the base class cannot be directly accessed in the derived class, 
! while protected members can be directly accessed because, 
? private DATA MEMBERS are restricted to the class they are defined in whereas, 
? protected DATA MEMBERS are inherited by sub-classes.

*/

class person {
    public:
        char gender;
        int age;
};

class university_graduate {
    protected:
        int university_id;

};

class electrician : public person, protected university_graduate {
    public:
        int badge_number;
};
#include <iostream>
using namespace::std;

//TODO: It would be better to read ahead till 12oop-a-inheritance and then coming to this topic

class Person {
    public: 
        string name;
        int age;

        Person(); //default constructor
        
        Person(string name, int age) { //parameterized constructor
            this -> name = name;
            this -> age = age;
        };
};

class Man : public Person {
    public:
        float height;
        
        Man();
        /*
        Here is the parameterized constructor of `Man`,
        we can run the parameterized constructor of its base class as well in this format
        */
        Man(string name, int age, float height) : Person(name, age) { 
            this -> height = height;
        };
    
};

int main() {
    Man first("Rohan", 19, 6.1);

    return 0;
}
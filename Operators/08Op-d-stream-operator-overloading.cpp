#include <iostream>
using namespace::std;

class Student {
    public:
        string name;
        float age;
        char gender;
        
        Student() {
            name = "noName";
            age = -1;
            gender = 'L';
        };

        Student(string name, float age, char gender) {
            this -> name = name;
            this -> age = age;
            this -> gender = gender;
        };

    friend istream& operator >> (istream& in, Student& example); 
    friend ostream& operator << (ostream& out, Student example);
    /* 
    we will be giving `cin` as one operand to the operator, which is why 
    we are keeping `istream& in` as a parameter.
    */
};

istream& operator >> (istream & in, Student &example) { 
    
    cout << "Name: ";
    in >> example.name;
    
    cout << "\nAge: ";
    in >> example.age;
    
    cout << "\nGender: ";
    in >> example.gender;

    return in;
    /*
    After the operation is completed, we return `in` BY REFERENCE
    Meaning, the original object `in` (which is `cin` during our usage)
    is modified such that its input buffer has some new bytes of data, 
    which it needs to initialize variables with.
    
    TODO understand more in-depth
    */

};

ostream& operator << (ostream& out, Student example) {
    out << "\nStudent's name is " << example.name;
    out << "\nStudent's age is " << example.age;
    out << "\nStudent's gender is " << example.gender;
    return out;
}

int main() {
    Student rohan;
    cin >> rohan;
    cout << rohan << '\n';
}
#include <iostream>
#include <string.h>
using namespace::std;

class Hostel {
    public:
        char blockName[7] = "Block ";
        int roomNumber;
        string airCon;
        string diet;
        static char block;
        static int rooms;
        
        static void allotRoom(){
            if (rooms <= 3) {
                rooms += 1;
            }
            else {
                rooms = 1;
                block += 1;
            };
        };

        Hostel() {
            blockName[5] = block;
            roomNumber = rooms;
            allotRoom();
        };

};

char Hostel::block = 'A';
int Hostel::rooms = 1;

class Student {
    
    friend istream& operator >> (istream& in, Student& student);
    friend ostream& operator << (ostream& out, Student& student);
    
    friend void sameBlockStudents(char blockFind, Student *studentList, int size);

    private:
        string regNumber;
        string name;
        int phoneNumber;
        Hostel hostelInfo;

        static int totalInstances;
};

int Student::totalInstances = 0;

istream& operator >> (istream& in, Student& student) {
    
    cout << "Registration number: ";
    in >> student.regNumber;

    cout << "Name: ";
    in >> student.name;

    cout << "Phone number: ";
    in >> student.phoneNumber;

    return in;
};

ostream& operator << (ostream& out, Student& student) {
    
    out << "Registration number: " << student.regNumber << endl;
    
    out << "Name: " << student.name << endl;
    
    out << "Phone number: " << student.phoneNumber << endl;
    
    out << "Block: " << student.hostelInfo.blockName << endl;
    
    out << "Room number: " << student.hostelInfo.roomNumber << endl;

    return out;
};

void sameBlockStudents(char blockFind, Student *studentList, int size) {
    
    int matches = 0;

    char blockMatch[7] = "Block ";
    blockMatch[5] = blockFind;

    for(int index = 0; index < size; index++) {    

        int test = strcmp(((*(studentList + index)).hostelInfo).blockName, blockMatch);
        
        if (!test) {
            matches += 1;
            cout << ((studentList + index) -> regNumber) << ", ";
        };
    };

    printf("%d out of %d students belong to this block.\n", matches, size);
};

int main() {

    Student studentList[1];

    for(int index = 0; index < 1; index++) {
        cin >> studentList[index];
    };

    char blockFind;
    cout << "What block students do you need? --> ";
    cin >> blockFind;
    
    sameBlockStudents(blockFind, studentList, (sizeof(studentList)/sizeof(studentList[0])));

    return 0;
}
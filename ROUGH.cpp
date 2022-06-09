#include <iostream>
using namespace::std;

class Hostel {
    public:
        string blockName;
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
            blockName = (string)( "Block" + block );
            roomNumber = rooms;
            allotRoom();
        };

};

char Hostel::block = 'A';
int Hostel::rooms = 1;

class Student {
    
    friend istream& operator >> (istream& in, Student& student);
    friend ostream& operator << (ostream& out, Student& student);
    
    friend void sameBlockStudents(Student *studentList);
    friend void sameBlockStudents(string blockFind, Student *studentList, int size);

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

void sameBlockStudents(string blockFind, Student *studentList, int size) {
    
    int matches = 0;

    for(int index = 0; index < size; index++) {
        

        cout << (*(studentList + index)) << "\n";
        cout << ((*(studentList + index)).hostelInfo).roomNumber << "\n";
        // cout << "Block" << blockFind << "\n";
    
        if ( ((*(studentList + index)).hostelInfo).blockName == ("Block" + blockFind) ) {
            matches += 1;
            cout << ((studentList + index) -> regNumber) << ", ";
        };
    };
    printf("%d out of %d students belong to this block.", matches, size);
};

int main() {
    // Student::setTotalInstances();

    Student studentList[1];

    for(int index = 0; index < 1; index++) {
        cin >> studentList[index];
    };

    string blockFind;

    // cout << "Find students of block [Enter block as a capital letter]: ";
    cin >> blockFind;
    
    sameBlockStudents(blockFind, studentList, (sizeof(studentList)/sizeof(studentList[0])));

    return 0;
}
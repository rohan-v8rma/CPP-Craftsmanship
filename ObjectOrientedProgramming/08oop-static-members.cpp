#include <iostream>
using namespace::std;

/*
There are two types of static members: static data members and static member functions.

* 1. STATIC data members

* Properties of STATIC data member
When a data member is set as STATIC, that value is kept same for the entire class, 
instead of the value being different for each instance of the class as in regular data members.

So, a static data member becomes a property of the class itself rather than the objects 
which are instances of the class.

? When we set a data member as STATIC, it is automatically INITIALIZED to 0.

* Access specifiers for STATIC data members
Whatever access specifier we keep a static data member under, it can still be accessed
outside the class and initialized,
USING THE SCOPE RESOLUTION OPERATOR 

* Applications of STATIC data member
It can help in keeping a count on how many objects have been created.

* Initializing static data member (IMPORTANT)
Static data members are by default PRIVATE only. 

? But for initializing them, we can use the SCOPE RESOLUTION OPERATOR 
? (since static data members are part of classes) and access them directly.

! NOTE that we can only do this ONCE and subsequent attempts to 
! assign values to the static data member will throw errors.
*/

class Employee {
    private:
        static int count;

    public:
        int employee_id;
        char name[50];

        void setData(void) {
            cout << "Enter the id" << endl;
            cin >> employee_id;
            count++;
        };

        void getData(void) {
            cout << "The id of this employee is " << employee_id << " and this is employee number " << count << endl;
        };

        /*
        * 2. STATIC member functions

        Static functions are functions which can only access static variables.
        
        */

        static void getCount() {
            cout << "The number of instances of the class is " << count << endl;
            
            //! cout << employee_id;  
            //! This will throw an error because we are trying to acccess 
            //! a non-static variable using a static function.

            //? But we can modify static variables using it 

            count += 1;
        };

};

int Employee::count = 1000; //assigning value to/declaring static data member

/*
we do this because if we were to assign a value to STATIC data member in the code for creating the class,
the code would run everytime an instance of the class would be created, which would defeat the purpose
of the STATIC data member. 
*/

int main() {

    class Employee rohan, prerit; 
    
    rohan.setData();
    rohan.getData();

    Employee::getCount(); //scope resolution operator used here 

    prerit.setData();
    prerit.getData();

    Employee::getCount();

    return 0;
}
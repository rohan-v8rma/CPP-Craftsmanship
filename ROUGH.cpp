#include <iostream>
#include <string>
using namespace::std;

class A {
    protected:
        int a;
    public:
        A() { a = 100; };
        void value_of_a() { cout << a; };
};

class B : public A {
    private: int a;
    public: 
        B() { a = 200; };
        void print() {
            cout << A::a;
            // value_of_a();
            cout << " " << a;  
        }
};

int main() {
    B b;
    b.print();
    return 0;
}
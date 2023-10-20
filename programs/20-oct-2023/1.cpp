#include <iostream>
#include <string>
using namespace std;

class student {
    int roll;
    string name;

public:
    student(int r, string n)
    {
        roll = r;
        name =n;
    }
    void setRoll(int r) {
        roll = r;
    }

    void setName(const string& n) {
        name = n;
    }
    void print() {
        cout << "Roll: " << roll << "Name: " << name << endl;
    }
};

int main() {
    student s1(21, "input1");
    student s2(s1); 
    s1.print(); 
    s2.print(); 
    s1.setName("input2");
    s1.setRoll(21);
    s1.print();
    s2.print();
    return 0;
}

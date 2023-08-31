// #include<bits/stdc++.h>
// using namespace std;
// class static_v_f
// {
//     int a;
//     int b;
//     public:
//     static int count;
//     static_v_f()
//     {
//         a=10;
//         b=10;
//         count++;
//     }
//     static int fun();
// };
// int static_v_f::count=0;
// int static_v_f::fun()
// {
//     {
//         //a++ is not allowed only static members.
//         return count;
//     }
// }
// int main()
// {
//     static_v_f t1;
//     cout<<t1.fun()<<endl;
//     static_v_f t2;
//     cout<<t2.fun()<<endl;
//     cout<<t1.fun()<<endl;
// }

// <----------------------------------------------------->

#include <iostream>
using namespace std;

class Student
{
	public:
    int roll;
    string name;
            
    static int addNo;
            
    Student(string n)
    {
        addNo++;
        roll=addNo;
        name=n;
    }
            
    void display()
    {
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
    }
    
};
    
int Student::addNo=0;
int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Khan");
    Student s5("Khan");
    Student s6("Khan");

	s1.display();
    s6.display();
        
    cout<<"Number Admission "<<Student::addNo<<endl;
        
} 
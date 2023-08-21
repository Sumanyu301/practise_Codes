#include <iostream>
using namespace std;

class school
{
    int m1;
    int m2;
    int m3;

public:
    int add();
    char grade();
    school(int one, int two, int three)
    {
        m1 = one;
        m2 = two;
        m3 = three;
    }
};
int school::add()
{
    return (m1 + m2 + m3);
}
char school::grade()
{
    if (add() / 3 >= 60)
    {
        return ('a');
    }
    else if (add() / 3 >= 40)
    {
        return ('b');
    }
    else
    {
        return ('c');
    }
}
int main()
{
    int m1, m2, m3;
    long roll;
    char arr[100];
    cout << "enter roll number : " << endl;
    cin >> roll;
    cin.ignore();
    cout
        << "enter your name : " << endl;
    cin.getline(arr, 100);
    cout << "enter your marks of 3 subjects " << endl;
    cin >> m1 >> m2 >> m3;
    school r1(m1, m2, m3);
    cout<<"roll no. = "<<roll<<endl;
    cout<<"name = "<<arr<<endl;
    cout << r1.add() << endl;
    cout << "Grade = " << r1.grade();
}

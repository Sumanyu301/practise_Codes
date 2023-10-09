#include <iostream>
using namespace std;

class student
{
public:
    int m1;
    int m2;
    int m3;

    double average(int a, int b, int c)
    {
        return (double)(a + b + c) / 3;
    }
};

int main()
{
    student s1;

    cout << "Input marks: ";
    cin >> s1.m1 >> s1.m2 >> s1.m3;

    double avg = s1.average(s1.m1, s1.m2, s1.m3);

    cout << "Average: " << avg << endl;

    return 0;
}

int fun1() {

    {



        
    }
}

#include <iostream>
using namespace std;
struct student
{
    char name[10];
    long long int roll;
};

int main()
{
    cout << sizeof(student);
    return 0;
}

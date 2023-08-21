// #include <iostream>
// using namespace std;
// typedef struct student
// {
//     char name[10];
//     long long int roll;
// } xyz;

// int main()
// {
//     cout << sizeof(xyz);
// }

#include <iostream>
using namespace std;
struct student
{
    char name[10];
    long long int roll;
};

int main()
{
    typedef struct student xyz;
    cout << sizeof(xyz);
}
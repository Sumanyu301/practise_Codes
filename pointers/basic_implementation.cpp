#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr1 = &a;  // Pointer to an int, initialized to point to 'a'

    float b = 10.5;
    float *ptr2 = &b;  // Pointer to a float, initialized to point to 'b'

    char c = 'x';
    char *ptr3 = &c;  // Pointer to a char, initialized to point to 'c'

    double d = 1.345;
    double *ptr4 = &d;  // Pointer to a double, initialized to point to 'd'

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;
    cout << *ptr4 << endl;

    return 0;
}

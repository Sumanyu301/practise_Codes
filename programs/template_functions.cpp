#include <iostream>
using namespace std;

template <class t>
t power(t n, t m)
{
    return (n + m);
}

int main()
{
    float n = 2.5, m = 7.9;
    float p;
    int a = 10, b = 20, c;
    p = power(n, m);
    c = power(a, b);
    cout << p << endl;
    cout << c;
}

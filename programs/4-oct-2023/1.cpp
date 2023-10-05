#include <bits/stdc++.h>
using namespace std;

class abc
{
public:
    int a;
    int b;
    void percentage(int);
};
void abc::percentage(int a)
{
    cout << float( a) / 100 * 100 << "%";
}
int main()
{
    abc s1;
    abc s2;
    s1.a = 50;
    s1.b = 50;
    s2.b = 50;
    s2.a = 50;
    s1.percentage(s1.a);
    return 0;
}
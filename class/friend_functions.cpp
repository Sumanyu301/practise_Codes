#include<bits/stdc++.h>
using namespace std;
class my
{
    int a=10;
    public:
    int b=20;
    void fun();
    friend fun();
};
    void my::fun()
    {
        cout<<b<<endl;
        cout<<a;
    }
int main()
{
    my m;
    m.fun();
}
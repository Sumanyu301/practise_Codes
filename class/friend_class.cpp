#include<bits/stdc++.h>
using namespace std;
class friends;
class my
{
    int a=10;
    public:
    int b=20;
    friend friends;
};
class friends
{
    public:
    my m;
    void fun()
    {
        cout<<m.b<<endl;
        cout<<m.a;
    }
};
int main()
{
    friends f;
    f.fun();
}
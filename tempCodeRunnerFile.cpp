#include<bits/stdc++.h>
using namespace std;
class static_v_f
{
    int a;
    int b;
    public:
    static int count;
    static_v_f()
    {
        a=10;
        b=10;
        count++;
    }
    static int fun();
};
int static_v_f::count=0;
int static_v_f::fun()
{
    {
        //a++ is not allowed only static members.
        return count;
    }
}
int main()
{
    static_v_f t1;
    cout<<t1.fun()<<endl;
    static_v_f t2;
    cout<<t2.fun()<<endl;
    cout<<t1.fun()<<endl;
}
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
    
};
int static_v_f::count=0;
int main()
{
    static_v_f t1;
    cout<<t1.count<<endl;
    static_v_f t2;
    cout<<t2.count<<endl;
    cout<<t1.count<<endl;
}
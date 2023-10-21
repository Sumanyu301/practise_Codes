#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    while(a>0)
    {
        a--;
        count++;
        if(count%b==0)a++;
    }
    cout<<count<<endl;
    return 0;
}
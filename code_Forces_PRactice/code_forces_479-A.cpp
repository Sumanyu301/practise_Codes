#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    int s1=0,s2=0,s3=0,s4=0,s5=0;
    cin >> a>>b>>c;
    s1=a+(b*c);
    s2=a*(b+c);
    s3 = a*b*c;
    s4 = (a+b)*c;
    s5 = a+b+c;
    int sum=0;
    if(sum<s1)
    {
        sum=s1;
    }
    if(sum<s2)
    {
        sum=s2;
    }
    if(sum<s3)
    {
        sum=s3;
    }
    if(sum<s4)
    {
        sum=s4;
    }
        if(sum<s5)
    {
        sum=s5;
    }
    cout<<sum;
    return 0;
}
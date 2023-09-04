#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    int count=0;
    while(t--)
    {
        while(n>0)
        {
            if(n<=9)
            {
                n=0;
                count++;
            }
            else
            {
                if(n%10>n/10)
                {
                    n= n - (n%10);
                    count++;
                }
                else
                {
                    n = n - (n/10);
                    count++;
                }
            }
        }
        cout<<count;
    }
}
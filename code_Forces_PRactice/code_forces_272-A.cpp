#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int n=t+1;
    int sum=0;
    while(t--)
    {
        int x;
        cin>>x;
        sum=sum+x;     
    }
    int count=0;
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%n!=1)
        {
            count++;
        }
    }
    cout<<count;    
    }
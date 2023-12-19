#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v;
    cin>>v;
    while(v--)
    {
    int n, k;
    cin >> n >> k;  
    int a=1;
    int x=n-k;
    while(k--)
    {
        cout<<a<<" ";   
        a++;
    }
    while(x--)
    {
        cout<<n<<" ";
        n--;
    }
    }
    
    return 0;
}
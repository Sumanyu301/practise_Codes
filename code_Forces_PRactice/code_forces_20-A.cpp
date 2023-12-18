#include <bits/stdc++.h>
using namespace std;
int prim(int n)
{
    if (n == 2)
    {
        return 3;
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=n+1;i<=m;i++)
    {
        if(prim(i) && i!=m)
        {
           break ;
        }
        if(prim(i) && i==m)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
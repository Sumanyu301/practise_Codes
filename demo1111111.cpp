#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       int a[n];
       int b[n];
       int c[n];
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
      for(int i=0;i<n;i++)
       {
        cin>>b[i];
       }
       sort(a,a+n); 
       sort(b,b+n);
       int max = a[0]+b[n-1];
       int res[n];
       int res1[n];
       for(int i=0;i<n;i++)
       {
          res[i] = max-a[i];
          res1[i] = max-a[i];
       }
       sort(res1,res1+n);
       bool isEqual = true;
       for(int i=0; i<n; i++)
       {
           if(res1[i] != b[i])
           {
               isEqual = false;
               break;
           }
       }
       if(isEqual)
       {
        for(int i=0;i<n;i++)
       {
        cout<<a[i]<<" ";
       }
       cout<<endl;
       for(int i=0;i<n;i++)
       {
        cout<<res[i]<<" ";
       }
       cout<<endl;
       }
       else
       {
           cout << "-1" << endl;
       }
    }
}

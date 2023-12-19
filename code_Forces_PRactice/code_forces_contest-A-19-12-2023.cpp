#include <bits/stdc++.h>
using namespace std;

int main() {
    int v;
    cin>>v;
    while(v--)
    {
            int n;
    cin >> n;
    char arr[n];
    char brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=0;

    for(int i=0;i<n;i++)
    {
        int k=0;
        for(int j=0;j<x;j++)
        {
            if(arr[i]==brr[j])
            {
               k=1; 
            }
        }
        if(k==0)
        {
            brr[x]=arr[i];
            x++;
        }
    }
    int maxcount=0;
    for(int i=0;i<x;i++)
    {
        int cont = 0;
        for(int j=0;j<n;j++)
        {
            if(brr[i]==arr[j])
            {
                cont++;
            }
        }
        if(cont>=brr[i]-64)
        {
            maxcount++;
        }
    }
    cout<<maxcount<<endl;
    }
    return 0;
}
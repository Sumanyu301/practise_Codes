#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b,c;
    cin >> a>>b>>c;
    int arr1[27];
    int arr2[27];
    for(int i=0;i<27;i++)
    {
        arr1[i] = 0;
        arr2[i] = 0;
    }
    for(int i=0;a[i]!='\0';i++)
    {
        arr1[(a[i]-64)]++;
    }
    for(int i=0;b[i]!='\0';i++)
    {
        arr1[(b[i]-64)]++;
    }
    for(int i=0;c[i]!='\0';i++)
    {
        arr2[(c[i]-64)]++;
    }
    for(int i=0;i<27;i++)
    {
        if(arr1[i]==arr2[i])
        {
            ;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
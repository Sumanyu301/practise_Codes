#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;
    int count = n.length();
    int arr[count];
    int k = 0;
    for(int i=0;i<count;i++)
    {
        if(n[i]==m[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }

    return 0;
}

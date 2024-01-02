#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]=='H'||n[i]=='Q'||n[i]=='9')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
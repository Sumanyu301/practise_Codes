#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count=0;
    while(n>0)
    {
        if(n>=5)
        {
            n-=5;
            count++;
        }
        else if(n=4)
        {
            n-=4;
            count++;
        }
        else if(n=3)
        {
            n-=3;
            count++;
        }
        else if(n=2)
        {
            n-=2;
            count++;
        }
        else if(n=1)
        {
            n-=1;
            count++;
        }

    }
    cout<<count;
    return 0;
}
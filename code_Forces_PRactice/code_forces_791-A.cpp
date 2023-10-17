#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n>>m;
    int count =0;
    while(n<=m)
    {
        n*=3;
        m*=2;
        count++;
    }
    cout<<count;
    return 0;
}
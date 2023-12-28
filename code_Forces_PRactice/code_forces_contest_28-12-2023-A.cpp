#include <bits/stdc++.h>
using namespace std;
int findUniqueValue(int a, int b, int c) {
    if (a == b) {
        return c;
    } else if (a == c) {
        return b;
    } else {
        return a;
    }
}
int main() {
    int n;
    cin >> n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<findUniqueValue(a,b,c)<<endl;
    }
    return 0;
}
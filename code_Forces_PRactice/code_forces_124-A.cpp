#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int x = n - a;
    while (x > b + 1)
    {
        x--;
    }
    cout << x;
    return 0;
}
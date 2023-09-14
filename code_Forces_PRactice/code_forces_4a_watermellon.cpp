#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 0 || n == 2)
    {
        cout << "NO";
        return (0);
    }
    if (n % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
// 4A - Watermelon
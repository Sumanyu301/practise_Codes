#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    a = n;
    while (a)
    {
        if (a % 10 == 7 || a % 10 == 4)
        {
            a /= 10;
        }
        else
        {
            break;
        }
    }
    if (a == 0)
    {
        cout << "YES";
    }
    else
    {
        if (n % 7 == 0 || n % 4 == 0 || n % 47 == 0 || n % 74 == 0 || n % 444 == 0 || n % 474==0 || n % 477 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
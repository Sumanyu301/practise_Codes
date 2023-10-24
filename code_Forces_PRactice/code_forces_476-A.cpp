#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count;
    cin >> n >> m;
    if (n < m)
    {
        cout << "-1";
        return 0;
    }
    if (n % 2 == 0)
    {
        count = n / 2;
        if (count % m == 0)
        {
            cout << count;
        }
        else
        {
            while (count % m != 0)
            {
                count++;
            }
            cout << count;
        }
    }
    if (n % 2 == 1)
    {
        count = n / 2 + 1;
        if (count % m == 0)
        {
            cout << count;
        }
        else
        {
            while (count % m != 0)
            {
                count++;
            }
            cout << count;
        }
    }
    return 0;
}
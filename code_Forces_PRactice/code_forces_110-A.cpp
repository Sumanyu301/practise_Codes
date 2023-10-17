#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 7 || n % 10 == 4)
        {
            n /= 10;
            count++;
        }
        else
        {
            n /= 10;
        }
    }
    if (count == 7 || count == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int arr[d];
    for (int i = 0; i <= d; i++)
    {
        arr[i] = i + 1;
    }
    int count = 0;
    for (int i = k; i <= d; i += k)
    {
        if (arr[i-1] % i == 0)
        {
            arr[i-1] = 0;
        }
    }
    for (int i = l; i <= d; i += l)
    {
        if (arr[i-1] % i == 0)
        {
            arr[i-1] = 0;
        }
    }
    for (int i = m; i <= d; i += m)
    {
        if (arr[i-1] % i == 0)
        {
            arr[i-1] = 0;
        }
    }
    for (int i = n; i <= d; i += n)
    {
        if (arr[i-1] % i == 0)
        {
            arr[i-1] = 0;
        }
    }
    for (int i = 0; i <= d; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
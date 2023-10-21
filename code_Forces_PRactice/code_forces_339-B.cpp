#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int a = 1, k = 0,  x = m, b;
    long long int count=0;
    while (x--)
    {
        b = arr[k];
        if (a <= b)
        {
            count += b - a;
            k++;
            a = b;
        }
        else
        {
            count += n - a + b;
            k++;
            a = b;
        }
    }
    cout << count;

    return 0;
}
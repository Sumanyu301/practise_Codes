#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin >> brr[i];
    }
    int count = 0;
    int maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        count -= arr[i];
        count += brr[i];
        if (maxcount < count)
        {
            maxcount = count;
        }
    }
    cout << maxcount;
    return 0;
}
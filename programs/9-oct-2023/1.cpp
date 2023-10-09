#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = i; j < i+k; j++)
        {
            if (i > n-1 - k)
            {
                break;
            }
            else
            {
                temp += arr[j];
                if (temp > max)
                {
                    max = temp;
                }
            }
        }
    }
    cout << max;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    char arr[n];
    char brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (x--)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'B' && arr[i + 1] == 'G')
            {
                brr[i] = arr[i + 1];
                brr[i + 1] = arr[i];
                i++;
            }
            else
            {
                brr[i] = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = brr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
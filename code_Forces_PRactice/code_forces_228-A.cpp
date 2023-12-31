#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    if (count == 4)
    {
        cout << 0;
    }
    else if (count == 5)
    {
        cout << 1;
    }
    else if (count == 7)
    {
        cout << 2;
    }
    else if (count == 6)
    {
        cout << 2;
    }
    else
    {
        cout << 3;
    }
    return 0;
}
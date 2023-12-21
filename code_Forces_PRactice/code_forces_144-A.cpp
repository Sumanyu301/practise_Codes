#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    int maxindex = 0;
    int minindex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            minindex = i;
        }
    }
    int res = 0;
    if (maxindex > minindex)
    {
        res += maxindex;
        res += ((n - 1) - minindex) - 1;
    }
    else
    {
        res += maxindex;
        res += ((n - 1) - minindex);
    }
    cout << res;
    return 0;
}
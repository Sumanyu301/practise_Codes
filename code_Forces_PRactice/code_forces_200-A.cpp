#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float x = n * 100;
    int arr[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    float num = (sum / x) * 100;
    cout<<setprecision(12)<<num;
    return 0;
}
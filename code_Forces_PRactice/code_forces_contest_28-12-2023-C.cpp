#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long num)
{
    long long sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        
        vector<long long> arr(n); 

        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (isPerfectSquare(sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
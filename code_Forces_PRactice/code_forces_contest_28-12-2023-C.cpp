#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> arr(n); 

        int sum = 0;
        for (int i = 0; i < n; i++)
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

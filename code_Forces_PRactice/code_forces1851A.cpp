#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m, k, h, count = 0;
        cin >> n >> m >> k >> h;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (arr[i] > h)
                {
                    if (h + (j * k) - arr[i] == k)
                    {
                        count++;
                        break;
                    }
                }
                else if(arr[i]<h)
                {
                    if (arr[i] + (j * k) - h == k)
                    {
                        count++;
                        break;
                    }
                }
                else
                {
                    
                }
            }
        }
        cout << count <<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int Maxsum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                int k = 1;
                int sum = arr[i];
                   if (sum > Maxsum)
                        {
                            Maxsum = sum;
                        }
                for (int j = i + 1; j < n; j++)
                {
                  
                    if (arr[j] % 2 != 0 && k == 1)
                    {
                        sum += arr[j];
                        k = 0;
                        if (sum > Maxsum)
                        {
                            Maxsum = sum;
                        }
                    }
                    else if (arr[j] % 2 == 0 && k == 0)
                    {
                        sum += arr[j];
                        k = 1;
                        if (sum > Maxsum)
                        {
                            Maxsum = sum;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                int k = 0;
                int sum = arr[i];
                   if (sum > Maxsum)
                        {
                            Maxsum = sum;
                        }
                for (int j = i + 1; j < n; j++)
                {
                    
                    if (arr[j] % 2 != 0 && k == 1)
                    {
                        sum += arr[j];
                        k = 0;
                        if (sum > Maxsum)
                        {
                            Maxsum = sum;
                        }
                    }
                    else if (arr[j] % 2 == 0 && k == 0)
                    {
                        sum += arr[j];
                        k = 1;
                        if (sum > Maxsum)
                        {
                            Maxsum = sum;
                        }
                    }
                    else
                    {
                        
                        break;
                    }
                }
            }
        }
        cout << Maxsum<<endl;
    }
    return 0;
}
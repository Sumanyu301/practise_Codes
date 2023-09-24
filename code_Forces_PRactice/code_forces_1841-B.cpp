#include<bits/stdc++.h>
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
        int brr[n];
        int flag = 0;
        int k=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (flag == 0)  // Use '==' for comparison, not '='
            {
                brr[flag] = 1;
                flag++;
            }
            else
            {
                if (arr[flag - 1] <= arr[i] && k==0)
                {
                    brr[flag] = 1;
                    flag++;
                }
                else if (arr[flag - 1] > arr[i] && arr[0] >= arr[i])
                {
                    brr[flag] = 1;
                    flag++;
                    k=1;
                }
                else
                {
                    brr[flag] = 0;
                    flag++;
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << brr[i];
        }
        cout << endl;  // Print a newline after each test case
    }
    return 0;  // Add a return statement to indicate successful program execution
}

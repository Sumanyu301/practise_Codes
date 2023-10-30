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
        int brr[n];
        int flag = 0;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        brr[0] = arr[0];
        cout << "1";
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= brr[k] && flag == 0)
            {
                cout << "1";
                k++;
                brr[k]=arr[i];
            }
            else if (arr[i] < brr[k] && flag == 1)
            {
                cout << "0";
            }
            else if (arr[i] >= brr[k] && arr[i] <= arr[0])
            {
                cout << "1";
                flag = 1;
                k++;
                brr[k]=arr[i];
            }
            else if (arr[i] <= brr[k] && arr[i] <= arr[0])
            {
                cout << "1";
                flag = 1;
                k++;
                brr[k]=arr[i];
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}

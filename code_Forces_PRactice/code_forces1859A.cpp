#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int k = 1;
        int j = 0;
        int arr1[n];
        int arr2[n];
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        sort(brr,brr+n);
        arr1[0] = brr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr1[k-1] % brr[i] == 0)
            {
                arr1[k] = brr[i];
                k++;
            }
            else
            {
                arr2[j] = brr[i];
                j++;
            }
        }
        if(j==0||k==0)
        {
        cout<<"-1"<<endl;}
        else{
        cout << k << " " << j << endl;
        for (int i = 0; i < k; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < j; i++)
        {
            cout << arr2[i] << " ";
        }
        }
    }
    return 0;
}
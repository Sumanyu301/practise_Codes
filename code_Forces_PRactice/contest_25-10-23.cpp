#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum1+=arr[i];
        }
        int sum = sum1/n;
        sort(arr, arr + n);
        if(arr[0]>sum)
        {
            cout<<"NO";
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=1;
                if(arr[j]>sum)
                {
                    while(arr[i]!=sum)
                    {
                        if(arr[i]+pow(2,k)==sum)
                        {
                            arr[j-=pow(2,k)];
                        }
                        else if(arr[i]+pow(2,k)>sum)
                        {
                            cout<<"NO";
                            break;
                        }
                    }
                }
            }
        }
        }
    }
}
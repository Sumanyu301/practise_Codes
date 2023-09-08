#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    while(s--)
    {
        int len;
        cin>>len;
        int price;
        cin>>price;
        int arr[len];
        for(int i=0;i<len;i++)
        {
            cin>>arr[i];
        }
        int val=0;
        int count=0;
        for(int i=0;i<len;i++)
        {
            if(val<arr[i])
            {
                count++;
                val=arr[i];
            }
        }
        cout<<count*price;
    }
}
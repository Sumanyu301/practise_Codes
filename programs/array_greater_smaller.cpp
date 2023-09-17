#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        int num;
        cin>>num;
        int index;
        for(int i=0;i<a;i++)
        {
            if(arr[i]==num)
            {
                index=i;
            }
        }
        int x=0;
        int i;
        for( i=0;i<a;i++)
        {
            if(num>arr[i])
            {
                int temp=arr[i];
                for(int j=i;j>x;j--)
                {
                    arr[j]=arr[j-1];
                }
                arr[x] = temp;
                x++;
            }
        }
        i--;
        for(int j=i;j>x;j--)
                {
                    arr[j]=arr[j-1];
                }
                arr[x] = num;
         for(int i=0;i<a;i++)
        {
            cout<<arr[i]<<" ";
        }
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int frequency[max+1];
    for(int i=0;i<max+1;i++)
    {
        frequency[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int id = arr[i];
        frequency[id]++;
    }
    for(int i=0;i<max+1;i++)
    {
        cout<<frequency[i]<<endl;
    }
    cout<<max;
}







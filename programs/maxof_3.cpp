//this works from int_min to int_max
#include<bits/stdc++.h>
// #include<limits.h>
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
   int max1=INT_MIN;
   int max3=INT_MIN;
   int max2=INT_MIN;
   int min1 = INT_MAX;
   int min2 = INT_MAX;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max1) 
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2) 
        {
            max3 = max2;
            max2 = arr[i];
        } 
        else if (arr[i] > max3) 
        {
            max3 = arr[i];
        }
        if (arr[i] < min1) 
        {
            min2 = min1;
            min1 = arr[i];
        } 
        else if (arr[i] < min2) 
        {
            min2 = arr[i];
        }
    }
    int maxp1 = max1 * max2 * max3;
    int maxp2 = min1 * min2 * max1;
    if(maxp1>maxp2)
    {
        cout<<maxp1;
    }
    else
    {
        cout<<maxp2;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
    }
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr1[i]==0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        if(arr2[i]==0)
        {
            count3++;
        }
        else
        {
            count4++;
        }
    }
    int time =0;
    if(count1>=count2)
    {
        time+=count2;
    }
    else
    {
        time+=count1;
    }
    if(count3>=count4)
    {
        time+=count4;
    }
    else
    {
        time+=count3;
    }
    cout<<time;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--){
    int n;
    cin >> n;
    int count = 0;
    int flag = 1;
    int arr[n];
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (flag)
    {
        for (int i = 0; i < n; i++)
        memcpy(brr, arr, sizeof(arr));
        sort(brr, brr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == brr[i])
            {
                if(i==n-1)
                {
                    cout<<count<<endl;
                    flag=0;
                }
            }
            else if (arr[i] != brr[i])
            {
                count++;
                for (int i = 0; i < n; i++)
                {   if(arr[i]!=0)
                    arr[i] = arr[i] - 1;
                }
                break;
            }
            else{}
        }
    }
    }
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int maxi = 0;
//         for(int i=1;i<n;i++){
//             if(arr[i]<arr[i- 1]){
//                 if(maxi<arr[i- 1]){
//                     maxi = arr[i - 1];
//                 }
//             }
//         }
//         cout<<maxi<<endl;
//     }
// }
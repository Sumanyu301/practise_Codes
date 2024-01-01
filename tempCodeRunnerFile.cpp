#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long a;
        cin >> a;
        long arr[a];
        
        for(long i = 0; i < a; i++) {
            cin >> arr[i];
        }
        for(long i=0; i<a; i++)
        {
            if(arr[i]>0)
            {
                for(long j=i+1; j<a; j++)
                {
                    
                    if(arr[j]<0)
                    {
                        long h=-arr[j];
                        if(h<arr[i])
                        {
                            arr[i]=arr[i]+arr[j];
                            arr[j]=0;
                        }
                        else
                        {
                            arr[j]=arr[i]+arr[j];
                            arr[i]=0;
                        }
                    }
                    if(arr[i]==0)
                    break;
                }
            }
        }
        long s=0;
        for(long i=0; i<a; i++)
        {
            if(arr[i]>0)
            s+=arr[i];
            //cout<<arr[i]<<" ";
        }
        cout<<s<<endl;

     
    }

    return 0;
}   
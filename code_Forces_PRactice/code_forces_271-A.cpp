#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[4];
    int k=1;
    while(k)
    {
        int count = 0;
        n+=1;
        for(int i=0;i<4;i++)
        {
            arr[i]=n/10;
            n/=10;
        }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                
            }
            if(count>1)
                {
                    break;
                }
        }
        
    }
    return 0;
}
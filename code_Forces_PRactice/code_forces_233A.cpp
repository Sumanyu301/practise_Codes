#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%2!=0)
    {
        cout<<"-1";
        return 0;
    }
    else
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }
        for(int i=0;i<n;i+=2)
        {
            cout<<arr[i+1]<<" "<<arr[i]<<" ";
        }

    }
    return 0;
}
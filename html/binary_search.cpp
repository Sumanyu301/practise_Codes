#include <iostream>
using namespace std;

int main()
{
    int n, high, low, mid;
    low = 0;
    cin >> n;
    high = n-1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    while(n=true){
        mid = (high-low)/2;
    if (arr[mid] == x)
    {
        cout << mid;
        return 0;
    }
    else if (arr[mid] > x)
    {
        high = mid - 1;
    }
    else
    {
        low = mid + 1;
    }
    }
  cout<<"not found";  
}
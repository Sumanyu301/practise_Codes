#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int count = 0;
    int a = n;
    
    while (a != 0)
    {
        a /= 10;
        count++;
    }
    
    int sum = 0;
    int b = n;
    int arr[count];
    
    for (int i = 0; i < count; i++)
    {
        arr[i] = b % 10; 
        b /= 10;
    }
    
    for (int i = 0; i < count; i++)
    {
        sum += pow(arr[i], count);
    }
    
    cout << sum;
    
    return 0;
}

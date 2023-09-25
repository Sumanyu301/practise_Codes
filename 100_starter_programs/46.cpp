// • You are given an array, whose size is stored in a variable with the name N
// • The array is stored in a variable with the name arr
// • You have to find the product of all the elements of the array
// • For example, consider the value stored in N = 4, and the value stored in arr = [1,2,3,4]. Then the required output will be 1+2+3+4 = 24, which is the required output
// Input
// • The first line of the input contains the value stored in N
// • The next line contains N space separated integers denoting the value stored in arr
// Output
// • Print the product of all the elements present in arr
// Sample Input 1 @
// 4
// 1 2 3 4
// Sample Output 1
// 24

#include <bits/stdc++.h>
using namespace std;
void prod(int arr[], int n)
{
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p *= arr[i];
    }
    cout << p;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    prod(arr, n);
    return 0;
}
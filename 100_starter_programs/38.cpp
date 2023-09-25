// Description
// • You are given an array, stored in a variable with the size arr
// • The size of the array is stored in a variable with the name n
// • You have to find the minimum number in the array
// • For example, consider the array as arr = [1 2 3 4 5], and the value stored in n = 5
// • Then, the required output will be 1, as it is the smallest number in the array
// Input
// The first line of the input contains the value stored in N, the size of the array
// The next line contains N space separated numbers denoting the elements of the array
// Output
// Print the minimum element in the array, as explained in the problem statement
// Sample Input 1
// 5
// 1 2 3 4 5
// Sample Output 1
// 1
#include <bits/stdc++.h>
using namespace std;
int min(int arr[], int n)
{
    int sum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (sum > arr[i])
        {
            sum = arr[i];
        }
    }
    return (sum);
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
    int min1 = min(arr, n);
    cout << min1;
    return 0;
}
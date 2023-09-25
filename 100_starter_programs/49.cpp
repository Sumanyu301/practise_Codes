// • You are given an array, whose size is stored in a variable of size n
// • The array is stored in a variable with the name, arr
// • You have to traverse the array, and print each element on a new line
// • For example, the value stored in N = 5, and the array is arr = [1 2 3 4 5]
// • Therefore, the required output will be
// 1 2 3 4 5
// Input
// The first First line contains N, size of array.
// Next line contains N space integers, which denote the numbers present in the array
// Output
// Print all number of array in a horizontal way.
// Sample Input 1
// 5
// 1 2 3 4 5
// Sample Output 1
// 1 2 3 4 5
#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    print(arr, n);
    return 0;
}
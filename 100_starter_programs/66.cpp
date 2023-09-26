// • You are given an array, whose size is stored in a variable with the name N
// • The array is stored in a variable with the name arr
// • You have to find the product of all the elements of the array, which are stored at even indexes
// . For example, consider the value stored in N = 4, and the value stored in arr = [1,2,3,4]. Then, the elements stored at even indexes are 1,3, therefore, the product becomes 1*3 = 3, which is the required answer
// Note: Indexing in the array starts from 0
// Input
// The first line of the input contains the value stored in N
// • The next line contains N space separated integers denoting the value stored in arr
// Output
// • Print the product of all the elements in the array which are stored at even indexes
// Sample Input 1
// 4
// 1 2 3 4
// Sample Output 1
// 3
#include <bits/stdc++.h>
using namespace std;
void evemul(int arr[], int n)
{
    int m = 1;
    for (int i = 0; i < n; i += 2)
    {
        m *= arr[i];
    }
    cout << m;
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
    evemul(arr, n);
    return 0;
}
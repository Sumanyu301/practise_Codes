// • You are given an array, whose size is stored in a variable with the name N
// • The array is stored in a variable with the name arr
// • You have to find the sum of all the elements of the array which are unique.
// • For example, consider the value stored in N = 7, and the value stored in arr = [3,5,3,3,8,5,6]. Since there are two numbers that are unique i.e 8 and 6.
// • Then the required output will be 8+6= 14, which is the required output
// Input
// • The first line of the input contains the value stored in N
// • The next line contains N space-separated integers denoting the value stored in arr
// Output
// • Print the sum of all the elements of the array which are unique.
// Sample Input 1
// 7
// 3 5 3 3 8 5 6
// Sample Output 1
// 14
#include <bits/stdc++.h>
using namespace std;
void uniquesum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            sum += arr[i];
        }
    }
    cout << sum;
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
    uniquesum(arr, n);
    return 0;
}
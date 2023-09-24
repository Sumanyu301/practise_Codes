// Description
// • In this question, you are given a 2D array stored in a variable with the name arr
// • The number of rows in the matrix is stored in the variable with the name N, while the number of columns stored in the matrix is stored in a variable with the name M
// • You have to find and print the count of prime numbers present in the matrix
// • For example, consider the value stored in N = 3, and M = 3, and
// N = 3 M = 3
// arr = [[1 2 3]
// [4 5 6]
// [7 8 91]
// The prime numbers in the 2D array are 2,3,5,7. Therefore, the required output is 4
// Note: The 2D array may contain duplicate elements. Each instance of a prime number should be counted separately
// Input
// • The first line of the input contains the values stored in N and M
// • The next line contains the values stored in arr
// Output
// • Print the count of prime numbers present in the matrix
// Sample Input 1
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 1
// 4

#include <bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    int count = 0;
    if (n == 1)
    {
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
    int n,m;
    cin >> n>>m;
    int arr[n][m];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[n][m]; 
            count+=isprime(arr[n][m]);
        }
        
    }
    cout<<count;
    return 0;
}
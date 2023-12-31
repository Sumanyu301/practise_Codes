// • You are given a 2D array, whose dimensions are stored in two variables with the name N and M
// • The value stored in N denotes the number of rows, and the value in M denotes the number of columns
// • The 2D array is stored in a variable with the name arr
// • You have to print the sum of elements of the first and last column of the 2D array
// • For example, consider the value stored in N = 3, M = 3, and the array is arr = [1,2,7], [3,4,6], [5,6,10], then the required output will be
// the first column contains elements 1, 3 and 5
// the last column contains elements 7, 6 and 10
// Total Sum = 1 + 3 + 5 + 7 + 6 + 10 = 32
// Input
// • The first line of the input contains the value stored in N and M
// • The next N lines contain M values each denoting the value stored in arr
// Output
// • Print the sum of elements of the first and last column representing the 2D Array
// Sample Input 1
// 3 3
// 1 2 7
// 3 4 6
// 5 6 10
// Sample Output 1
// 32
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < m; j++)
        {

            if (j == 0 || j == n - 1)
            {
                sum += arr[i][j];
            }
        }
       
    }
     cout << sum << endl;
    return 0;
}
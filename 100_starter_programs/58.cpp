// Description
// • You are given a 2D array, whose dimensions are stored in two variables with the name N and M
// • The value stored in N denotes the number of rows, and the value in M denotes the number of columns
// • The 2D array is stored in a variable with the name arr
// • You have to print the elements of the 2D array, row by row
// • For example, consider the value stored in N = 3, M = 2, and the array is arr = [1,2], [3,4], [5,6], then the required output will be
// 1 2
// 3 4
// 5 6
// Input
// • The first line of the input contains the value stored in N and M
// • The next N lines contain M values each denoting the value stored in arr
// Output
// • Print the output as shown in the problem statement
// Sample Input 1
// 3 2
// 1 2
// 3 4
// 5 6
// Sample Output 1
// 1 2
// 3 4
// 5 6
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
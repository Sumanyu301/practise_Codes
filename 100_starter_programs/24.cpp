// Description
// You are given two numbers, stored in variables with the following names
// max, min
// You have to print all the numbers from min to max, excluding max. Print each number on a new line
// For example, if the value stored in max = 19, and the value stored in min = 14, then the output will be
// 14
// 15
// 16
// 17
// 18
// Note: The value stored in max will always be greater than or equal to min
// Input
// The first and the only line of input contains the value stored in max, min respectively
// Output
// Print all the values from min to max, excluding max. Print each number on a new line
// Sample Input 1
// 19 13
// Sample Output 1
// 13
// 14
// 15
// 16
// 17
// 18
#include <bits/stdc++.h>
using namespace std;
void min_to_max(int n, int m)
{
    for (int i = n; i < m; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    min_to_max(m, n);
    return 0;
}
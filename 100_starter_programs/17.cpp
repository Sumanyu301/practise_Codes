// Description
// The sum of first N natural numbers is given by the formulaSUM = [N * (N + 1)]/2
// Given a number N, find the sum of first N natural numbers.
// Input
// The first and the only line of the input contains N.
// Constraints
// 1 <= N <= 50
// Output
// Print a single integer denoting the sum of first N natural numbers.
// Sample Input 1
// 3
// Sample Output 1
// 6

#include <bits/stdc++.h>
using namespace std;
void sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}
int main()
{
    int n;
    cin >> n;
    sum(n);
    return 0;
}

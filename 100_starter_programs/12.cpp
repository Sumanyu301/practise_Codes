// You are given two numbers, stored in the variable with the names left, right respectively
// You have to print all the numbers in the range of [left, right], (including the values stored in left and right) such that the current number is double of the previous number
// For example, consider the value stored in left = 2, and the value stored in right = 10, then the required output will be
// 2
// 4
// 8
// We, start from 2, and double the value so we get 4, and the value is further doubled, so the value becomes 8. The next value in the series will be 16, but since it is greater than the value stored at right = 10, we do not consider it
// Input
// The first and the only line of the input contains the value stored in, left and right respectively.
// Output
// Print all the values between,[left, right], as shown in the problem statement
// Sample Input
// 4 10
// Sample output
// 4
// 8
#include <bits/stdc++.h>
using namespace std;
void num_doubled(int n, int m)
{
    while (n <= m)
    {
        cout << n << endl;
        n *= 2;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    num_doubled(n, m);
    return 0;
}
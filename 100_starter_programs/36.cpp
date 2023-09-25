// • You are given a number, stored in a variable N
// • For all numbers in the range of [1,N], including the value stored in N, if the number is odd print N, without space, else if the number is even, print N, without space, on a
// new line
// • For example, consider the value stored in N = 5, therefore, the output required will be
// Input
// • The first and the only line of the input contains the value stored in N
// Output
// • Print the output as shown in the problem statement
// Sample Input 18
// 6
// Sample Output 1
// ------
// ******
// ------
// ******
// ------
// ******
// Description
// You are given a number stored in a variable with the name N
// Print the required pattern, such that for all numbers in the range [1, N], including N, if the number is odd, print a single, else print N * without space, on a new line
// For example, consider the value stored in N = 5. Therefore, the required output is
// Input
// The first and the only line of the input contains the value stored in N
// Output
// Print the required pattern as shown in the problem statement
// Sample Input 1
// 6
// Sample Output 1
// -
// ******
// -
// ******
// -
// ******
#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                cout << "-";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
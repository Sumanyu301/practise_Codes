// Description
// Given an integer N, and a pattern. Print the pattern as given in the sample I/O.
// Note: Please check for spaces.
// Input
// The first and the only line of the input contains the value of N.
// Constraints
// 1 <= N <=25
// Output
// Print the pattern as given in the sample test case.
// Sample Input 1
// 5
// Sample Output 1
// *****
// ****
// ***
// **
// *

#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern(n);
}
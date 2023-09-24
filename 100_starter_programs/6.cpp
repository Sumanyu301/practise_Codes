// You are given a number, stored in a variable with the name N
// Print the pattern as shown below.
// If the value stored in N = 4, then the pattern required will be
// *
// **
// ***
// Input
// The first and the only line of each test case contains the value stored in the variable N
// Output
// Print the pattern as shown in the problem statement
// Sample Input1
// 2
// Sample Output
// *
// * *
// Sample Input
// 1
// Sample Output
// *

#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pattern(i);
    }
}
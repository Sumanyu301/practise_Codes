// Description
// • You are given a number stored in a variable with the name N
// • Print the pattern as shown below, according to the value stored in N
// For example, consider the value stored in N = 5
// •Then, the required pattern will be as follows, which represents the letter L
// *
// *
// *
// *
// * * * * *
// Input
// The first and the only line of the input contains the value N
// Output
// Print the pattern as shown in the problem statement
// Sample Input 1
// 4
// Sample Output 1
// *
// *
// * * * *
#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
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
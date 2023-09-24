// • You are given a number stored in a variable with the name N
// • You have to print the pattern as shown below according to the value stored in N
// • For example, consider the value stored in N = 5, then the required pattern will be

// * * * * *
//             *
//             *
//             *
// * * * * *


// Note: Please check for spaces
// Input
// • The first and the only line of the input contains the value stored in the variable N
// Output
// • Print the pattern as shown in the problem statement, according to the value stored in N
// Sample Input 1
// 5
// Sample Output 1
// * * * * *
//             *
//             *
//             *
// * * * * *


#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n  || j == n)
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
}
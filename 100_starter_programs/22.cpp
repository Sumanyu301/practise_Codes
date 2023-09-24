// Logical Evens
// Description
// You are given two numbers, stored in the variable with the following names
// one, two
// If both the values are Even, print Both, else print No
// Input
// The only line of input contains two numbers, the values stored in one, two
// Output
// If both the values are Even, print Both, else print No
// Sample Input 1
// 4 7
// Sample Output 1
// No
#include <bits/stdc++.h>
using namespace std;
void iseven(int n, int m)
{
    if (n % 2 == 0 && m % 2 == 0)
    {
        cout << "BOTH";
    }
    else
        cout << "no";
}
int main()
{
    int n, m;
    cin >> n >> m;
    iseven(n, m);
    return 0;
}
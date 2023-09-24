// You are given a number, stored in a variable with the name num
// Print all the odd numbers lesser than or equal to the value stored in num
// Only those numbers need to be printed which are greater than zero
// For example, given that the value stored in num = 12
// Therefore, the output will be
// 1
// 3
// 5
// 7
// 9
// 11
// Input
// The first and the only line of the input contains the value stored in the variable num
// Output
// Print all the odd numbers greater than 0, and less than or equal to the value stored in num. Print all the numbers on a new line
// Sample Input 1
// 6
// Sample Output 1
// 1
// 3
// 5
#include <bits/stdc++.h>
using namespace std;
void oddnum(int n)
{
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    oddnum(n);
    return 0;
}
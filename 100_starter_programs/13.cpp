// Given a number, stored in the variable with the name num
// Print the multiplication table of the value stored in num
// For example, if the value stored in num is 2, then the output should be
// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20
// Print each number, on a new line
// Input
// The first and the only line of the input contains the value stored in num
// Output
// Print the multiplication table of the value stored in num, in the format as shown in the problem statement

// Input 1
// 3
// Output 1
// 3 6 9 12 15 18 21 24 27 30

#include <bits/stdc++.h>
using namespace std;
void print_table(int n)
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += n;
        cout << sum << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    print_table(n);
    return 0;
}
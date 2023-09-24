// You are given a number, stored in a variable with the name num
// Find the sum of all odd numbers, greater than 0, and less than or equal to the value stored in num
// Finally, print the sum
// For example, if the value stored in num = 5
// Then, all the odd numbers smaller than 5, will be
// 1
// 3
// 5
// Therefore, the sum becomes, sum = 1 + 3 + 5 = 9, which is the required output
// Input
// The first and the only line of the input contains the value stored in num
// Output
// Find the sum of all the odd numbers greater than 0, and less than or equal to the value stored in num, and print it
// Sample Input 1
// 7
// Sample Output 1
// 16

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}
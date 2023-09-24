// • You are given a number stored in a variable with the name N
// • You have to do the following operations on the number stored in a variable with the name N
// 1. Multiply the number with 10
// 2. Add 2 to the number
// 3. Subtract 11 from the number
// • Print the result obtained after the three operations
// • For example, consider the value stored in N = 5. So, the result of the 3 operations with the following numbers
// Step 15*10 = 50
// Step 250 + 2 = 52
// Step 3 52 11 41
// • Therefore, the final output of the number is 41
// Input
// • The first and the only line of the input contains the value stored in the variable N
// Output
// • Print the output after the operations described in the problem description
// Sample Input 1
// 5
// Sample Output 1
// 41
#include <bits/stdc++.h>
using namespace std;
void abc(int n)
{
    n *= 10;
    n += 2;
    n -= 11;
    cout << n;
}
int main()
{
    int n;
    cin >> n;
    abc(n);
    return 0;
}

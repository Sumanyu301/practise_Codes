// Given three integers A, B and C. Find the value of the expression Expression = (A*B) + C
// Input
// The first and the only line of the input contains A, B and C.
// Constraints
// 1 <= A, B, C <= 30
// Output
// Print the value of the expression of (AB) + C
// Sample Input 1
// 3 4 5
// Sample Output 1
// 17

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a * b) + c;
    return 0;
}
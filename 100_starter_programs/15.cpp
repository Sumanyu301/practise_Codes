//  You are given a number stored in a variable, with the name number
// • Multiply the number stored in the variable number by 50, and print the result obtained
// Input
// The first and the only line of the input contains the number stored in the variable number
// Constraints
// 1 <= N <=20
// Output
// Print a single number, the result obtained by multiplying it by 50
// Sample Input 1
// 2
// Sample Output 1
// 100

#include <bits/stdc++.h>
using namespace std;
void multiply_by_fifty(int n)
{
    cout<<n*50;
}
int main() {
    int n;
    cin >> n;
    multiply_by_fifty(n);
    return 0;
}
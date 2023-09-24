// Description
// You are given a number stored in a variable with the following name, num
// You have to print all the even numbers greater than zero, and less than or equal to the value stored in num
// For example, if the value stored in num = 13, then the output will be
// 2
// 4
// 6
// 8
// 10
// 12
// Note: All the values need to be printed on a new line
// Input
// The first and the only line of the input contains the value stored in the variable num
// Output
// Print all the even values greater than zero, and less than or equal to the value stored in num on a new line
// Sample Input 1 
// 12
// Sample Output 1
// 2
// 4
// 6
// 8
// 10
// 12
#include <bits/stdc++.h>
using namespace std;
void evenum(int n)
{
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << endl;
    }
}
int main()  
{
    int n;
    cin >> n;
    evenum(n);
    return 0;
}
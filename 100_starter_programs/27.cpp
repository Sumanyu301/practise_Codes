// Description
// You are given a number, stored in a variable with the name num
// Find the sum of all even numbers greater than zero, and less than or equal to the value stored in num
// For example, if the value stored in num = 5, then all the even numbers smaller than or equal to 5, and greater than zero are
// 2
// 4
// Therefore, the sum becomes, sum = 2 + 4 = 6, which is the required output
// Input
// The first and the only line of input contains the number stored in the variable num
// Output
// Print the sum of all even numbers greater than zero, and less than or equal to the value stored in num
// Sample Input 1
// 6
// Sample Output 1
// 12
#include <bits/stdc++.h>
using namespace std;
void evenumsum(int n)
{
    int sum =0;
    for (int i = 2; i <= n; i += 2)
    {
        sum+=i;
    }
    cout<<sum;
}
int main()  
{
    int n;
    cin >> n;
    evenumsum(n);
    return 0;
}

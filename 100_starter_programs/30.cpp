// • You are given a number stored in a variable with the name N
// • You have to print N lines such that on each line you find the sum of all even numbers in the range of [1, 1], where i represents all the numbers in the range of [1,N]
// • For example, consider the value stored in N = 3
// • Then, first we find the sum of all even numbers, in the range of [1,1], which comes out to be zero, as there are no even numbers in the range
// •Then, we find the sum of all even numbers, in the range of [1.2], which comes out to be 2, as there is only 1 even number (2). Hence, the sum becomes 2
// •Finally, we find the sum of all even numbers in the range of [1,3], which comes out to be 2, as there is only 1 even number (2). Hence, the sum becomes 2
// • Therefore, the final output becomes
// 0
// 2
// 2
// Input
// The first and the only line of the input contains the value stored in N
// Output
// Print N lines such that on each line you find the sum of all even numbers in the range of [1, 1], where i represents all the numbers in the range of [1,N], as shown in the problem statement
// Sample Output 1
// 4
// Sample Input 1
// 0
// 2
// 2
// 6
#include <bits/stdc++.h>
using namespace std;
void evesum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            cout << sum << endl;
        }
        else
            cout << sum << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    evesum(n);
    return 0;
}
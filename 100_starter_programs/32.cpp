// Description
// You are given a number, stored in a variable with the name N
// Print N lines such that on each line, all the numbers in the range of [1,N] are printed in reverse order
// For example, consider the value stored in N = 5
// Therefore, the output required will be
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// Input
// The first and the only line of the input contains the value stored in N
// Output
// Print the output as shown in the problem statement
// Sample Input 1
// 4
// Sample Output 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
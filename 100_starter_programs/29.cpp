// Description
// You are given a number stored in a variable with the name num
// Print num lines such that there are numbers from 1 to 1, such that on each line you print only one number. Also, i represents all the numbers from 1 to num
// For example, consider the value stored in num = 5
// Therefore, the required output will be
// 1
// 1
// 2
// 1
// 2
// 3
// 1
// 2
// 3
// 4
// 1
// 2
// 3
// 4
// 5
// Input
// The first and the only line of the input contains the value stored in num
// Output
// Print the output as shown in the problem statement

// Sample Input 1
// 4
// Sample Output 1
// 1
// 1
// 2
// 1
// 2
// 3
// 1
// 2
// 3
// 4
#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}
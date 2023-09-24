// • You are given a number stored in a variable with the name N
// • You have to print all the numbers in the range from 1 to NN, such that there are exactly N numbers on each line
// For example, if the value stored in N = 3, then all the numbers in the range, from [1,9] need to be printed, such that there are 3 numbers on each line. Therefore, the require
// d output is
// 1 2 3
// 4 5 6
// 7 8 9
// Input
// The first and the only line of the input contains the value stored in the variable N
// Output
// Print all the numbers in the range from [1, N*N), as shown in the problem statement, such that there are N numbers on each line
// Sample Input 1
// 4
// Sample Output 1
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            sum += 1;
            cout << sum <<" ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
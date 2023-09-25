// Description
// You are given two numbers, stored in variables with the following names a, b
// If both the numbers are prime, print True, else print False
// Input
// The first and the only line of input contains the value stored in a, b respectively
// Output
// Print the output as explained in the problem statement
// Sample Input 1
// 11 17
// Sample Output 1
// True
#include <bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    int count = 0;
    if (n == 1)
    {
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    if (isprime(n) && isprime(m))
    {
        cout << "yes";
    }
    else
        cout << "no";
    return 0;
}
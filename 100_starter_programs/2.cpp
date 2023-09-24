// Prime Sum Up
// Description
// You are given a number, stored in a variable with the name num. Find out the sum of all prime numbers in the range of [1,num], including the value stored in num
// Input
// The first and the only line of the input contains the value stored in num
// Output
// Print the sum of all prime numbers in the range of [1, num], including num itself
// Sample Input 1
// 13
// Sample Output 1
// 41

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
    int n;
    cin >> n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
            sum+=i;
        }
    }
    cout<<endl<<sum;
}
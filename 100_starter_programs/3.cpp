// Identify Prime
// Description
// • You are given a number stored in a variable with the name num
// . Check if the number is a prime number or not
// • If the value stored in num, is a prime number print Yes, else print No
// Note: A prime number is a number, that is divisible by only 1 and the number itself
// Input
// The first and the only line of the input contains the value stored in num
// Output
// - If the value stored in num, is a prime number print Yes, else print No
// Sample Input 10
// 13
// Sample Output 1
// Yes

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
    if (isprime(n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
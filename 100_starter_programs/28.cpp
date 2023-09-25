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

// Problem 28:-

// Description
// You are given a number, stored in a variable with the name, num
// Find out all the prime numbers, in the range, [1,num], including the value stored in num, and print each of them on a new line
// Note 1 is not a prime number
// Input
// The first and the only line of the input contains the value stored in the variable with the name num
// Output
// Print all the prime numbers, in the range from [1, num], including num itself
// Sample Input 1
// 5

// Sample Output 1
// 2
// 3
// 5
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
int main() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
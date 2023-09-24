// Fizzz buzzz
// Description
// • You are given a number stored in a variable with the name num
// • For all numbers in the range [1, num], including num
// 1. If the number is divisible by 3 and 5 both, print "FizzBuzz" without quotes
// 2. Else If the number is divisible by 3, print "Fizz", without quotes
// 3. Else If the number is divisible by 5, print "Buzz", without quotes.
// 4. Else, print the number as it is
// Input
// TThe first line contains the value stored in the variable num
// Output
// Print the required output, according to the conditions shown in the problem statement
// Sample Input 1
// 3
// Sample Output 1
// 1
// 2
// Fizz
#include <bits/stdc++.h>
using namespace std;
void fizz_buzz(int n)
{
    if(n%3==0&&n%5==0)
    {
        cout<<"FizzBuzz"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"Fizz"<<endl;
    }
    else if(n%5==0)
    {
        cout<<"Buzz"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%5==0||i%3==0)
        {
            fizz_buzz(i);
        }
        else
        {
            cout<<i<<endl;
        }
    }
}

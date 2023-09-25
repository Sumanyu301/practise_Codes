// You are given a number, stored in a variable with the name num
// For all numbers in the range of [1, num), including num, print the output according to the following conditions
// 1. If the current number, is divisible by both 2 and 3, i.e. number 2 = 0 and number % 3 = 0, print "Both", without quotes
// 2. If the number is only divisible by 2, print "Two", without quotes
// 3. If the number is only divisible by 3, print "Three" without quotes
// 4. Else, if the number is not divisible by both 2 and 3, print "None", without quotes
// Print all values on a new line
// Input
// The first and the only line of input contains, the value stored in the variable num
// Output
// Print the appropriate output, as per the conditions given in the problem statement
// Sample Input 1 
// 6

// Sample Output 1
// None
// Two
// Three
// Two
// None
// Both
#include <bits/stdc++.h>
using namespace std;
void divcheck(int n)
{
    if(n%2==0&&n%3==0)
    {
        cout<<"Both"<<endl;
    }
    else if(n%2==0)
    {
        cout<<"two"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"three"<<endl;
    }
    else
    {
        cout<<"none"<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        divcheck(i);
    }
    return 0;
}
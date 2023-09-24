// You are given a number stored in a variable with the name num
// Find the value of x, such that
// X = num % 10
// Print the answer according to the following conditions
// If
// x = 0, print 'zero`
// x = 1, print 'one'
// x = 2, print 'two'
// x = 3, print 'three'
// x = 4, print 'four'
// x = 5, print 'five'
// x = 6, print 'six'
// x = 7, print 'seven'
// x = 8, print 'eight'
// x = 9, print 'nine'

// It is guaranteed, that the value of x will be between [0,9]
// Note: All the values need to be printed without quotes
// Input
// The first and the only line of the input contains the number stored in num
// Output
// Print the answer, according to the respective value of x, as shown in the problem statement
// Sample Input 1
// 12
// Sample Output 1
// Two

#include <bits/stdc++.h>
using namespace std;
void num(int n)
{
    switch (n)
    {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;

    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    default:
        cout << "zero";
        break;
    }
}
int main()
{
    int n;
    cin >> n;
    n = n % 10;
    num(n);
    return 0;
}

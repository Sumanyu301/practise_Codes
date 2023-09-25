// • You are given a number stored in a variable with the name N
// • You have to print the first N English smaller case alphabets, mapped with the values starting from 1 to N, including the value stored in N
// . For example, consider the value stored in N = 3, then the required output will be
// a-1
// b-2
// c-3
// Note: The value stored in N will always be less than or equal to 26, and greater than 0
// Input
// • The first and the only line of the input contains the value stored in N
// Output
// • Print the output as shown in the problem statement
// Sample Input 1
// 5
// Sample Output 1
// a-1
// b-2
// c-3
// d-4
// e-5
#include <bits/stdc++.h>
using namespace std;
void print_alphabets(int n)
{
    char c = 'a';
    for (int i = 1; i <= n; i++)
    {
        cout << c << "-" << i << endl;
        c++;
    }
}
int main()
{
    int n;
    cin >> n;
    print_alphabets(n);
    return 0;
}
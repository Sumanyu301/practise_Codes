// Description
// • You are given a string, stored in a variable str, and the length of the string is stored in the variable N
// • You are also given a number stored in a variable with the name K
// • The string contains only lowercase English alphabets, such that each character is mapped to a number starting from 1, so that the mapping is as follows
// a - 1
// b - 2
// c – 3
// ------
// ------
// ------
// z - 26
// • You have to find the sum of all characters present in the string, and print the output according to the following conditions
// 11. If value of sum is greater than the value stored in K, print "Yes", without quotes
// 21. Else print "No", without quotes
// • For example, consider the value stored in N = 6, and str = nrupul, and K = 45. Then, the sum of characters according to the mapping is

// 1. If value of sum is greater than the value stored in K, print "Yes", without quotes
// 2. Else print "No", without quotes
// • For example, consider the value stored in N = 6, and str = nrupul, and K = 45. Then, the sum of characters according to the mapping is
// n - 14
// r - 18
// u - 21
// p - 16
// u - 21
// l  - 12
// Therefore, sum = 14+ 18+ 21+ 16+ 21+ 12 = 102, which is greater than the value stored in K = 45, hence the output is Yes
// Note: The string contains only lower case English Alphabets
// Input
// • The first line of the input contains the value stored in N
// • The second line of the input contains the value stored in str
// • The third line of the input contains the value stored in K
// Output
// • Print Yes or No according to the condition, mentioned in the problem statement

// Sample Input 1
// 6
// nrupul
// 45

// Sample Output 1
// Yes
#include <iostream>
using namespace std;
void checkstr(char arr[], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] -= 96;
        sum += arr[i];
    }
    if (sum > m)
    {
        cout << "yes";
    }
    else
        cout << "no";
}
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    checkstr(arr, n, m);
}
// run on gdb if not working.
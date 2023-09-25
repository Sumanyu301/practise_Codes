// • You are given a number stored in a variable with the name N
// • You are also, given a string, whose length is stored in a variable with the name K, and the string is stored in a variable with the name str
// • You have to map all lower case English characters, starting from the value stored in N.
// • For example, if the value stored in N = 30, then the mapping of the characters will be as follows

// • Finally, you have to print the sum of all the characters, present in the string str, according to the values mapped above
// • For example, if the value stored in str = "abc", then the required output will be
// 30 +31 + 32 = 93, which is the required output
// Input
// • The first line of the input contains the value stored in N
// • The second line of the input contains the value stored in K
// • The last line of the input contains the value stored in the str
// Output
// • Print the sum of characters, according to the values mapped, as shown in the problem statement
// Sample Input 1
// 30
// 3
// abc

// Sample Output 1
// 93
#include <iostream>
using namespace std;
void checkstr(char arr[], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] -= 97;
        sum += arr[i]+m;
    }
    cout<<sum;
}
int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    checkstr(arr, n, m);
}
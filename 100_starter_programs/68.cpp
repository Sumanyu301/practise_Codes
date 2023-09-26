// • You are given a string, stored in a variable with the name str. The size of the string is stored in a variable N
// • The string contains only small case English alphabets
// • You have to print True, if more than half the characters in the strings are vowels, else print False
// • For example, consider the value stored in N = 6, and str = "aabefe". The number of vowels in the string are 4, which is more than half of the length of the string, which i SN/2 = 3. Therefore, the required output is True
// Note: The value stored in N, will always be even
// Input
// • The first line of the input contains the value stored in N
// • The next line contains the value stored in str
// Output
// • Print True if more than half of the characters in the string are vowels, else print False
// Sample Input 1
// 6
// aabefe
// Sample Output 1
// True
#include <bits/stdc++.h>
using namespace std;
void vow(char arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            count++;
        }
    }
    if (count > n / 2)
        cout << "CONSONENT";
    else
        cout << "VOWEL";
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
    vow(arr, n);
    return 0;
}
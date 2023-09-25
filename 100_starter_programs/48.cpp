// • You are given a string, stored in a variable with the name str. The size of the string is stored in a variable with the name N
// • You have to make two strings out of the given string, such that the first string contains all the vowels present in str, in the same order as in str
// • The second string contains all the consonants present in str, again in the same order as in the original string str
// • For example, consider the value stored in N = 9, str = " asbastous", then all the vowels in the string are a,a,o,u and the consonants are s,b,s,t,s. Therefore, the required output becomes
// aaou
// sbsts

// • Please note the order of consonants and the vowels in the two strings is same as in the original string. The string with the vowels should be printed first, and the string with the consonants should be printed on the next line
// Note: The string contains only lower case English Alphabets
// Input
// • The first line of the input contains the value stored in N
// • The next line contains the value stored in str
// Output
// • Print two strings, as explained in the problem statement
// Sample Input 1
// 9
// asbastous
// Sample Output 1
// aaou
// sbsts
#include <bits/stdc++.h>
using namespace std;
void vov_con(char arr[], int n)
{
    char brr[n];
    char crr[n];
    int b = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            brr[b] = arr[i];
            b++;
        }
        else
        {
            crr[c] = arr[i];
            c++;
        }
    }
    for (int i = 0; i < b; i++)
    {
        cout << brr[i];
    }
    cout << endl;
    for (int j = 0; j < c; j++)
    {
        cout << crr[j];
    }
}
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    vov_con(arr, n);
    return 0;
}
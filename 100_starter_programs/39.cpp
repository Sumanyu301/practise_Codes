// • You are given a string, whose size is stored in a variable with the name N
// •The string is stored in a variable with the name str
// • You have to print true, if the string contains at least one vowel, otherwise print false
// • For example, consider the value stored in N = 6, and the value stored in str = "nrupul", then the output will be true, since the string contains the vowel u twice
// Note: The string only contains lowercase English alphabets
// Note: The vowels in the English Alphabet are considered the following - a,e,i,o,u
// Input
// •The first line of the input contains the value stored in N
// • The next line contains the value stored in str
// Output
// Print true, if the value stored in str contains at least one vowel, otherwise print false
// Sample Input 1
// 4
// stvr
// Sample Output 1
// false
#include <bits/stdc++.h>
using namespace std;
bool check(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            return true;
    }
    return false;
}
int main()
{
    string str;
    cin >> str;
    if (check(str))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
#include <bits/stdc++.h>
#include <string>
using namespace std;

bool ispalindrome(string s)
{
    for (int i = 0, j = s.length() - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    int x = 0;
    
    string abc[(str.length() * (str.length() + 1)) / 2];
    
    for (int i = 0; i < str.length(); i++)
    {
        string s;
        for (int j = i; j < str.length(); j++)
        {
            s += str[j];
            abc[x] = s;
            x++;
        }
    }
    
    int length = 0;
    
    for (int i = 0; i < (str.length() * (str.length() + 1)) / 2; i++)
    {
        if (ispalindrome(abc[i]))
        {
            if (abc[i].length() > length)
            {
                length = abc[i].length();
            }
        }
    }

    cout << length;
}

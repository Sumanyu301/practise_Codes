#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
        }
        else
        {
        }
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] += 32;
        }
        else
        {
        }
        if (str1[i] == str2[i])
        {
            continue;
        }
        else if (str1[i] > str2[i])
        {
            cout << 1;
            return 0;
        }
        else if (str1[i] < str2[i])
        {
            cout << -1;
            return 0;
        }
    }
    cout << 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; str[i] = '\0'; i++)
    {
        if (i == 0)
        {
            if ('a' <= str[i] && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
        else
            {
                tolower(str[i]);
            }
    }
    cout << str;
    return 0;
}
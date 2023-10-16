#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char str2[str.length()];
    int k = 0;
    str2[k] = str[0];
    for (int i = 1; i < str.length(); i++)
    {
        int count = 0;
        for (int j = 0; j <= k; j++)
        {
            if (str[i] == str2[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            k++;
            str2[k] = str[i];
        }
    }
    if ((k +1) % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}

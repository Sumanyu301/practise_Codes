#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    if (str.length() == 1)
    {
        cout << str[0];
        return 0;
    }
    int x = 0;
    char arr[str.length()];
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '+')
        {
            arr[x] = str[i];
            x++;
        }
    }
    sort(arr, arr + x);
    for (int i = 0; i < x; i++)
    {
        if (i == x - 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << '+';
        }
    }
    return 0;
}
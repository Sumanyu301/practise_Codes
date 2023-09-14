#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    cin >> str1;
    if (str1[0] >= 'a' && str1[0] <= 'z')
    {
        str1[0] -= 32;
    }
    else
    {
    }
    cout << str1;
}
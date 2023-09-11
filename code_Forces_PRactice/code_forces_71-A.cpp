#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    while (x--)
    {
        char str[200];
        cin.getline(str, 200);
        if (strlen(str) <= 10)
        {
            cout << str<< endl;
        }
        else
        {
            cout<<str[0]<<strlen(str)-2<<str[strlen(str)-1]<<endl;
        }
    }
}
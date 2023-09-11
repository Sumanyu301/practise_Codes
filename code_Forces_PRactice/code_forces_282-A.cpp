#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin >> n;
    char arr[10];
    while (n--)
    {
        cin.ignore();
        cin.getline(arr, 10);
        if (arr[0] == '+' || arr[strlen(arr) - 1] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << count;
}
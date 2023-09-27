#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < arr.length(); i++)
    {
        if (arr[i] == '0' && arr[i] == '0')
        {
            count1++;
            if (count1 == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
                        count1 = 0;
        } 
        
        if (arr[i] == '1' && arr[i] == '1')
        {
            count2++;
            if (count2 == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            count2 = 0;
        }
    }
    cout << "NO";
    return 0;
}
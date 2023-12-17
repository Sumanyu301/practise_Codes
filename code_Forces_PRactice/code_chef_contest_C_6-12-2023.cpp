#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[8];
        int count = 0;
        int count2 = 0;
        for (int i = 0; i < 8; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 8; i++)
        {
            if (i == 1 || i == 3 || i == 5)
            {
                if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
                {
                    count++;
                }
            }
            else
            {
                if (arr[i] != 'A' && arr[i] != 'E' && arr[i] != 'I' && arr[i] != 'O' && arr[i] != 'U')
                {
                    count2++;
                }
            }
        }
        if (count == 3 && count2 == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
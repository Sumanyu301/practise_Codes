#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int index[n];
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
            {
                index[x] = i;
                x++;
            }
        }
        int c = n / 2;
        char res[n + c];
        int k = 0;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == index[k])
            {
                
                if(k==x-1)
                {
                    res[f] = arr[i];
                    f++;
                }
                else if (index[k + 1] - index[k] == 2)
                {
                    res[f] = arr[i];
                    f++;
                    res[f] = '.';
                    f++;
                    k++;
                }
                else
                {
                    res[f] = arr[i];
                    f++;
                    i++;
                    res[f] = arr[i];
                    f++;
                    res[f] = '.';
                    f++;
                    k++;
                }
            } 
            else
            {
                res[f] = arr[i];
                f++;
            }
        }
        for (int i = 0; i < f; i++)
        {
            cout << res[i];
        }
        cout << endl;
    }
    return 0;

}
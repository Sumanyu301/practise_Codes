// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string str;
//         cin >> str;
//         char arr[str.length()];
//         int x = 0;
//         for (int i = 0; str[i] != '\0'; i++)
//         {
//             if (str[i] == 'b')
//             {
//                 for (int k = x-1; k >= 0; k--)
//                 {
//                     if (islower(arr[k]))
//                     {
//                         for (int j = k; j < x; j++)
//                         {
//                             arr[j] = arr[j + 1];
//                         }
//                         x--;
//                         break;
//                     }
//                 }
//             }
//             else if (str[i] == 'B')
//             {
//                 for (int k = x-1; k >= 0; k--)
//                 {
//                     if (isupper(arr[k]))
//                     {
//                         for (int j = k; j < x; j++)
//                         {
//                             arr[j] = arr[j + 1];
//                         }
//                         x--;
//                         break;
//                     }
//                 }
//             }
//             else
//             {
//                 arr[x] = str[i];
//                 x++;
//             }
//         }
//         for (int i = 0; i < x; i++)
//         {
//             cout << arr[i];
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char arr[2];
        for (int i = 0; i < 2; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < 9; i++)
        {
            if (arr[1] - '0' == i)
            {
                continue;
            }
            else
            {
                cout << arr[0] << i << endl;
            }
        }

        for (int i = 1; i < 9; i++)
        {
            if (arr[0] == i + '`')
            {
                continue;
            }
            else
            {
                cout << char(i + 96) << arr[1] << endl;
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;

    string result = "";

    while (count > 0)
    {
        int remainder = count % 26;
        if (remainder == 0)
        {
            result = 'Z' + result;
            count = count / 26 - 1;
        }
        else
        {
            result = char('A' + remainder - 1) + result;
            count /= 26;
        }
    }

    cout << result << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int row;
    int column;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                row = i + 1;
                column = j + 1;
            }
        }
    }
    int count = 0;
    while (row != 3 || column != 3)
    {
        if (row > 3)
        {   
            count++;
            row--;
        }
        else if (row < 3)
        {
            count++;
            row++;
        }
        if (column > 3)
        {
            count++;
            column--;
        }
        else if (column < 3)
        {
            count++;
            column++;
        }
    }
    cout << count;
}

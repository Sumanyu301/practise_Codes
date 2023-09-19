#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> n;
    cin >> m;

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    while (top <= bottom && left <= right)
    {
        
       
        while (left <= right)
        {
            cout << arr[top][left] << " ";
            left++;
        }
        top++;

        
        
        while (top <= bottom)
        {
            cout << arr[top][right] << " ";
            top++;
        }
        right--;

        
        if (top <= bottom)
        {
            
            
            while (right >= left)
            {
                cout << arr[bottom][right] << " ";
                right--;
            }
            bottom--;
        }

        if (left <= right)
        {
            
            
            while (bottom >= top)
            {
                cout << arr[bottom][left] << " ";
                bottom--;
            }
            left++;
        }
    }

    return 0;
}

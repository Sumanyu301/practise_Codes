#include <iostream>
using namespace std;

int main()
{
    int n, m, k = 1, q, r;
    cout << "give dimensions for matrix" << endl;
    cin >> n >> m;
    int arr[n][m];
    cout << "1st matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[j][i] << " ";
            }
            k = 1;
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
            k = 0;
        }
        cout << endl;
    }
}
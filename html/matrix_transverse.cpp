#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "give dimensions for matrix" << endl;
    cin >> n >> m;
    int arr[n][m];
    int crr[m][n];
    cout << "1st matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            crr[j][i] = arr[i][j];
        }
    }
    cout << "the resultant matrix is" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
}
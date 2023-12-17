#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int left =0;
    int right =m-1;
    int down =n-1;
    int up =0;
    while(left<=right && up<=down )
    {
        for(int i=left;i<=right;i++)
        {
            cout<<arr[up][i]<<" ";
        }
        up++;
        for(int i=up;i<=down;i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;
        for(int i=right;i>=left;i--)
        {
            cout<<arr[down][i]<<" ";
        }
        down--;
        for(int i=down;i>=up;i--)
        {
            cout<<arr[i][left]<<" ";
        }
        left++;
    }
}
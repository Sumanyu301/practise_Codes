#include<iostream>
using namespace std;

int main()
{
    int n,m,p,q,r;
    cout<<"give dimensions for matrix"<<endl;
    cin>>n>>m;
    p=n;
    q=m;
    int arr[n][m];
    int brr[p][q];
    int crr[p][q];
    cout<<"1st matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"2nd matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            crr[i][j]=brr[i][j]+arr[i][j];
        }
    }
    cout<<"the resultant matrix is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}
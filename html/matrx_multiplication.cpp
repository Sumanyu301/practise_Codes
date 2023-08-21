#include<iostream>
using namespace std;

int main()
{
    int n,m,p,q,r;
    cout<<"give dimensions for matrix"<<endl;
    cin>>n>>m;
    cin>>p>>q;
    if (m!=p)
    {
        return 0;
    }
    int arr[n][m];
    int brr[p][q];
    int res[n][q];
    cout<<"1st matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"2nd matrix"<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j]=0;
            for(int k=0;k<m;k++)
            {
                res[i][j]+= arr[i][k]*brr[k][j];
            }
        }
    }
    cout<<"the resultant matrix is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
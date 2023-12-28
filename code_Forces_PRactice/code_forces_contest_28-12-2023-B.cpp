#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
    char arr[3][3];
    int index =0;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cin >> arr[i][j];
            if(arr[i][j]=='?')
            {
                index = i;
            }
        }
    }
    int countA =1;
    int countB =1;
    int countC =1;
    if(arr[index][0]=='A')
    {
        countA--;
    }
    if(arr[index][0]=='B')
    {
        countB--;
    }
    if(arr[index][0]=='C')
    {
        countC--;
    }
    if(arr[index][1]=='A')
    {
        countA--;
    }
    if(arr[index][1]=='B')
    {
        countB--;
    }
    if(arr[index][1]=='C')
    {
        countC--;
    }
    if(arr[index][2]=='A')
    {
        countA--;
    }
    if(arr[index][2]=='B')
    {
        countB--;
    }
    if(arr[index][2]=='C')
    {
        countC--;
    }
    if(countA==1)
    {
        cout<<'A'<<endl;
    }
    else if(countB==1)
    {
        cout<<'B'<<endl;
    }
    else
    {
        cout<<'C'<<endl;
    }
    }

    return 0;
}

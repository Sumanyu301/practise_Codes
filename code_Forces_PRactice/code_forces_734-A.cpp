#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin >> str;
    int count1=0,count2=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        cout<<"Anton";
    }
    else if(count1<count2)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}
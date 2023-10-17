#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count1=0,count2=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
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
        for(int i =0;str[i]!='\0';i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                str[i]-=32;
            }
        }
    }
    else
    {
        for(int i =0;str[i]!='\0';i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                str[i]+=32;
            }
        }
    }
    cout<<str;
    return 0;
}
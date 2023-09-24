#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char c;
    cin >> c;
    int count = 0;
    int x=0;
    string abc[(str.length()*(str.length()+1))/2];
    for (int i = 0; str[i] != '\0'; i++)
    {
        string s;
        for (int j = i; str[j] != '\0'; j++)
        {
            s+=str[j];
            abc[x]=s;
            x++;
        }
    }
    for(int i=0;i<(str.length()*(str.length()+1))/2;i++)
    {
            if(abc[i][0]==c)
            {
                count++;
            }
    }

    cout << count;
}
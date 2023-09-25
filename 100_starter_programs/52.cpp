// • You are given a string, such that you have to check the following about the string
// 1. The string should have at least one small case character
// 2. The string should have at least one uppercase character
// 3. The string should have one special character out of the following @, #,*, !
// 4. The string should have at least one number
// • Your function should return True if all the conditions mentioned above are met, else should return false
// Input
// • There is no input required in this function
// Output
// • Complete the function, and return True if all the conditions are met, else return False
// Sample Input 1
// @vRitti31
// Sample Output 1
// True

#include <bits/stdc++.h>
using namespace std;
void checkstr(string str)
{
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='@'||str[i]=='#'||str[i]=='*'||str[i]=='$')
        {
            count1++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            count2++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            count3++;
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            count4++;
        }
    }
    if(count1>0&&count2>0&&count3>0&&count4>0)
    {
        cout<<"YES";
    }
    else
    cout<<"no";

}
int main() {
    string str;
    getline(cin,str);
    checkstr(str);
    return 0;
}
// Description
// • You are given a 2D array, whose dimensions are stored in two variables with the name N and M
// • The value stored in N denotes the number of rows, and the value in M denotes the number of columns
// • The 2D array is stored in a variable with the name arr, and contains lower case English characters
// • You have to print Yes, if any particular row of a 2D array contains at least one vowel, at least print No
// • For example, consider the value stored in N = 3, M = 2, and the array is arr = [a,b], [c, d], [e, f], then the required output will be
// Yes (This row contains the vowel a)
// No (This row does not contains any vowel)
// Yes (This row contains the vowel e)
// Input
// • The first line of the input contains the value stored in N and M
// • The next N lines contain M values each denoting the value stored in arr
// Output
// • For each row, print Yes, if the row contains at least one vowel, otherwise print No
// Sample Input 1
// 3 2
// a b
// c d
// e f
// Sample Output 1
// Yes
// No
// Yes
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='a'||arr[i][j]=='e'||arr[i][j]=='i'||arr[i][j]=='o'||arr[i][j]=='u')
            {
                count++;
            }
            
        }
        if(count>0)
            cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
    }
    return 0;
}
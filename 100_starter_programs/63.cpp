// • You are given a 2D array, whose dimensions are stored in two variables with the name N and M
// • The value stored in N denotes the number of rows, and the value in M denotes the number of columns
// • The 2D array is stored in a variable with the name arr
// • For all rows, you have to print the sum of even elements present in the row
// • For example, consider the value stored in N = 3, M = 3, and the array is arr = [1,2,3], [4,5,6], [7,8,9], then the required output will be
// 2 (Even numbers in the row are, [2]. Therefore, the sum becomes 2)
// 10 (Even numbers in the row are, [4,6]. Therefore, the sum becomes 10)
// 8 (Even numbers in the row are, [8]. Therefore, the sum becomes 8)
// Input
// • The first line of the input contains the value stored in N and M
// • The next N lines contain M values each denoting the value stored in arr
// Output
// • For each row, print the sum of even numbers present in the row, line by line
// Sample Input 1
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 1
// 2
// 10
// 8
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        int sum =0;
        for(int j=0;j<m;j++)
        {
            
            if(arr[i][j]%2==0)
            {
                sum+=arr[i][j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
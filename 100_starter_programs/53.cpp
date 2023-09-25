// • You are given an array, stored in a variable with the size arr
// • The size of the array is stored in a variable with the name n
// • You have to traverse the array, and print sum of even elements
// • Print each number on a new line
// • For example, consider the array as arr = [1 2 3 4 5], and the value stored in n = 5
// • The sum of even elements are: 2+4=6
// Then, the required output will be
// 6
// Input
// The first line of the input contains the value stored in N, the size of the array
// The next line contains N space separated numbers denoting the elements of the array
// Output
// Print the sum of even elements present in the array, as explained in the problem statement
// Sample Input 1
// 5
// 1 2 3 4 5
// Sample Output 1
// 6

#include <bits/stdc++.h>
using namespace std;
void evensum(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    cout<<sum;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    evensum(arr,n);
    return 0;
}
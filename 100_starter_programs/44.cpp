// Swap Odd Even Elements
// Description
// • You are given an array of characters, stored in a variable with the name arr
// • The size of the array is stored in a variable with the name N
// • You have to swap the elements stored at odd and even adjacent indexes, and print the resultant array
// • For example, consider the value stored in N = 6, and the array, arr = [A, B, C, D, E, F]
// • Therefore, we swap the element at (0.1) index, the element at (2,3) index, the element at (4,5) index
// • Therefore, the resultant array becomes [B, A, D, C, F, E]
// Input
// The first line of the input contains the value stored in N
// • The next line contains N space separated characters indicating the values stored in arr
// Output
// • Print the array after swapping the elements stored at adjacent even odd indexes, as shown in the problem statement
// Sample Input 1
// 6
// A B C D E F
// Sample Output 1
// B A D C F E
#include <bits/stdc++.h>
using namespace std;
void swap(char arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {   
        if(i%2==0)
        {
        char temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swap(arr, n);
    return 0;
}
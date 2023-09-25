// Description
// • You are given a string, stored in a variable with the name str, while the variable N stores the size of the string
// • You have to remove all the characters in the string which are uppercase English Alphabets, and print the resultant string
// • For example, consider the value stored in str = "CanTElever", and N = 10
// • The characters M and A are uppercase, and hence we remove them. Therefore, the required output becomes asi
// Input
// • The first line of the input contains the value stored in N
// • The second line of the input contains the value stored in str
// Output
// • Print the updated string after removing all the uppercase characters
// Sample Input 1
// 10
// CanTElever
// Sample Output 1
// anlever

#include <bits/stdc++.h>
using namespace std;
void non_cap(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            cout << arr[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    char arr[n];
    getchar();
    cin.getline(arr, n+1);
    non_cap(arr, n+1);
    return 0;
}
// • You are given a string stored in a variable str, whose length is stored in a variable with the name N
// • You have to find the count of vowels and consonants in the string, and print the output according to the following conditions
// 1. If the count of vowels is equal to the count of consonants, print "Tie", without quotes
// 2. Else If the count of vowels is greater than the count of consonants, print "Vowel", without quotes
// 3. Else If the count of vowels is lesser than the count of consonants, print "Consonant", without quotes
// • For example, consider the value stored in N = 9, and str = " excavator
// ". Then the count of vowels = 4, and the count of consonants=5. Since, the count of consonants is greater than the count of vowels, therefore the required output is Consonant
// Note: The string only contains lower case English Alphabets
// Input
// • The first line of the input contains the value stored in N
// • The second line contains the value stored in str
// Output
// • Print the output as per the conditions mentioned in the problem statement
// Sample Input 1
// 6
// Excavator

// Sample Output 1
// Consonant
#include <bits/stdc++.h>
using namespace std;
void vow(char arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            count++;
        }
    }
    if (count > n / 2)
        cout << "VOWEL";
    else
        cout << "CONSONENT";
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
    vow(arr, n);
    return 0;
}
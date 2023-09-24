// String Difference Problem
// Description
// You are given two strings S1 and S2. You have to find the difference when S2 is subtracted from S1 (S1-S2) (Sx-Sy) results in character which are extra in Sx (in the same order it is present in Sx and not in Sy)
// Input
// Input Format:
// First line of the input contains S1
// Second line of input contains S2
// Constraints:
// Length of both strings <= 1000
// Output
// Output the difference between the 2 strings
// Sample Input 1
// ABCX
// ABCD
// Sample Output 1
// X

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    int len = str2.length();
    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (str1[i] == str2[j])
            {
                break;
            }
            else if (j == len - 1)
            {
                cout << str1[i];
            }
        }
    }
}
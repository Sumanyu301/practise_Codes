// Sarvagaya is trapped in maze. The cantelever command center sent him a string which decodes to come out from the maze. He is initially at (0, 0). String contains L, R, U, D denoting eft, right, up and down. In each command he will traverse 1 unit distance in the respective direction.
// For example if he is at (2, 0) and the command is L he will go to (1, 0).
// Input
// Input Fomat
// Input contains a single string.
// Constraints
// Length of string <200
// Output
// Output Format
// Print the final point where he came out.
// Sample Input 1
// LLRDDR
// Sample Output 1
// 0 -2

#include <bits/stdc++.h>
using namespace std;
void dis(string str)
{
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'R')
        {
            count1++;
        }
        else if (str[i] == 'L')
        {
            count1--;
        }
        else if (str[i] == 'D')
        {
            count2--;
        }
        else if (str[i] == 'U')
        {
            count2++;
        }
    }
    cout << count1 << " " << count2;
}
int main()
{
    string str;
    getline(cin, str);
    dis(str);
    return 0;
}
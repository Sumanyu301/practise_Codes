#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    
    string reversed_str = str1;  // Create a copy of str1
    reverse(reversed_str.begin(), reversed_str.end());  // Reverse the copy
    
    if (str2 == reversed_str) // Compare str2 with the reversed string
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}

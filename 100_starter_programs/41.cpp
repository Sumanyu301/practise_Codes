// • You are given an array of strings, whose size is stored in a variable with the name N
// • The string array, is stored in a variable with the name arr
// • You have to find how many of the strings stored in the array arr, are weak, and how many of them are strong
// • A string is considered as strong if it contains at least one of the following characters in it @, $,#,*
// .
// • Consider the example, in which the value stored in N = 4, and the array, arr = ["test123", "new@t", "money", "nrupul"]
// The first string "test123", does not contain any of the required characters, hence the string is weak
// The second string "new@t", contains the character @, hence the string is strong
// The third string "money", contains the character hence the string is strong
// The fourth string "nrupul", does not contain any of the required characters, hence the string is weak
// • Therefore, the required output becomes weak strong strong weak
// Input
// • The first line of the input contains the value stored in N
// • The next line contains N space separated string denoting the values stored in the string array
// Output
// • For each string present in arr, print whether the string is weak or strong
// Sample Input 1
// 4
// test123 new@t mon*y nrupul
// Sample Output 1.
// weak strong strong weak
#include <bits/stdc++.h>
using namespace std;

void strweak(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isStrong = false; 

        for (int j = 0; j < arr[i].length(); j++) {
            if (arr[i][j] == '@' || arr[i][j] == '*' || arr[i][j] == '#' || arr[i][j] == '$') {
                isStrong = true; 
                break;
            }
        }

        if (isStrong) {
            cout << "strong" << " ";
        } else {
            cout << "weak" << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    strweak(arr, n);
    return 0;
}

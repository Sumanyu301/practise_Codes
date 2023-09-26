// • You are given a string, stored in a variable str, and the length of the string is stored in the variable N
// • You have to find all the vowels that are not present in the string and print them.
// • If a string contains all the vowels, in that case, print -1.
// • For example, consider the value stored in N = 6, and str = nature
// out of the 5 vowels (a,e,i,o,u)
// the word "nature" contains a,u,e
// The vowel that are not present in the string are : 1,0
// hence the output is io
// Note: The string contains only lower case English Alphabets
// Input
// • The first line of the input contains the value stored in N
// • The second line of the input contains the value stored in str
// Output
// • Print all the vowels that are not present in the given string.
// Sample Input 1
// 6
// nature
// Sample Output 1
// io
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string str;
    cin >> str;

    string result = "";

    for (char vowel : "aeiou") {
        bool isFound = false;
        for (char ch : str) {
            if (ch == vowel) {
                isFound = true;
                break;
            }
        }
        if (!isFound) {
            result += vowel;
        }
    }

    if (result.empty()) {
        cout << "-1";
    } else {
        cout << result;
    }

    return 0;
}

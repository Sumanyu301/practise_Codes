#include<bits/stdc++.h>
using namespace std;

int main() {
    int count;
    cin >> count;

    string result = ""; // To store the alphabetical representation

    while (count > 0) {
        int remainder = count % 26;
        if (remainder == 0) {
            result = 'Z' + result; // Z corresponds to remainder 0
            count = count / 26 - 1; // Reduce count and move to previous place value
        } else {
            result = char('A' + remainder - 1) + result;
            count /= 26;
        }
    }

    cout << result << endl;

    return 0;
}

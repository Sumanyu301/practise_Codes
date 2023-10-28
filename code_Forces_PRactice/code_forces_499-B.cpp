#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string arr[m];
    string brr[m];
    string shortest[m];
    string result[n];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
        cin >> brr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> result[i];
    }

    for (int i = 0; i < m; i++) {
        if (arr[i].length() <= brr[i].length()) {
            shortest[i] = arr[i];
        }
        else {
            shortest[i] = brr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (result[i] == arr[j] || result[i] == brr[j]) {
                cout << shortest[j] << " ";
            }
        }
    }

    return 0;
}

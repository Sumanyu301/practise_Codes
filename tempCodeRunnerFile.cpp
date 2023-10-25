#include <bits/stdc++.h>
using namespace std;

bool check(int N, vector<int> A) {
    sort(A.begin(), A.end());
    for (int i = 1; i < N; i++) {
        if (A[i] - A[i - 1] > 2) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
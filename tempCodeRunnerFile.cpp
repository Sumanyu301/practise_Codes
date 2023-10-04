//givrn an arrat and sum find if we can make sum = k using elements of array , elementd can be in any order.
#include <iostream>
using namespace std;

bool canmakesum(int arr[], int n, int k) {
    if (k == 0) {
        return true; 
    }
    if (n <= 0) {
        return false; 
    }
    return canmakesum(arr, n - 1, k - arr[n - 1]) || canmakesum(arr, n - 1, k);
}

int main() {
    int n, k;
    cin >> n;
    int arr[n];
        cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (canmakesum(arr, n, k)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}

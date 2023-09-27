//find sum of array using recursion
#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    } else {
        return arr[n - 1] + sumArray(arr, n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = sumArray(arr, n);
    cout <<result << endl;
    return 0;
}

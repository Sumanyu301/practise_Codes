#include <bits/stdc++.h>
using namespace std;

int largestPrimeFactor(int num) {
    int largestFactor = -1;

    while (num % 2 == 0) {
        largestFactor = 2;
        num = num / 2;
    }

    while (num % 2 == 0) {
        num = num / 2;
    }

    for (int i = 3; i <= sqrt(num); i = i + 2) {
        while (num % i == 0) {
            largestFactor = i;
            num = num / i;
        }
    }

    if (num > 2) {
        largestFactor = num;
    }

    return largestFactor;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        int largestFactor = largestPrimeFactor(num);
        int k = 0;
        while (num > 0 && largestFactor != 2) {
            k++;
            num -= largestFactor;
            if (num == 0 || largestFactor == 2) {
                break;
            } else {
                largestFactor = largestPrimeFactor(num);
            }
        }
        if (k % 2 == 0) {
            cout << "bob";
        } else {
            cout << "alice";
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int g;
//     cin>>g;
//     while(g--){
//     int a, b, sum=0;
//     cin >> a >> b;
//     int arr[a];
//     for (int i = 0; i < a; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < a - b + 1; i++) {
//         int brr[b];
//         int l=0;
//         for (int j = 0; j < b; j++) {
//             brr[j] = arr[i + j];
//         }

//         for (int j = 0; j < b; j++) {
//             l=l|brr[j];
//         }
//         if(l%2!=0)
//         sum++;
//        // cout << endl;
//     }
// cout<<sum<<endl;}
//     return 0;
// }

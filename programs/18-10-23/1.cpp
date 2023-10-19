#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    while (x--) {
        int n;
        cin >> n;
        int arr[n];
        
        int max = INT_MIN;
        int secondMax = INT_MIN;
        int countMax = 0;
        int countSecondMax = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > max) 
            {
                secondMax = max;
                max = arr[i];
                countSecondMax = countMax;
                countMax = 1;
            } else if (arr[i] == max) 
            {
                countMax++;
            } else if (arr[i] > secondMax && arr[i] < max) 
            {
                secondMax = arr[i];
                countSecondMax = 1;
            } else if (arr[i] == secondMax) 
            {
                countSecondMax++;
            }
        }
        cout<<max*countMax+secondMax*(n-countMax)<<endl;
    }
    return 0;
}

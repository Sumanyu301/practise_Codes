#include <iostream>
#include <vector>

using namespace std;
long long findNumberToMake2023(long long product) {
    for (long long i = 2023; i >= 1; i--) {
        if (2023 % i == 0 && 2023 / i == product) {
            return i;
        }
    }
    return -1;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        long long int b[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> b[i];
        }

        long long int product = 1;
        for (int i = 0; i < n; i++) 
        {
            product *= b[i];
        }

        int number = findNumberToMake2023(product);
        if (number != -1) 
        {
            cout<<"YES"<<endl;
            int x = k-1;
            cout<<number<<" ";
            for(int i=0;i<x;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

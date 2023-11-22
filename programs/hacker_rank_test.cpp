#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cin >> n;
    cin >> d;
    int arr[n], ans[n];
    int ind;
    for(int i = 0; i < n; i++) {
        ind = i - d;
        if(ind < 0) {
            ind = (n + ind);
        }
        cin >> arr[ind];   
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}                                                                                
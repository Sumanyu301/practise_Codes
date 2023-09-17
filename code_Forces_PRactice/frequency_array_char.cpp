#include <iostream>
using namespace std;

int main() {
    string arr;
    cin>>arr;

    char max = 'a'; 

    for (int i = 0; i < arr.length(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int frequency[max - 'a' + 1];

    
    for (int i = 0; i < max - 'a' + 1; i++) {
        frequency[i] = 0;
    }

    
    for (int i = 0; i < arr.length(); i++) {
        int id = arr[i] - 'a'; 
        frequency[id]++;
    }
    for (int i = 0; i < max - 'a' + 1; i++) {
        cout << frequency[i] << endl;
    }
}

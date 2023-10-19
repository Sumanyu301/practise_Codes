#include <bits/stdc++.h>
using namespace std;

struct s1 {
    int mat[3][3];

    s1 operator+(const s1& other) {
        s1 result;
        for (int i = 0; i < 3; i++) 
        {   
            for (int j = 0; j < 3; j++) 
            {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }
};

int main() {
    s1 mat1, mat2, result;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat1.mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat2.mat[i][j];
        }
    }


    result = mat1 + mat2;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result.mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

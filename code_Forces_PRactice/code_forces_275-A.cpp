#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int res[3][3];

    // Input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            res[i][j] = 0;
        }
    }

    // Processing
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 0 || arr[i][j] % 2 == 0) {
                
            } else {

                if (i == 0) {
                    if(res[i][j] ==1)
                    {
                        res[i][j] = 0;
                    }
                    else
                    {
                        res[i][j] = 1;
                    }
                    if (j == 0) {
                        if (res[i + 1][j] == 0) {
                            res[i + 1][j] = 1;
                        } else {
                            res[i + 1][j] = 0;
                        }
                        if (res[i][j + 1] == 1) {
                            res[i][j + 1] = 0;
                        } else {
                              res[i][j + 1] = 1;
                        }
                    } else if (j == 1) {
                        if (res[i + 1][j] == 0) {
                            res[i + 1][j] = 1;
                        } else {
                            res[i + 1][j] = 0;
                        }
                        if (res[i][j + 1] == 0) {
                            res[i][j + 1] = 1;
                        } else {
                            res[i][j + 1] = 1;
                        }
                        if (res[i][j - 1] == 0) {
                            res[i][j - 1] = 1;
                        } else {
                            res[i][j - 1] = 0;
                        }
                    } else {
                        if (res[i + 1][j] == 0) {
                            res[i + 1][j] = 1;
                        } else {
                            res[i + 1][j] = 0;
                        }
                        if (res[i][j - 1] == 0) {
                            res[i][j - 1] = 1;
                        } else {
                            res[i][j - 1] = 0;
                        }
                    }
                } else if (i == 1) {
                    if(res[i][j] ==1)
                    {
                        res[i][j] = 0;
                    }
                    else
                    {
                        res[i][j] = 1;
                    }
                    if (j == 0) {
                        if (res[i + 1][j] == 0) {
                            res[i + 1][j] = 1;
                        } else {
                            res[i + 1][j] = 0;
                        }
                        if (res[i][j + 1] == 0) {
                            res[i][j + 1] = 1;
                        } else {
                            res[i][j + 1] = 0;
                        }
                        if (res[i - 1][j] == 0) {
                            res[i - 1][j] = 1;
                        } else {
                            res[i - 1][j] = 0;
                        }
                    } else if (j == 1) {
                        if (res[i - 1][j] == 0) {
                            res[i - 1][j] = 1;
                        } else {
                            res[i - 1][j] = 0;
                        }
                        if (res[i + 1][j] == 0) {
                            res[i + 1][j] = 1;
                        } else {
                            res[i + 1][j] = 0;
                        }
                        if (res[i][j + 1] == 0) {
                            res[i][j + 1] = 1;
                        } else {
                            res[i][j + 1] = 0;
                        }
                        if (res[i][j - 1] == 0) {
                            res[i][j - 1] = 1;
                        } else {
                            res[i][j - 1] = 0;
                        }
                    } else {
                        
                        if (res[i -1][j] == 0) {
                            res[i - 1][j] = 1;
                        } else {
                            res[i - 1][j] = 0;
                        }
                        if (res[i + 1][j] == 0) {
                            res[i + 1][j] = 1;
                        } else {
                            res[i + 1][j] = 0;
                        }
                        if (res[i][j - 1] == 0) {
                            res[i][j - 1] = 1;
                        } else {
                            res[i][j - 1] = 0;
                        }
                    }
                } else {
                    if(res[i][j] ==1)
                    {
                        res[i][j] = 0;
                    }
                    else
                    {
                        res[i][j] = 1;
                    }
                    if (j == 0) {
                         if (res[i -1][j] == 0) {
                            res[i - 1][j] = 1;
                        } else {
                            res[i - 1][j] = 0;
                        }
                        if (res[i][j + 1] == 0) {
                            res[i][j + 1] = 1;
                        } else {
                            res[i][j + 1] = 0;
                        }
                    } else if (j == 1) {
                         if (res[i -1][j] == 0) {
                            res[i - 1][j] = 1;
                        } else {
                            res[i - 1][j] = 0;
                        }
                        if (res[i][j + 1] == 0) {
                            res[i][j + 1] = 1;
                        } else {
                            res[i][j + 1] = 0;
                        }
                        if (res[i][j - 1] == 0) {
                            res[i][j - 1] = 1;
                        } else {
                            res[i][j - 1] = 0;
                        }
                    } else {
                         if (res[i -1][j] == 0) {
                            res[i - 1][j] = 1;
                        } else {
                            res[i - 1][j] = 0;
                        }
                        if (res[i][j - 1] == 0) {
                            res[i][j - 1] = 1;
                        } else {
                            res[i][j - 1] = 0;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(res[i][j]==0)
            {
            res[i][j]=1;
            cout<<res[i][j];
            }
            else
            {
            res[i][j]=0;
            cout<<res[i][j]; 
            }
        }
        cout << endl;
    }

    return 0;
}

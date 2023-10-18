#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int convert(string str, int n = 0) {
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
        temp = temp * 10 + (str[i] - '0');
    }
    n = temp;
    return n;
}

float convert(string str, float n = 0.0) {
    float temp1 = 0.0;
    float temp2 = 0.0;
    int i;
    bool isFractional = false;
    float decimalPlace = 10.0; // To keep track of the current decimal place value

    for (i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            if (!isFractional) {
                temp1 = temp1 * 10 + (str[i] - '0');
            } else {
                temp2 += (str[i] - '0') / decimalPlace;
                decimalPlace *= 10.0;
            }
        } else if (str[i] == '.') {
            isFractional = true;
        }
    }

    return (temp1 + temp2);
}

int main() {
    int a;
    float b, c = 0;
    a = convert("123", 0);
    b = convert("123.123", c);
    cout << a << "  " << b;
    return 0;
}

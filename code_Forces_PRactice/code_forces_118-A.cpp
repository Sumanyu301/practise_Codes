#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cin >> str1;

    string str2 = "";
    for (int i = 0; i < str1.length(); i++) {
        char ch = tolower(str1[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch!='y') {
            str2 += '.';
            str2 += ch;
        }
    }

    cout << str2 << endl;
    return 0;
}

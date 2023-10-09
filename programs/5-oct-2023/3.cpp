#include <iostream>
#include <string>
using namespace std;

class bank_account
{
private:
    int acc_no;
    string password = "qwerty";
    string name;
    int  balance = 0;

public:
    bool check_pass(string pass)
    {
        return pass == password;
    }

    void depo(int d)
    {
        balance += d;
    }

    void draw(int d)
    {
        balance -= d;
    }

    int get_balance()
    {
        return balance;
    }
};

int main()
{
    bank_account b1;
    string str;
    cout << "gib password ";
    cin >> str;
    if (b1.check_pass(str))
    {

        b1.depo(1500);
        cout << b1.get_balance() << endl;

        b1.draw(1500);
        cout << b1.get_balance() << endl;
    }
    else
    {
        cout << "wrogn password" << endl;
    }

    return 0;
}

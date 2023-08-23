#include <bits/stdc++.h>
using namespace std;

class base
{
    int roll;
    char name[50];

public:
    void input_p(int roll, const char name[]);
    void display_p();
};

void base::input_p(int roll, const char name[])
{
    this->roll = roll;
    strcpy(this->name, name);
}

void base::display_p()
{
    cout << roll << "\t" << name;
}

class derived : private base
{
    int fee;
    char last[50];

public:
    void input_s(int roll, const char name[], int fee, const char last[]);
    void display_s();
};

void derived::input_s(int roll, const char name[], int fee, const char last[])
{
    input_p(roll, name); 
    this->fee = fee;
    strcpy(this->last, last);
}

void derived::display_s()
{
    display_p(); 
    cout << "\t" << fee << "\t" << last;
}

int main()
{
    derived d;
    d.input_s(29, "asdf", 32, "qwerty");
    d.display_s();
    return 0;
}

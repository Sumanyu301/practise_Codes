// with attributes like emp_id name and salary implement meathods to give a salary raise and display employee details note salary would private criteria for raise are if salary of employee is 20k the give it 20% if less than 30k 15% raise if greater 10 %
#include <bits/stdc++.h>
using namespace std;
class employee
{
    int salary;
    string name;
    int id;

public:
    void get_details(int a, string str, int pid)
    {
        salary = a;
        name = str;
        id = pid;
    }
    int raise(int salary)
    {
        if (salary < 20000)
        {
            salary += (float(salary) / 100) * 20;
        }
        else if (salary < 30000)
        {
            salary += (float(salary) / 100) * 15;
        }
        else
        {
            salary += (float(salary) / 100) * 15;
        }
    }

    int show()
    {
        return salary;
    }
};
int main()
{
    employee e1;
    e1.get_details(20000, "asdfgh", 1);
    int s;
    s = e1.show();
    cout << s;
    return 0;
}

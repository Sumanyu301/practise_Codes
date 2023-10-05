#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
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

    void raise()
    {
        if (salary < 20000)
        {
            salary += (0.20 * salary); // 20% raise
        }
        else if (salary < 30000)
        {
            salary += (0.15 * salary); // 15% raise
        }
        else
        {
            salary += (0.10 * salary); // 10% raise
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
    cout << "Original Salary: " << e1.show() << endl;

    e1.raise();
    cout << "Salary After Raise: " << e1.show() << endl;

    return 0;
}

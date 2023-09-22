#include<iostream>
using namespace std;
struct a
{
    char name[20];
    int age;
    float sal;
};
a e1 ={"gfds",21,34567.567};
a e2 ={"bfds",31,44567.567};
a &fun();
int main()
{
    fun()=e2;
    cout<<e1.name<<endl<<e1.age<<endl<<e1.sal<<endl;
    return 0;
}
a &fun()
{
    cout<<e1.name<<endl<<e1.age<<endl<<e1.sal<<endl;
    return e1;
}
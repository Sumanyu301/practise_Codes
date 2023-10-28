//add task
//mark tast
//display
//remove task
//Exit
#include<bits/stdc++.h>
using namespace std;
class task
{
    int id;
    string name;
    bool completed;
    public:
    void setname(string a)
    {
        name=a;
    }
    void setid(int id1)
    {
        id=id1;
    }
        void setcomplete(bool a)
    {
        completed=a;
    }
    void setname(string a)
    {
        name=a;
    }
    void setid(int id1)
    {
        id=id1;
    }
        void setcomplete(bool a)
    {
        completed=a;
    }
    int getId() 
    {
        return id;
    }

    string getName() 
    {
        return name;
    }

    bool isCompleted() 
    {
        return completed;
    }

};
class todolist
{
    task arr[100];
    int index;
    public:
     void addtask(int taskid, string taskname) {
        if (index < 100) 
        {
            setname(taskname);
            setid(taskid);
        }
        else
        {
            cout<<"no more space left";
        }
    }
    void marktask(bool flag)
    {
        setcomplete(flag);
    }
    void display()
    {

    }
};
int main()
{

}
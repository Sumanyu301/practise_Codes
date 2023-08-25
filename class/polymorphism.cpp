#include<iostream>
using namespace std;
    
class Car
{
    public:
	virtual void start()
	{
		cout<<"Car Started"<<endl;
	}
	
};
    
class Innova:public Car
{
    public:
	void start()
	{
		cout<<"Innova Started"<<endl;
	}
	
};
    
class Swift:public Car
{
    public:
	void start()
    {
		cout<<"Swift Started"<<endl;
	}
	
};
    
int main()
{
	// Car *ptr=new Innova();
	// ptr->start();
	// ptr=new Swift();
	// ptr->start();
    
    Car *ptr;
    Innova I;
    Swift S;
    ptr=&I;
    ptr->start();
	ptr=&S; 
    ptr->start();    
}
    
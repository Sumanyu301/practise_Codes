#include<iostream>
using namespace std;
int main()
{
    int a=1025;
    int *p;
    p=&a;
    cout<<"size of integer in bytes = "<<sizeof(int)<<endl;
    cout<<" Address = "<<p<<"value = "<<*p<<endl;
    cout<<" Address = "<<(p+1)<<"value = "<<*(p+1)<<endl;

    char *p0;
    p0=(char*)p;
    cout<<"size of integer in bytes = "<<sizeof(char)<<endl;
    cout<<" Address = "<<int(p0)<<"value = "<<int(*p0)<<endl;
    cout<<" Address = "<<int(p0+1)<<"value = "<<int(*(p0+1))<<endl;
    return 0;
}
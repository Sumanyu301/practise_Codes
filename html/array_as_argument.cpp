#include <iostream>
using namespace std;
int sumofelements(int a[],int size)//int a[]=*a same shit
{
    int i,sum=0;
    for (i=0;i<size;i++)
    {
        sum+= *(a+i);
    }
    return sum;
}


int main()
{
    int a[] ={1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    int sum = sumofelements(a,size);
    cout<<"sum = "<<sum;
}
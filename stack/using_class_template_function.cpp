#include<bits/stdc++.h>
#define max 101
using namespace std;
template <class t>
class stack
{
    public:
    t arr[max];
    t head = -1;
    t pop();
};
t stack::pop()
{
    if(head==max)
    {
        throw("overflow");
    }
    
} 
int main()
{   

}
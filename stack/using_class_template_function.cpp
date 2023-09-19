#include <bits/stdc++.h>
#define max  101
using namespace std;
template <class t>
class stack1
{
public:
    t arr[max];
    int head = -1;
    void pop();
    void push(t value);
};
template <class u>
void stack1<u>::pop()//class konsi type ki hai template
{
    if (head == -1)
    {
        throw(1);
    }
    head--;
}
template <class x>
void stack1<x>::push(x value)
{
    if (head == max)
    {
        throw(2);
    }
    else{
    head++;
    arr[head] = value;
    }
}
int main()

{
    stack1<int> s1; // typename dena hi padega kyunki template type class banayi hai
    try
    {

        for (int i = 0; i < 100; i++)
        {
            s1.push(i);
        }
    }
    catch (int a)
    {
        if (a == 1)
        {
            cout << "underflow_error";
            exit(1);
        }
        if (a == 2)
        {
            cout << "overflow_error";
            exit(1);
        }
    }
}
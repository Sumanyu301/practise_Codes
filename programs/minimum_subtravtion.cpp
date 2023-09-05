// Description
// You are given an integer n.
// • On each step, you may subtract one of the digits from the number.
// How many steps are required to make the number equal to 0?
// Input
// Input Format
// The first line contains the number of testcases, T
// For each testcase:
// • The first and only contains the number N
// Constraints
// 1<=T<=5
// 1<=N<=50
// Output
// For each testcase, print the minimum number of steps.


// 1.            7
// 35



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    int count=0;
    while(t--)
    {
        while(n>0)
        {
            if(n<=9)
            {
                n=0;
                count++;
            }
            else
            {
                if(n%10>n/10)
                {
                    n= n - (n%10);
                    count++;
                }
                else
                {
                    n = n - (n/10);
                    count++;
                }
            }
        }
        cout<<count;
    }
}
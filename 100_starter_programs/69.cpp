// • You are given two numbers, stored in variables with the names num1 and num2
// • Print the output of the following operation
// num1> num2, this prints true if num1 is greater than num2, else it prints false
// • After this operation is performed, another number, stored in a variable with name num3 is added to num1. After this, print the result of the following operation again
// num1> num2, this prints true if num1 is greater than num2, else it prints false
// Input
// • The first and the only line of input contains the values stored in num1, num2 and num3
// Output
// Print the result of the operations given in the problem statement
// Sample Input 1
// 4 8 5
// Sample Output 1
// false
// true
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2,n3;
    cin >> n1>>n2>>n3;
    if(n1>n2)
    {
        cout<<"yes"<<" ";
    }
    else
    cout<<"No"<<" ";
    n1+=n3;
    if(n1>n2)
    {
        cout<<"yes"<<" ";
    }
    else
    cout<<"No"<<" ";
    return 0;
}
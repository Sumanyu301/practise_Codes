// Description
// You are given six numbers, stored in the variables with the following names
// one,
// two,
// three,
// four,
// five, six
// Find the value of sum1 and sum2, such that
// sum1 = one + two
// sum2 = four + five
// If both the following two conditions are true, print Yes, else print No
// sum1> three
// sum2 > six
// Input
// First and the only line of input contains, the values stored in one, two, three, four, five, six
// Output
// Print Yes, if both the conditions given in the problem statement are true, else print No
// Sample Input 1
// 1 2 3 4 5 6
// Sample Output 1
// No
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int one, two, three, four, five, six;
    cin >> one >> two >> three >> four >> five >> six;
    int sum1 = one + two;
    int sum2 = four + five;
    if (sum1 > three && sum2 > six)
    {
        cout << "yes";
    }
    else
        cout << "no";
    return 0;
}

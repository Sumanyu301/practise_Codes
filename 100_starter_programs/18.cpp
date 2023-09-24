// Description
// • You are given five numbers, stored in variables with the following names
// one, two, three, four, five, six
// The value stored in the variable two, five, six has been doubled, such that if initially the value was 3, it has become 6 The value stored in the variable three, four has been increased three times, such that if initially it was 3, it has become 9
// The value stored in the variable one has not been changed.
// Find the sum of the updated values stored in one, two, three, four, five, six
// Input
// The first and the only line of input contains the values stored in the variable one, two, three, four, five, six
// Output
// Find the sum of the updated values stored in one, two, three, four, five, six
// Sample Input 1
// 1 2 3 4 5 6
// Sample Output 1
// 48
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int one, two, three, four, five, six;
    cin >> one >> two >> three >> four >> five >> six;
    two *= 2;
    five *= 2;
    six *= 2;
    three *= 3;
    four *= 3;
    int sum = one + two + three + four + five + six;
    cout << sum;
    return 0;
}
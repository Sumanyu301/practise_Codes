// Map Characters Again
// Description
// • You are given a number stored in variable with the name N
// • You have to map all the lowercase English characters, to a number starting from the value stored in N, and incrementing it by 1 at every step
// • For example, consider the value stored in N = 30, then the required output will be
// a-30
// b-31
// c-32
// d-33
// e-34
// f-35
// g-36
// h-37
// i-38
// j-39
// k-40
// 1-41
// m-42
// n-43
// 0-44
// p-45
// q-46
// r-47
// S-48
// t-49
// u-50
// v-51
// w-52
// x-53
// y-54
// z-55

// Input
// • The first and the only line of the input contains the value stored in N
// Output
// • Print the output as shown in the problem statement

// Sample Input 1
// 30

// Sample Output 1
// a-30
// b-31
// C-32
// d-33
// e-34
// f-35
// g-36
// h-37
// 1-38
// j-39
// k-40
// 1-41
// m-42
// n-43
// 0-44
// p-45
// q-46
// r-47
// 5-48
// t-49
// u-50
// V-51
// W-52
// X-53
// y-54
// z-55
#include <iostream>
using namespace std;
void checkstr(int n)
{
    char c='a';
    for (int i = 0; i < 26; i++)
    {
        cout<<c<<'-'<<i+n<<endl;
        c++;
    }
   
}
int main()
{
    int n;
    cin >> n;
    checkstr(n);
}
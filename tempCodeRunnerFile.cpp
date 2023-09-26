#include <iostream>
using namespace std;

// Driver Code
int main()
{
	char b[10] = "abcdefghi";
	const char* c = &b[0];
	cout << *c << endl;
}
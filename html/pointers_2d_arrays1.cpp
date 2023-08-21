
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 3, 5, 6, 7, 9 };
	int *p = arr;
	int (*ptr)[5] = &arr;
	
	cout << "p = "<< p <<", ptr = " << ptr << endl;
	cout << "*p = "<< *p <<", *ptr = " << *ptr << endl;
	
	cout << "sizeof(p) = "<< sizeof(p) <<
			", sizeof(*p) = " << sizeof(*p) << endl;
	cout << "sizeof(ptr) = "<< sizeof(ptr) <<
		", sizeof(*ptr) = " << sizeof(*ptr) << endl;
	return 0;
}


// C++ program to illustrate difference
// between behaviour of integer pointer
// and character pointer
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Integer array
	int a[] = { 1, 2, 3 };

	// Character array
	char ch[] = "abc";

	// Print the value of a and b
	cout << a << endl;

	cout << ch << endl;
	return 0;
}

// C++ program to illustrate behaviour
// of character pointer pointing to
// character array
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Character array b
	char b[] = "abc";

	// Pointer to character array
	char* c = &b[0];

	// Print the value of c
	cout << c << endl;
}
// C++ program to illustrate difference
// between behaviour of character and
// character pointer
#include <iostream>
using namespace std;

// Drive Code
int main()
{
	char c = '$';
	char* p = &c;

	cout << c << endl;
	cout << p << endl;
}
// C++ program to illustrate
// printing of character array
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Character array
	char c[] = "abc";

	// print value of c, c[0] and *c
	cout << c << endl;
	cout << c[0] << endl;
	cout << *c << endl;
}
// C++ program to illustrate behaviour
// of typecasted character pointer
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	char c[] = { "abc" };
	char* b = c;
	cout << (void*)b;
}


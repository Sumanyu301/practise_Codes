// C++ program to illustrate friend class
#include <iostream>
using namespace std;

// Class A
class A {
private:
	// Private member of Class A
	int a;

public:
	// Constructor to initialise private
	// member of class A
	A() { a = 0; }

	// Make friend class B using a friend
	// keyword
	friend class B;
};

// Class B
class B {
private:
	// Private members of class B
	int b;

public:
	// Members function of class B
	    void showA(A& x)//it takes a reference to an object of class A as a parameter. This means you can pass an object of class A to this function and operate on it.
	{
		// Since B is friend of A,
		// it can access private members
		// of class A
		cout << "Accessed Private "
			<< "Member of class A\n";
		cout << "A::a = " << x.a;
	}
};

int main()
{
	// Object of class A
	A a;

	// Object of class B
	B b;

	// Member function of friend class B
	b.showA(a);
	return 0;
}

#include <iostream>
using namespace std;

class rectangle {
    int length;
    int breadth;

public:
    int area() {
        return (length * breadth);
    }

    int perimeter() {
        return (2 * (length + breadth));
    }

    void setlength(int l) {
        if (l >= 0) {
            length = l;
        }
    }

    void setbreadth(int b) {
        if (b >= 0) {
            breadth = b;
        }
    }

    rectangle() {
        length = 0;
        breadth = 0;
    }

    rectangle(int l, int b) {
        setlength(l);
        setbreadth(b);
    }

    rectangle(const rectangle &rect) {
        length = rect.length;
        breadth = rect.breadth;
    }
};

int main() {
    rectangle r3;
    cout << "Area: " << r3.area() << endl;
    cout << "Perimeter: " << r3.perimeter() << endl;
    rectangle r1(10, 5);
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    rectangle r2(r1);
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;
    
}

#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};
int main()
{
    rectangle r1,r2;
    rectangle *p,*p1;
    p = &r1;
    p1=&r2;
    r1.length = 10;
    r1.breadth = 10;
    // p->length = 10;
    // p->breadth = 10;
    p1->breadth=20;
    p1->length=20;
    cout << p->area()<<endl;
    cout << p1->area();
}
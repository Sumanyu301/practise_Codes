#include<stdio.h>

struct Point{
	int x,y,z,a;
};

int main()
{
	 struct Point p1 = {p1.y = 0, p1.z = 1, p1.a=1,p1.x = 2};
	printf("%d %d %d %d", p1.x, p1.y, p1.z,p1.a);
	return 0;
}
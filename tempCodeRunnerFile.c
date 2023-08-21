#include <stdio.h>
struct student
{
    char *name;
    int roll;
}r1;

int main()
{
    printf("%lu",sizeof(r1));
    return 0;
}

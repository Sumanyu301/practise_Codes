#include<stdio.h>
struct student
{
    int roll;
    char name;
};
void fun(struct student x)
{
    scanf("%d",&x);
}
int main()
{
    struct student r1;
    struct student *ptr;
    ptr=&r1;
    scanf("%d",&ptr->roll);
    printf("%d",r1.roll);
}
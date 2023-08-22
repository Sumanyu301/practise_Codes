#include<stdio.h>
main()
{
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    printf("1 for checking equilateral\n2 for checking isoceles\n3 for checking right angle");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        if(a==b&&b==c&&a==c)
        {
            printf("equi");
        }
        else
        {
            printf("false");
        }
        case 2:
        if(a==b||b==c||a==c)
        {
            printf("iso");
        }
        else
        {
            printf("False iso");
        }
        case 3:
        if(a>b && a>c)
        {
            if(a*a==b*b+c*c)
            {
                printf("right");
            }
            else
            {
                printf("false right");
            }
        }
        else if(b>a && b>c)
        {
            if(b*b == a*a+c*c)
            {
                printf("right");
            }
            else
            {
                printf("false right");
            }
        }
        else if(c>a && c>b)
        {
            if(c*c==a*a+b*b)
            {
                printf("right");
            }
            else
            {
                printf("not right");
            }
        }
        else
        {
            printf("not right");
        }
    }
}
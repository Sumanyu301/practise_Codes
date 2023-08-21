#include<stdio.h>
int checkprime(int p)
{
    for(int i=2 ; i<p ; i++)
    {
        if (p%i==0)
        {
            printf("non prime");
            break;
        }
        else if(i==p-1)
        {
            printf("prime");
        }
    }
    if (p==2)
    {
        printf("prime");
    }
    else if(p<=1)
    {
        printf("not prime");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    checkprime(n);
    return 0;
}
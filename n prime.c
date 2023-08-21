#include<stdio.h>
int checkprime(int p)
{
    for(int i=2 ; i<p ; i++)
    {
        if (p%i==0)
        {
            break;
        }
        else if(i==p-1)
        {
            printf("%d\n",p);
        }
    }
    if (p==2)
    {
        printf("%d",p);
    }
    else if(p<=1)
    {
        printf("not prime");
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        checkprime(i);
    }
    return 0;
}
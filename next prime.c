#include<stdio.h>
int checkprime(int p)
{
    for(int i=2 ; i<p ; i++)
    {
        if (p%i==0)
        {
            return (1);
            break;
        }
        else if(i==p-1)
        {
            return 0;
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
int nextprime(int v)
{
    int x=1,a,t=v+1;
    while(x=1)
    {
        a = checkprime(t);
        if(a==0)
        {
            return(t);
            break;
        }
        else
        {
        }
        t++;
    } 
}



int main()
{
    int n,a;
    scanf("%d",&n);
    a = nextprime(n);
    printf("%d",a);
    return 0;
}



#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
    return 1;
    return(fib(n-1)+fib(n-2));
}

int main()
{
    int n,s;
    scanf("%d",&n);
    for(s=1;s<=n;s++)
    {
        printf("%d\n",fib(s));       
    }
    return 0;
}
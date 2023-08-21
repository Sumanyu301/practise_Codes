#include<stdio.h>
int fac(int p)
{
    if(p==1)
    return 1;
    return(p*fac(p-1));
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}
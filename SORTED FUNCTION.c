#include <stdio.h>

int* small(int s[],int n)
{
    int i;
    int j;
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i]<s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    return s;   
}

int main()
{
    int n,i,j;
    int *y;
    scanf("%d",&n);
    int s[n] ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    y = small(s,n);
    for(j=0;j<n;j++)
    {
        printf("%d ",*(y+j));
    }
    return 0;
}

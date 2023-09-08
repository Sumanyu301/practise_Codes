#include<stdio.h>
#include<strings.h> 
#include<stdlib.h>
# define max_no 100
int arr[max_no];
int head = -1;
void push(char value)
{
    if(head == max_no-1)
    {
        printf("overflow");
        exit(1);
    }
    else
    {
        head++;
        arr[head]=value;
    }
}
char pop()
{
    if(head==-1)
    {
        printf("underflow");
        exit(1);
    }
    else
    {
        int a;
        a = arr[head];
        head--;
        return(a);
    }
}
int peak()
{
   if(head==-1)
    {
        printf("underflow");
        exit(1);
    }
    else
    {
        int a;
        a = arr[head];
        return(a);
    } 
}
int main()
{
    push(3);
    push(3);
    push(4);
    printf("%d\n",peak());
    while(head>=0)
    {
    printf("%d\n",pop());
    }
}
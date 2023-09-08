#include <stdio.h>
#include <stdlib.h>

struct stack
{
    char arr[100];
    int head;
};
void initialise(struct stack *ptr)
{
 (*ptr).head = -1;
}
void push(struct stack *ptr , char value)
{
    if((*ptr).head==sizeof((*ptr).arr)/sizeof((*ptr).arr[0]))
    {
        printf("overflow");
        exit(1);
    }
    else
    {
        (*ptr).head++;
        (*ptr).arr[(*ptr).head] = value;
    }
}
char pop(struct stack *ptr)
{
    if((*ptr).head == -1)
    {
        printf("underflow");
        exit(1);
    }
    else
    {
        int a;
        a = (*ptr).arr[(*ptr).head];
        (*ptr).head--;
        return(a); 
    }
}
char peek(struct stack *ptr)
{
    if((*ptr).head == -1)
    {
        printf("underflow");
        exit(1);
    }
    else
    {
        return((*ptr).arr[(*ptr).head]);
    }
}
int main()
{
    struct stack s1;
    struct stack *ptr;
    ptr=&s1;
    initialise(&s1);
    char srr[10];
    gets(srr);
    int i;
    for(i=0;i<sizeof(srr)/sizeof(srr[0]);i++)
    {
        push(&s1,srr[i]);
    }
    while((*ptr).head >= 0)
    {
        printf("%c",pop(&s1));
    }
}
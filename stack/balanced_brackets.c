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
        char a;
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
    char srr[100];
    gets(srr);
    int i;
    for(int i=0;srr[i]!='\0';i++)
    {
        if(srr[i]=='['||srr[i]=='('||srr[i]=='{')
        {
            push(&s1,srr[i]);
        }
        else if(srr[i]==']'||srr[i]==')'||srr[i]=='}')
        {
            if(srr[i]==']'&&pop(&s1)=='[')
            {
                continue;
            }
            else if(srr[i]==')'&&pop(&s1)=='(')
            {
                continue;
            }
            else if (srr[i]=='}'&&pop(&s1)=='{')
            {
                continue;
            }
            else
            {
                printf("not balanced");
                return 1;
            }
        }
    }
    if(s1.head==-1)
    {
        printf("balanced");
    }
    else
    {
        printf("NO");
    }
}
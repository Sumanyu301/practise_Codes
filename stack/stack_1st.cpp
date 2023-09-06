    #include<stdio.h>
    #include<stdlib.h>
    struct stack
    {
        char arr[100];
        int head;
    };
    void initialise(struct stack *ptr)
    {
        (*ptr).head = 0;
    }
    void push(struct stack *ptr,char value)
    {
        if((*ptr).head==sizeof((*ptr).arr)/sizeof((*ptr).arr[0]))
        {
            printf("overflow");
            exit(1);
        }
        else
        {
            (*ptr).arr[(*ptr).head]=value;
            (*ptr).head+=1;
        }
    }
    char pop(struct stack *ptr)
{
    char v;
    if((*ptr).head==0)
    {
        printf("Underflow");
        exit(1);
    }
    else
    {
        v = (*ptr).arr[(*ptr).head-1];
        (*ptr).head-=1;
        return(v);
    }
}

    char peek(struct stack * ptr)
    {
        if((*ptr).head==0)
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
        int i;
        char c;
        char arr[] = {'a','b','c','d','e'};
        initialise(&s1);
        for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            push(&s1,arr[i]);
        }
        for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            c = pop(&s1);
            printf("%c ",c);
        }
        printf("\n");
        peek(&s1);
    }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[100];
int head = -1;
bool isopertr(char value)
{
    if(value=='+'||
    value=='-'||
    value=='*'||
    value=='/'||
    value=='^'||)
    return TRUE;
    else
    return FALSE;
}
int presidence(char value)
{
    if(value == '+' || value = '-')
    {
        return(1);
    }
    else if(value == '*' || value == '/')
    {
        return(2);
    }
    else
    {
        if(value=='^')
        {
            return(3);
        }
    }
}
int more_pre(char value)
{
    if(value ==stack[head]=='^')
    {
        return(0);
    }
    if(presidence(value)>presidence(stack[head]))
    {
        return(1);
    }
    else{
        return(0);
    }
}
char *postfix(char *infix)
int main()
{

}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define max 100

int stack[max];
int head = -1;

int isopertr(char value)
{
    if (value == '*' ||
        value == '+' ||
        value == '-' ||
        value == '/' ||
        value == '^')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int value)
{
    if (head == max - 1)
    {
        perror("Overflow");
        exit(1);
    }
    else
    {
        head++;
        stack[head] = value;
    }
}

int pop()
{
    if (head == -1)
    {
        perror("Underflow");
        exit(1);
    }
    else
    {
        int a = stack[head];
        head--;
        return a;
    }
}

int result(char operator, int var1, int var2)
{
    if (operator == '*')
    {
        return var1 * var2;
    }
    else if (operator == '+')
    {
        return var1 + var2;
    }
    else if (operator == '-')
    {
        return var1 - var2;
    }
    else if (operator == '/')
    {
        return var1 / var2;
    }
    else if(operator == '^')
    {
        return(pow(var1,var2));
    }
    else
    {
        perror("Invalid operator");
        exit(1);
    }
}

int main()
{
    char input[max];
    fgets(input, sizeof(input), stdin);
    char *token = strtok(input, " \t\n");
    
    while (token != NULL)
    {
        if (isopertr(token[0]))
        {
            int var2 = pop();
            int var1 = pop();
            push(result(token[0], var1, var2));
        }
        else
        {
            int num = atoi(token);
            push(num);
        }
        token = strtok(NULL, " \t\n");
    }
    
    printf("Result: %d\n", stack[head]);
    return 0;
}

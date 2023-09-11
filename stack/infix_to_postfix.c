#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define max 100
char stack[max];
int head = -1;
int isopertr(char value)
{
    if (value == '+' ||
        value == '-' ||
        value == '*' ||
        value == '/' ||
        value == '^')
        return 1;
    else
        return 0;
}
int is_char(char value)
{
    if ((value >= 'a' && value <= 'z') || (value >= 'A' && value <= 'Z'))
        return 1;
    else
        return 0;
}
void push(char value)
{
    if (head == max - 1)
    {
        printf("overflow");
        exit(1);
    }
    else
    {
        head++;
        stack[head] = value;
    }
}
int presidence(char value)
{
    if (value == '+' || value == '-')
    {
        return (1);
    }
    else if (value == '*' || value == '/')
    {
        return (2);
    }
    else
    {
        if (value == '^')
        {
            return (3);
        }
    }
}
int more_pre(char value)
{
    if (value == stack[head] == '^')
    {
        return (0);
    }
    if (presidence(value) > presidence(stack[head]))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
int main()
{
    char str[max];
    fgets(str, sizeof(str), stdin);
    char result[max];
    int point = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isopertr(str[i]))
        {
            if (more_pre(str[i]))
            {
                result[point] = stack[head];
                point++;
                head--;
                push(str[i]);
            }
            else
            {
                push(str[i]);
            }
        }
        else if (is_char(str[i]))
        {
            result[point] = str[i];
            point++;
        }
        while (head > -1)
        {
            result[point] = str[i];
            point++;
        }
    }
    // result[point + 1] = '\0';
    for (int j = 0; j < point; j++)
    {
        printf("%c", result[j]);
    }
}


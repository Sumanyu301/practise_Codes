#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    char s[] = "abc hello this is a file";
    FILE *fp;
    fp = fopen("f1.txt", "w");
    if (fp == NULL)
    {
        printf("file didnt open");
        exit(1);
    }
    for (i = 0; i < strlen(s); i++)
    {
        fputc(s[i], fp);
    }
    return 0;
}
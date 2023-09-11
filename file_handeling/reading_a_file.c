#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("f1.txt","r");
    if (fp == NULL)
    {
        printf("the file didnt open");
        exit(1);
    }
    ch = fgetc(fp);
    while (!feof(fp))
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char str[10];
//     FILE *fp;
//     fp = fopen("f1.txt", "r");
//     if (fp == NULL)
//     {
//         printf("the file didnt open");
//         exit(1);
//     }
//     while (fgets(str, 9, fp) != NULL)
//     {
//         printf("%s", str);
//     }
//     fclose(fp);
// }
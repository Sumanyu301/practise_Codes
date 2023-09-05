#include <stdio.h>
int main()
{
    FILE *fp;
    int a, b, c;
    fp = fopen("f1.txt", "r");
    fscanf(fp, "%d %d %d", &a, &b, &c);
    printf("the sum of %d and %d is %d", a, b, c);
    fclose(fp);
}
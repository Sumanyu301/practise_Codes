#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("f1.txt", "w");
    printf("enter two numbers");
    int a,b;
    scanf("%d %d",&a,&b);
    fprintf(fp,"the sum of %d and %d is %d",a,b,a+b);
    fclose(fp);
}
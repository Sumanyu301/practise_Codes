#include <stdio.h>
struct stu
{
    int bookid;
    char bookname[20];
    float price;
};
int main()
{
    struct stu s1;
    FILE *fp;
    fp = fopen("myfile.dat", "ab");
    printf("give your bookid bookname and price");
    scanf("%d", &s1.bookid);
    fflush(stdin);
    gets(s1.bookname);
    scanf("%f", &s1.price);
    fwrite(&s1, sizeof(s1), 1, fp);//adress of the variable whose data you wanna store ,sizeof(),no. of records to write,file pointer
    fclose(fp);
}
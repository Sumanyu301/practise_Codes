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
    fp = fopen("myfile.dat", "rb");
    while (fread(&s1,sizeof(s1),1,fp)>0)
    {
        printf("%d %s %f \n",s1.bookid,s1.bookname,s1.price);
    }
    
    fclose(fp);
}
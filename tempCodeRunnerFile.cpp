#include<stdio.h>
int main()
{
    const char filename[] = "example.txt";
    FILE *file_ptr;
    file_ptr = fopen(filename,"w");
    if(file_ptr == NULL)
    {
        printf("Failed to open.\n");
        return 1;
    }
    fclose(file_ptr);
    return 0;
}
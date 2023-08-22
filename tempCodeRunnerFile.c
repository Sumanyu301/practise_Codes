#include <stdio.h>
struct pad
{
    int dd:8;
    int mm:4;
    int yy:3;

};

int main()
{   
    struct pad A;
    printf("Size of A is %d.\n", sizeof(A));   
    return 0;
}
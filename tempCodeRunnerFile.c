#include <stdio.h>
# define pi 3.14

int main()
{
inline float area(float *r ,float *h,float *are , float *volume)
{
    *are = 2*pi*(*r)*(*r+*h);
    *volume = pi*(*r)*(*r)*(*h);
}
    float a,b,are,volume;
    scanf("%f %f",&a,&b);
    area(&a,&b,&are,&volume);
    printf("%f \n %f",are,volume);
    return 0;
}
#include <stdio.h>

int main() {

    //Pointer to constant
    int const a = 34;
    int *ptr;
    ptr = &a;
    *ptr = 23; //This will be error

    //Constant pointer
    int b = 23;
    int const *ptr2 = &b;
    *ptr2 = 2;
    ptr2 = &a; //Error

    //Constant pointer to constant
    const int c = 25;
    const int *ptr3 = &c;
    //Noting can change.


}
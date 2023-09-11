#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define max 100

int arr[max];
int head = -1;

int main()
{
    char str[max];
    fgets(str, sizeof(str), stdin);
    char crr[max];
    int x = 0;
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        crr[x] = str[i];
        x++;
    }
    crr[x] = '\0';
    

    return 0;
}

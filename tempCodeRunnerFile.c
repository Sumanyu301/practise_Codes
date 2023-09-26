#include <stdio.h>

int main() {
    char *p = "hello";
    char *q = p;

    printf("%s\n%s\n", p, q);
    q = "Good Bye";
    printf("%s\n%s\n", p, q);

    return 0;
}

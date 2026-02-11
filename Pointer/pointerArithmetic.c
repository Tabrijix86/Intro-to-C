#include <stdio.h>

int main()
{
    int p = 110, q = 20, *x, *y;
    x = &p;
    printf("%d\n", p);
    printf("%x\n", &p);
    printf("%d\n", *(&p));
    printf("%x\n", x);
    printf("%d", *x);
}
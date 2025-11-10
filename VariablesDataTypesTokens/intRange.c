#include <stdio.h>

int main(void)
{
    int a = 327679864, b = 10, c;
    c = a + b;
    printf("%d\n", c);                    // prints the result value
    printf("sizeof(c) = %zu\n", sizeof c); // optional: print size in bytes
    return 0;
}
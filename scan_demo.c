#include <stdio.h>

int main()
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2)
    {
        fprintf(stderr, "Failed to read two integers\n");
        return 1;
    }

    /* printf requires a format string as first argument. Passing a and b
       directly is incorrect (and may crash). */
    printf("%d %d\n", a, b);
    return 0;
}
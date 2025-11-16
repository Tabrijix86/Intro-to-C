#include <stdio.h>

int main()
{
    int n, i, j;
    if (scanf("%d", &n) != 1)
    {
        fprintf(stderr, "Failed to read n\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            printf("-");
        }

        int k = 1;

        for (j = 1; j <= i; j++)
        {
            printf("%d", k++);
        }

        k = i - 1;

        for (j = 1; j <= i - 1; j++)
        {
            printf("%d", k--);
        }

        printf("\n");
    }
    return 0;
}
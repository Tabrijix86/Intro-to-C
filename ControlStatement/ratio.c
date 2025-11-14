#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, q, r, s;
    float ratio;
    scanf("%d %d %d %d", &p, &q, &r, &s);

    if ((r - s) == 0)
    {
        printf("Ratio is infinity!");
        exit(0);
    }

    ratio = (float)(p + q) / (float)(r - s);
    printf("%f", ratio);
    return 0;
}
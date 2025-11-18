#include <stdio.h>

void square_num()
{
    int i, num;
    printf("Number\tSquare\n");
    for (i = 1; i < 11; i++)
    {
        printf("%4d %4d\n", i, i * i);
    }
}

int main()
{
    square_num();
    return 0;
}
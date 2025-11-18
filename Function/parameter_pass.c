#include <stdio.h>

void sum_of_all(int n)
{
    int i, sum = 0;

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
}

int main()
{

    int num;
    scanf("%d", &num);
    sum_of_all(num);
    return 0;
}
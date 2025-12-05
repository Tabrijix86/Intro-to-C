#include <stdio.h>

int main()
{
    float marks[5], avg;
    int sum = 0, i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: ", (i + 1));
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    avg = (float)sum / 5;
    printf("Average is: %.2f", avg);
    return 0;
}
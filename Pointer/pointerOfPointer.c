#include <stdio.h>
int main()
{
    int i = 10;
    int *ptr0 = &i;
    int **ptr1 = &ptr0;
    int ***ptr2 = &ptr1;

    printf("&ptr2 = %X\t ptr2 = %X\t *ptr2 = %X\n", &ptr2, ptr2, *ptr2);
    printf("&ptr1 = %X\t ptr1 = %X\t *ptr1 = %X\n", &ptr1, ptr1, *ptr1);
    printf("&ptr0 = %X\t ptr0 = %X\t *ptr0 = %d\n", &ptr0, ptr0, *ptr0);

    return 0;
}

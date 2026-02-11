#include <stdio.h>

int main()
{
    int *ptr = NULL, x = 5;
    printf("%02Xh\n", ptr);           // Just print the pointer, not *ptr
    ptr = &x;
    printf("%02Xh\t%02Xh\n", ptr, *ptr);
    return 0;
}
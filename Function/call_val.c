#include <stdio.h>

void call_by_value(int a, int b, int c);

int main()
{
    int a = 1, b = 2, c = 3;

    call_by_value(a, b, c);
    printf("This is after function call a: %d, b: %d, c: %d\n", a, b, c);
    return 0;
}

// void call_by_value (int x, int y, int z) {
void call_by_value (int x, int b, int c) {

    printf("The function received a: %d, b: %d, c: %d\n", x, b, c);
    x += 10;
    b += 10;
    c += 10;
    printf("The function printed a: %d, b: %d, c: %d\n", x, b, c);
}
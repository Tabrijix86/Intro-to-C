#include <stdio.h>
#include <stdarg.h>

double diff_parmtr(char *ch, ...)
{
    va_list marker;
    double result = 0;
    va_start(marker, ch);

    while (*ch)
    {
        if (*ch == '%')
        {
            switch (*(++ch))
            {
            case 'd':
                result += va_arg(marker, int);
                break;

            case 'f':
                result += va_arg(marker, double);
                break;
            }
        }
        ch++;
    }
    va_end(marker);
    return (result);
}

int main()
{
    double result;

    result = diff_parmtr("%f %d %f %d", 1.0, 1, 1.0, 1);
    printf("%f", result);
    return 0;
}
#include <stdio.h>

void use_static()
{
    static int i = 0;
    printf("The value of the static variable is now: %d\n", ++i);
}

int main()
{
    use_static();
    use_static();
    use_static();
    use_static();
    use_static();

    return 0;
}
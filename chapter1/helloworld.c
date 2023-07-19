#include <stdio.h>

int main(void)
{
    int a = 5 + 2;
    a += 3;
    printf("\033[35mhello world! \033[0m%d\n", a);
    return 0;
}
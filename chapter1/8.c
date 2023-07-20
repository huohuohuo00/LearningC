#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 5;
    b = a + b;
    a = a * b;
    printf("%d %d\n", b, a);
    return 0;
}
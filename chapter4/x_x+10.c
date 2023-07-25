#include <stdio.h>

int main()
{
    int x, y;
    printf("Please enter an integer:\n");
    scanf("%d", &x);
    y = x + 10;
    printf("%d\n", x);
    while (x++ < y)
    {
        printf("%d\n", x);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int i, min, max;
    printf("Please enter a number as the minimum integer:");
    scanf("%d", &min);
    printf("Please enter a number as the maximum integer:");
    scanf("%d", &max);
    printf("number  squart  cubic\n");
    for (i = min; i <= max; i++)
    {
        printf("%5d %7d %7d\n", i, i * i, i * i * i);
    }
    return 0;
}
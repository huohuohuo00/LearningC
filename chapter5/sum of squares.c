#include <stdio.h>

int main()
{
    int min, max;
    printf("Enter lower and upper integer limits:");
    scanf("%d %d", &min, &max);
    while (min < max)
    {
        int i, sum;
        for (i = min, sum = 0; i <= max; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n", min, max, sum);
        printf("Enter next set of limits:");
        scanf("%d %d", &min, &max);
    }
    printf("Done");
    return 0;
}
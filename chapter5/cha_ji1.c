#include <stdio.h>

float func(float m, float n)
{
    float x;
    x = (m - n) / (m * n);
    return x;
}

int main()
{
    float m, n, x;
    printf("Please enter two floating point numbers(q to quit):");
    while (scanf("%f %f", &m, &n) == 2)
    {
        x = func(m, n);
        printf("The result is %f.\n", x);
        printf("please enter the next pair of floating point numbers:");
    };
    printf("Done");
    return 0;
}
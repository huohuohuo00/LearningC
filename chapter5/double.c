#include <stdio.h>

int main()
{
    double num1[8];
    double num2[8];
    printf("Please enter 8 numbers:");
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &num1[i]);
    }
    num2[0] = num1[0];
    for (int j = 1; j < 8; j++)
    {
        num2[j] = num2[j - 1] + num1[j];
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%10.2lf ", num1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%10.2lf ", num2[i]);
    }
    return 0;
}
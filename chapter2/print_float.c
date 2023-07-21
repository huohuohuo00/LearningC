#include <stdio.h>

int main()
{
    float a;
    printf("Enter a floating-point value:");
    printf(" ____\b\b\b\b");
    scanf("%f", &a);
    printf("\nfixed-point notation: %f\n", a);
    printf("exponential notation: %e\n", a);
    printf("p notation: %a\n", a);
    return 0;
}
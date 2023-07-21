#include <stdio.h>

int main()
{
    printf("Please enter your height in inches:");
    printf(" ____\b\b\b\b");
    float height_inch;
    scanf("%f", &height_inch);
    float height_cm = height_inch * 2.54;
    printf("\nYou are %f centimeters tall!", height_cm);
    return 0;
}
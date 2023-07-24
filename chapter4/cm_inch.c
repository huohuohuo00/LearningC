#include <stdio.h>
#define CM_PER_INCH 2.54
#define INCH_PER_FEET 12

int main()
{
    float cm, inch, left, cm1;
    int   feet;
    printf("Enter a height in centimeters: ");
    scanf("%f", &cm);
    inch = cm / CM_PER_INCH;
    feet = (int)inch / INCH_PER_FEET;
    left = inch - feet * INCH_PER_FEET;
    printf("\n%.1f cm = %d feet, %.1f inches\n", cm, feet, left);
    printf("Enter a height in centimeters (<=0 to quit):");
    scanf("%f", &cm);
    while (cm > 0)
    {
        inch = cm / CM_PER_INCH;
        feet = (int)inch / INCH_PER_FEET;
        left = inch - feet * INCH_PER_FEET;
        printf("\n%.1f cm = %d feet, %.1f inches\n", cm, feet, left);
        printf("Enter a height in centimeters (<=0 to quit):");
        scanf("%f", &cm);
    }
    printf("bye\n");
    return 0;
}
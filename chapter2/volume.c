#include <stdio.h>

int main()
{
    printf("Please enter the number of cups:____\b\b\b\b");
    float cup;
    scanf("%f", &cup);
    const float pint = cup / 2;
    const int   ounce = cup * 8;
    // const float tablespoon = ounce / 2;
    // Result of integer division used in a floating point context, possible loss of precision
    const float tablespoon = (float)ounce / 2;
    const float teaspoon = tablespoon / 3;
    printf("\n%f cups equals %f pints.\n", cup, pint);
    printf("%f cups equals %d ounces.\n", cup, ounce);
    printf("%f cups equals %f tablespoons.\n", cup, tablespoon);
    printf("%f cups equals %f teaspoons.", cup, teaspoon);
    return 0;
}
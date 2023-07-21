#include <stdio.h>

int main()
{
    printf("Please enter the number of cups:____\b\b\b\b");
    float cup;
    scanf("%f", &cup);
    float pint = cup / 2;
    int   ounce = cup * 8;
    float tablespoon = ounce / 2;
    float teaspoon = tablespoon / 3;
    printf("\n%f cups equals %f pints.\n", cup, pint);
    printf("%f cups equals %d ounces.\n", cup, ounce);
    printf("%f cups equals %f tablespoons.\n", cup, tablespoon);
    printf("%f cups equals %f teaspoons.", cup, teaspoon);
    return 0;
}
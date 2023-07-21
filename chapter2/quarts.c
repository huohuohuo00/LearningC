#include <stdio.h>

int main()
{
    printf("This is a game to count the number of water molecules. \n");
    printf("Now you have ___ quarts of water.\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    float quart;
    scanf("%f", &quart);
    double      gram = quart * 950;
    long double number = gram / 3e-23;
    printf("There are %le water molecules in %f quart of water.", number, quart);
    return 0;
}
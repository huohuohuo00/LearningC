#include <stdio.h>

int main()
{
    int  i, j, m, n;
    char letter1, letter2, letter;
    printf("enter a capital letter:");
    scanf("%c", &letter);
    int max;
    max = (int)letter - 64;
    for (i = 1; i <= max; i++)
    {
        for (j = 1; j <= max - i; j++)
        {
            printf(" ");
        }
        for (m = 1, letter1 = 'A'; m <= i; m++, letter1 += 1)
        {
            printf("%c", letter1);
        }
        for (n = m - 2, letter2 = letter1 - 2; n > 0; n--, letter2 -= 1)
        {
            printf("%c", letter2);
        }
        printf("\n");
    }
    return 0;
}
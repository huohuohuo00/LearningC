#include <stdio.h>

int main()
{
    int i, j;
    char letter = 'A';
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++, letter += 1)
        {
            printf("%c", letter);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int index = 0;
    int m;
    int num[8];
    printf("Please enter 8 integers:");
    for (index = 0; index < 8; index++)
    {
        scanf("%d", &m);
        num[index] = m;
    }
    int i;
    for (i = 7; i >= 0; i--)
    {
        int n = num[i];
        printf("%d ", n);
    }
    return 0;
}
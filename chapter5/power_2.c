#include <stdio.h>

int power(int n, int p)
{
    int pow = 1;
    int i;
    for (i = 1; i <= p; i++)
    {
        pow *= n;
    }
    return pow;
}

int main()
{
    int num[8];
    int i;
    for (i = 0; i < 8; i++)
    {
        num[i] = power(2, i);
    }
    int j = 7;
    do
    {
        printf("%d\n", num[j]);
        j--;
    } while (j >= 0);
    return 0;
}
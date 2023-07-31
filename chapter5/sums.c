#include <stdio.h>

double power(double n, int p)
{
    double pow = 1;
    int    i;
    for (i = 1; i <= p; i++)
    {
        pow *= n;
    }
    return pow;
}

int main()
{
    int   j, time;
    float sum1, sum2;
    printf("Please enter the number of additions(<= 0 to quit):");
    scanf("%d", &time);
    while (time > 0)
    {
        for (j = 1, sum1 = 0, sum2 = 0; j <= time; j++)
        {
            sum1 += 1.0 / j;
            float m = power(-1, j - 1);
            sum2 += m * 1.0 / j;
        }
        printf("The result of sequence 1 is %f.\n", sum1);
        printf("The result of sequence 2 is %f.\n", sum2);
        printf("please enter next number of additions(<= 0 to quit):");
        scanf("%d", &time);
    }
    printf("done");
    return 0;
}
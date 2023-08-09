#include <stdio.h>

int main()
{
    int num;
    int num_e = 0;
    int sum_e = 0;
    int num_o = 0;
    int sum_o = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num_e++;
            sum_e += num;
        }
        else
        {
            num_o++;
            sum_o += num;
        }
        scanf("%d", &num);
    }
    float avg_e = (float)sum_e / num_e;
    float avg_o = (float)sum_o / num_o;
    printf("%d even number, the average is %.2f\n", num_e, avg_e);
    printf("%d odd number, the average is %.2f", num_o, avg_o);
    return 0;
}
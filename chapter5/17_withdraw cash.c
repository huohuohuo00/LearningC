#include <stdio.h>

int main()
{
    double sum, cap;
    int    i;
    cap = 100.00;
    for (i = 1; cap > 0; i++)
    {
        sum = cap * 1.08;
        cap = sum - 10;
    }
    printf("After %d years, Chuckie will have exhausted his account.", i);
    return 0;
}
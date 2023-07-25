#include <stdio.h>
#define DAY_TO_WEEK 7

int main()
{
    int day, week, left;
    printf("Convert days to weeks and days!\n");
    printf("Enter the number of days (<=0 to quit): \n");
    scanf("%d", &day);
    while (day > 0)
    {
        week = day / DAY_TO_WEEK;
        left = day % DAY_TO_WEEK;
        printf("%d days is %d weeks, %d days\n", day, week, left);
        printf("Enter next value (<=0 to quit:\n)");
        scanf("%d", &day);
    }
    printf("Done!\n");
    return 0;
}
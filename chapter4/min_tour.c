#include <stdio.h>
#define MIN_PER_TOUR 60

int main()
{
    int min, tour, left;
    printf("Convert minutes to tours and minutes!\n");
    printf("Enter the number of minutes (<=0 to quit): \n");
    scanf("%d", &min);
    while (min > 0)
    {
        tour = min / MIN_PER_TOUR;
        left = min % MIN_PER_TOUR;
        printf("%d minutes is %d tours, %d minutes\n", min, tour, left);
        printf("Enter next value (<=0 to quit:\n)");
        scanf("%d", &min);
    }
    printf("Done!\n");
    return 0;
}
#include <stdio.h>

int main()
{
    int   age;
    float seconds;
    printf("please enter your age:");
    scanf("%d", &age);
    seconds = 3.156e7 * age;
    printf("\nWow! you've been alive for %e seconds!", seconds);
    return 0;
}
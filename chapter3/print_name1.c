#include <stdio.h>

int main()
{
    printf("Please enter your name:\n");
    char name[40];
    char surname[40];
    scanf("%s %s", name, surname);

    printf("%s,%s", name, surname);
    return 0;
}
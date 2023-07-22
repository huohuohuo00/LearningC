#include <stdio.h>
#include <string.h>

int main()
{
    printf("Please enter your name:\n");
    char name[40];
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    int a = strlen(name) + 3;
    printf("%*s\n", a, name);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    printf("please enter your name:\n");
    char name[10];
    char surname[10];
    scanf("%s", name);
    printf("please enter your surname:\n");
    scanf("%s", surname);
    int number_name = strlen(name);
    int number_surname = strlen(surname);
    printf("%s %s\n", name, surname);
    printf("%*d %*d\n", number_name, number_name, number_surname, number_surname);
    printf("%s %s\n", name, surname);
    printf("%-*d %-*d\n", number_name, number_name, number_surname, number_surname);
    return 0;
}
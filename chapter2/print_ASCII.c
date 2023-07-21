#include <stdio.h>

int main()
{
    char a;
    int  b;
    printf("Please enter an ASCII value in decimal:");
    scanf("%d", &b);
    a = b;
    printf("\nThe explanation is %c.", a);
    return 0;
}
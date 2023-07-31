#include <stdio.h>

int main()
{
    int fri, i;
    for (i = 1, fri = 5; fri < 150; i++)
    {
        fri -= 1;
        fri *= 2;
        printf("%d week later, Rabund has %d friends.\n", i, fri);
    }
    return 0;
}
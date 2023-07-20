#include <stdio.h>
#include <stdint.h>

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobady can deny!");
}

int main()
{
    for (uint32_t i = 0; i < 3; i++)
    {
        jolly();
    }
    deny();
    return 0;
}
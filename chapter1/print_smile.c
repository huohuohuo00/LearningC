#include <stdio.h>
#include <stdint.h>

void smile(void);

int main()
{
    for (uint32_t i = 3; i > 0; i--)
    {
        for (uint32_t j = 0; j < i; j++)
        {
            smile();
        }
        printf("\n");
    }
    /*
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    */
    return 0;
}

void smile(void)
{
    printf("Smile!");
}
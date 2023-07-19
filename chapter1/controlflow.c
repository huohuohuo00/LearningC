#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int a = rand(); // 0 - RAND_MAX
    if (a > (RAND_MAX / 2))
    {
        printf("hello world 1!\n");
    }
    else
    {
        printf("hello world 2!\n");
    }
    return 0;
}

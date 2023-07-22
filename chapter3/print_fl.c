#include <stdio.h>

int main()
{
    float input;
    printf("please enter a float:\n");
    scanf("%f", &input);
    printf("The input is %.1f or %.1e\n", input, input);
    printf("The input is %+.3f or %.3E\n", input, input);
    return 0;
}
#include <stdio.h>

int main()
{
    printf("please enter your height and name:\n");
    float height, height_m;
    char  name[20];
    scanf("%f %s", &height, name);
    height_m = height / 100;

    printf("%s, you are %.3f meters tall\n", name, height_m);
    return 0;
}
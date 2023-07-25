#include <stdio.h>
void cube(double t);

int main()
{
    double a;
    printf("Please enter a double number:");
    scanf("%lf", &a);
    printf("The cubed number of %lf is ", a);
    cube(a);
    return 0;
}

void cube(double t)
{
    double t_cube;
    t_cube = t * t * t;
    printf("%lf", t_cube);
}
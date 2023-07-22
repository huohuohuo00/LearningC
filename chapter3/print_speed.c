#include <stdio.h>

int main()
{
    printf("Please enter the download speed in megabits per second and the file size in megabytes:\n");
    float speed, size, time;
    scanf("%f %f", &speed, &size);
    time = size / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
    printf("downloads in %.2f seconds.", time);
    return 0;
}
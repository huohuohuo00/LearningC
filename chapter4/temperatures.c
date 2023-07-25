#include <stdio.h>

void Temperatures(double fah)
{
    double       cen, kel;
    const double fah_to_cen = 5.0 / 9.0;
    const double fah_to_cen1 = 32.0;
    const double cen_to_kel = 273.16;
    cen = fah_to_cen * (fah - fah_to_cen1);
    kel = cen_to_kel + cen;
    printf("The temperature in Celsius is %.3lf\n", cen);
    printf("Kelvin temperature is %.3lf\n", kel);
}

int main()
{
    double fah;
    int    status;
    printf("Please enter a temperature in Fahrenheit(q to quit):");
    status = scanf("%lf", &fah);
    while (status == 1)
    {
        Temperatures(fah);
        printf("Please enter next temperature in Fahrenheit(q to quit):");
        status = scanf("%lf", &fah);
    }
    printf("bye");
    return 0;
}
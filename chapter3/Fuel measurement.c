#include <stdio.h>
#define FUEL 3.785
#define INSTANCE 1.609

int main()
{
    printf("please enter the mileage traveled in miles and the amount of gasoline consumed in gallons:\n");
    float mile, gallon;
    float kilo, litre;
    scanf("%f %f", &mile, &gallon);
    kilo = 100 * mile / INSTANCE;
    litre = gallon / FUEL;
    float m_g = mile / gallon;
    float l_k = litre / kilo;
    printf("%.1f Miles per gallon, %.1f L /100 km", m_g, l_k);
    return 0;
}
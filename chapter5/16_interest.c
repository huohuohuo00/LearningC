#include <stdio.h>

double power(double n, int p)
{
    double pow = 1.00;
    int    i;
    for (i = 1; i <= p; i++)
    {
        pow *= n;
    }
    return pow;
}

int main()
{
    int    m_dap;
    double m_dei;
    int    i = 1;
    m_dap = 100;
    m_dei = 100.00;
    while (m_dap - m_dei >= 0)
    {
        i++;
        m_dap = 100 + 10 * i;
        m_dei = 100.00 * power(1.05, i);
    }
    printf("In %d years, Deirdre will invest more than Daphne.\n", i);
    printf("Deirdre will have $ %lf ", m_dei);
    printf("Daphne will have $ %d", m_dap);
    return 0;
}
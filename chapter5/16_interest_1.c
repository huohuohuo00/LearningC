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
    double m_dap;
    double m_dei;
    int    i;
    m_dap = 110.00;
    m_dei = 105.00;
    for (i = 2; m_dap - m_dei > 0; i++)
    {
        m_dap = 100.00 + 10.0 * i;
        double m = power(1.05, i);
        m_dei = 100.00 * m;
    }
    printf("In %d years, Deirdre will invest more than Daphne.\n", i);
    printf("Deirdre will have $ %lf .\n", m_dei);
    printf("Daphne will have $ %lf.\n", m_dap);
    return 0;
}
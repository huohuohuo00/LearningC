#include <stdio.h>
#define RATE 10.00
#define OVERTIME 1.50
#define BASE RATE* BREAK0
#define BREAK0 40.00
#define BREAK1 300.00
#define BREAK2 450.00
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BASE1 RATE1* BREAK1
#define BASE2 BASE1 + RATE2*(BREAK2 - BREAK1)

float cal_salary(float hours)
{
    float salary;
    if (hours < BREAK0)
        salary = RATE * hours;
    else
        salary = BASE + RATE * OVERTIME * (hours - BREAK0);
    return salary;
}

float cal_tax(float salary)
{
    float tax;
    if (salary <= BREAK1)
        tax = salary * RATE1;
    else if (salary <= BREAK2)
        tax = BASE1 + RATE2 * (salary - BREAK1);
    else
        tax = BASE2 + RATE3 * (salary - BREAK2);
    return tax;
}

int main()
{
    float salary, tax, income, hours;
    printf("Please enter the number of hours worked in a week:");
    scanf("%f", &hours);
    salary = cal_salary(hours);
    tax = cal_tax(salary);
    income = salary - tax;
    printf("salary = $ %f, tax = $ %f, net income = $ %f", salary, tax, income);
    return 0;
}
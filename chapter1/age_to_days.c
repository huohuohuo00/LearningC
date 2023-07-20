#include <stdio.h>

// 把年龄转化为天数，不考虑闰年
int main()
{
    int age = 23;
    int days = age * 365;
    printf("age: %d\ndays: %d", age, days);
    return 0;
}
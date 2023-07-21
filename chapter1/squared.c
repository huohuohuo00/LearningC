#include <stdio.h>
// 计算 toes 的 2 倍数和平方数，并打印

int main()
{
    int toes = 10;
    int toes_2 = toes * 2;
    int toes_squared = toes * toes;
    printf("toes = %d, toes * 2 = %d, toes squared = %d",
           toes, toes_2, toes_squared);
    return 0;
}
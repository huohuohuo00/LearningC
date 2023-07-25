#include <stdio.h>

int main()
{
    printf("This program computes moduli.\n");
    printf("Enter an integar to serve as the second operand:");
    int operand2, operand1, num;
    scanf("%d", &operand2);
    printf("Now enter the first operand:");
    scanf("%d", &operand1);
    num = operand1 % operand2;
    printf("%d %% %d is %d\n", operand1, operand2, num);
    printf("Enter next number for first operand (<= 0 to quit):");
    scanf("%d", &operand1);
    while (operand1 > 0)
    {
        num = operand1 % operand2;
        printf("%d %% %d is %d\n", operand1, operand2, num);
        printf("Enter next number for first operand (<= 0 to quit):");
        scanf("%d", &operand1);
    }
    printf("Done");
    return 0;
}
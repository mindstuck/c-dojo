#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    int numSum = num1 * denom2 + num2 * denom1;

    printf("Sum is %d/%d", numSum, denom1 * denom2);

    return 0;
}
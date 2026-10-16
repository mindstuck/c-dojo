#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter amount (USD): ");
    scanf("%f", &amount);

    printf("You have to pay $%.2f\n", amount * 1.05f);

    return 0;
}
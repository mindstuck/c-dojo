#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    int bills_20 = amount / 20;
    amount = amount - bills_20 * 20;
    printf("$20 bills: %d \n", bills_20);
    
    int bills_10 = amount / 10;
    amount = amount - bills_10 * 10;
    printf("$10 bills: %d \n", bills_10);

    int bills_5 = amount / 5;
    amount = amount - bills_5 * 5;
    printf("$5 bills: %d \n", bills_5);

    int bills_1 = amount / 1; // same as remaining amount
    printf("$1 bills: %d \n", bills_1);
}
#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 254.95f;

    printf("%d|%5d|%-5d|%5.3d|%g\n", i, i, i, i, i);
    printf("%f|%15f|%-15f|%5.3f|%10.3e|%-10g\n", x, x, x, x, x, x, x);

    printf("\a\nab\bc\n");

    return 0;
}
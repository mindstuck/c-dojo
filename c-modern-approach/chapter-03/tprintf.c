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

    // scanf
    int a, b;
    float c, d;
    scanf("%d%d%f%f", &a, &b, &c, &d);
    printf("Input: %d %d %f %f", a, b, c, d);

    // what will "20-17.3-7.0e4" user input produce?
    int e;
    float f, g;
    scanf("%d%d%f%f", &e, &f, &g);

    printf("%d | %f | %f", e, f, g);

    return 0;
}
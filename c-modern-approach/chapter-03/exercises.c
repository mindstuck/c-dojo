#include <stdio.h>

int main(void)
{
    // 1. What output do the following calls of printf produce?
    printf("[%6d,%4d]\n", 86, 1040);//"****86,1040" +
    printf("[%12.5e]\n", 30.253);//30.25300 - actual: 3.02530e+01
    printf("[%.4f]\n", 83.162);//83.1620 +
    printf("[%-6.2g]\n", .0000009979);//"9.97e-07******" - actual: "1e-06 "

    return 0;
}
#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
    int length, height, width;

    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);
    
    int volume = length * width * height;
    int dweight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", dweight);

    return 0;
}
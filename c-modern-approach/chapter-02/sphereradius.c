#include <stdio.h>

#define P 3.14f

int main(void) {
    int radius;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);
    
    float volume1 = (4.0f / 3.0f) * P * radius * radius * radius;

    printf("Volume of the sphere: %.2f\n", volume1);

    return 0;
}
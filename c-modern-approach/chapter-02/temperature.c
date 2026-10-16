#include <stdio.h>
#include <stdlib.h>
#define FREEZING_PT 32
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float far;
    char pretty_long_variable_name_that_is_not_used_in_this_program_but_is_declared_anyway[100];
    
    printf("Enter Fahrenheit: ");
    scanf("%f", &far);

    float _cel = (far - FREEZING_PT) * SCALE_FACTOR; 

    printf("%.1f fahrenheit is %.1f celsius\n", far, _cel);

    exit(0);
}
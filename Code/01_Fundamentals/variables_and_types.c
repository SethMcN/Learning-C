#include <stdio.h>

// Compile and run
// gcc variables_and_types.c -o variables_and_types
// ./variables_and_types

int main() {
    int temperature = 25;
    float voltage = 3.3;
    char status = 'A';

    printf("Temp: %d\n", temperature);
    printf("Voltage: %.1f\n", voltage);
    printf("Status: %c\n", status);

    return 0;
}
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

// Check type sizes 
    printf("int: %zu\n", sizeof(int));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("char: %zu\n", sizeof(char));

    return 0;
}


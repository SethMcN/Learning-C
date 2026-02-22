## Concept

A variable in C is a named location in memory with a fixed type.
The type determines:
- How much memory is allocated 
- How the bits are interpreted
- What operations are valid

C is a statically typed, meaning the type of the variable is know at [[compile_time|compile time]].

## Why It Matters

In high-integrity systems:  
- Memory size must be predictable  
- Data interpretation must be exact  
- Overflow and incorrect types can cause system failure  
  
Unlike higher-level languages, C does not protect you from misuse.

## Example
``` c
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
```

## Failure Modes
How this can go wrong

## Notes for Safety-Critical Systems
Extra discipline / rules


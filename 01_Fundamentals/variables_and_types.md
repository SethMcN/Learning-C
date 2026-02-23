## Concept

A variable in C is a named location in memory with a fixed type.
The type determines:
- How much memory is allocated 
- How the bits are interpreted
- What operations are valid

C is a statically typed, meaning the type of every variable is know at [[compile_time|compile time]]. Also types cannot change at runtime.

---
## Why It Matters

In high-integrity systems:  
- Memory size must be predictable  
- Data interpretation must be exact  
- Overflow and incorrect types can cause system failure  
  
Unlike higher-level languages, C does not protect you from misuse.

---
## Example
``` c
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
```

---
## Failure Modes

### 1. Integer Overflow
If a value exceeds the maximum size of its type,
it wraps around or causes undefined behaviour.

Example:
int x = 2147483647;
x = x + 1;   // Overflow

### 2. Signed vs Unsigned Mismatch
Mixing signed and unsigned types can produce unexpected results.

### 3. Implicit Type Conversion
C may automatically convert types in expressions.
This can lead to precision loss or incorrect comparisons.

### 4. Incorrect Format Specifiers
Using the wrong printf format specifier causes undefined behaviour.

---
## Engineering Considerations

- Prefer fixed-width types from <stdint.h> (e.g. uint32_t)
- Be explicit about [[signed_vs_unsigned|signed vs unsigned]]
- Avoid implicit type conversions
- Validate numeric ranges before assignment
- Do not assume type sizes are identical across platforms

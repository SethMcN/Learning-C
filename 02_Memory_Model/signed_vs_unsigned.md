## Concept 

A signed integer can represent both negative and positive numbers.
An unsigned integer can only represent non-negative numbers.
Both use the same number of bits but interpret them differently.

## Dangerous Behaviour

When mixing signed and unsigned:

- The signed value may be converted to unsigned
- Negative values become very large positive values
- Comparisons can behave unexpectedly

Example:

``` c
unsigned int a = 1;  
int b = -1;  
  
if (b < a) {  
    // unexpected result  
}
```

## When to use
- Signed - when values can be negative (temperature, error codes)
- Unsigned - when values cant be negative (sizes, lengths)
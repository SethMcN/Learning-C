A pointer is a variable that stores a memory address

Example:
``` c
int x = 10;
int *ptr = &x;
```

x = value
&x = address of x
ptr = holds address of x
\*ptr = value at the address

Pointer example:
``` c
int x = 5;  
int *p = &x;  
  
printf("%d\n", x); // 5  
printf("%p\n", (void*)p); // address  
printf("%d\n", *p); // 5
```

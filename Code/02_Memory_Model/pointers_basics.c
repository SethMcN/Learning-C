#include <stdio.h>

// Compile and run
// gcc pointers_basics.c -o pointers_basics
// ./pointers_basics

int main() {

    int arr[3] = {10, 20, 30};
    int *p = arr;

    if (0) {
        printf("%p\n", (void*)(p));
        printf("%p\n", (void*)(p + 1));
        printf("%p\n", (void*)(p + 2));
    }

    if (1) {
        printf("%d\n", arr[1]);
        printf("%d\n", *(arr + 1));
    }
}
#include <stdio.h>
#include <stdlib.h>

// Compile and run
// gcc stack_vs_heap.c -o stack_vs_heap
// ./stack_vs_heap

void create_number_stack();
void create_number_heap();

int main() {
    create_number_stack();
    create_number_stack();

    create_number_heap();
    create_number_heap();

    return 0;
}

void create_number_stack() {
    int x = 100;
    printf("Stack address: %p\n", (void*)&x);
}

void create_number_heap() {
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Allocation failed\n");
        return;
    }

    *ptr = 100;
    printf("Heap address: %p\n", (void*)ptr);

    // free(ptr);
}
#include <stdio.h>
#include "datastructures/stack.h"

int main() {
    _stack_t *stack = stack_init();
    stack_push(stack, (void *)5);
    stack_push(stack, (void *)7);

    if (stack_size(stack) == 2) {
        printf("Yeah Stack is working fine\n");
    } else {
        printf("Yeah Stack is not working fine\n");
    }
    stack_destroy(stack);
}

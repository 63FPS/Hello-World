#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* data types */
typedef struct stack {
    int stack_ptr; //stack pointer index
    void *container[1024]; //container array can hold the stack entries
    int MAX_SIZE; //maimal size of the stack
} _stack_t;

/* functions */

/**
 * This function will create and initialize a stack
 * @param size
 * @return pointer to new stack, NULL on error (set errno)
 */
_stack_t *stack_init();


/**
 * This function will clear and delete a stack
 * @param stack
 */
void stack_destroy(_stack_t *stack);


/**
 * This function will pop get top of stack and decrement stack_pointer
 * @param stack
 * @return data from tos, NULL on error (set errno)
 */
void *stack_pop(_stack_t *stack);


/**
 * This function will return tos without decrementing stack_pointer
 * @param stack
 * @return TOS on success, NULL on error (set errno)
 */
void *stack_top(_stack_t *stack);


/**
 * This function will push data onto top of the stack
 * @param stack
 * @param data
 * @return 0 on success, -1 on error (set errno)
 */
int stack_push(_stack_t *stack, void *data);


/**
 * This function checks if stack is empty
 * @param stack
 * @return 0 if stack is empty, 1 if not, -1 on error (set errno)
 */
int stack_is_empty(_stack_t *stack);


/**
 * This function checks if stack is full
 * @param stack
 * @return 0 if stack is full, 1 if not, -1 on error (set errno)
 */
int stack_is_full(_stack_t *stack);


/**
 * This function will return the size of a stack
 * @param stack
 * @return size of stack, -1 on error set errno on error
 */
int stack_size(_stack_t *stack);

#endif //DATASTRUCTURES_STACK_H

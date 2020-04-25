
#include "stack.h"

/* functions */

/**
 * This function will create and initialize a stack
 * @param size
 * @return pointer to new stack, NULL on error (set errno)
 */
_stack_t *stack_init() {
    _stack_t *stack;

    if (0 > (stack = (_stack_t *) malloc(sizeof(_stack_t)))) {
      perror("malloc() failed. Cannot acquire memory for the stack");
      return NULL;
    }

    //toDo set stack->stack_ptr to start index '-1'
    //toDo set stack->MAX_SIZE to 1024;
    memset(stack->container, 0, 1024);

    //toDo return the stack pointer
}


/**
 * This function will clear and delete a stack
 * @param stack
 */
void stack_destroy(_stack_t *stack) {
    free(stack);
}


/**
 * This function will pop get top of stack and decrement stack_pointer
 * @param stack
 * @return data from tos, NULL on error (set errno)
 */
void *stack_pop(_stack_t *stack) {
    
    //toDo check if stack is valid (invalid = NULL)
    // if stack is NULL then return NULL
    

    //toDo check if stack is empty, if so return NULL (no element available)

    //toDo return the current TopOfStack and decrement the stack pointer
}


/**
 * This function will return tos (Top of stack) without decrementing stack_pointer
 * @param stack
 * @return TOS on success, NULL on error (set errno)
 */
void *stack_top(_stack_t *stack) {
	//toDo return Top Of Stack if stack is valid and non-empty, else
	// return NULL
}


/**
 * This function will push data onto top of the stack
 * @param stack
 * @param data
 * @return 0 on success, -1 on error (set errno)
 */
int stack_push(_stack_t *stack, void *data) {
    //toDo check if stack is valid and non-full else return -1
    
    //toDo increment stack pointer and insert value
}


/**
 * This function checks if stack is empty
 * @param stack
 * @return 0 if stack is empty, 1 if not, -1 on error (set errno)
 */
int stack_is_empty(_stack_t *stack) {
    //toDo check if stack if valid else return -1
    
    //return 0 if empty, -1 if not empty
}


/**
 * This function checks if stack is full
 * @param stack
 * @return 0 if stack is full, 1 if not, -1 on error (set errno)
 */
int stack_is_full(_stack_t *stack) {
    //toDo check if stack is valid
    
    //return 0 if stack is full, -1 if stack is not full
}


/**
 * This function will return the size of a stack
 * @param stack
 * @return size of stack, -1 on error set errno on error
 */
int stack_size(_stack_t *stack) {
    //toDo check if stack is valid

    //return current stack size	= stack_ptr + 1
}


#include "monty.h"

typedef struct
{
	int items[STACK_SIZE];
	int top;
} stack;

void initialize(Stack *stack)
{
	stack->top = -1;
}

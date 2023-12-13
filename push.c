#include "monty.h"

void push(Stack *stack, int value)
{
	if (stack->top >= STACK_SIZE - 1)
	{
		write(STDOUT_FILENO, "Stack overflow\n", 15);
		exit(EXIT_FAILURE);
	}
	stack->items[++(stack->top)] = value;
}

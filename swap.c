#include "monty.h"

void swap(Stack *stack)
{	int temp = stack->items[stack->top];
	if (stack->top < 1)
	{
		write(STDOUT_FILENO, "L<line_number>: can't swap, stack too short/n", 42);
		exit(EXIT_FAILURE);
	}
	stack->items[stack->top] = stack->items[stack->top - 1];
	stack->items[stack->top - 1] = temp;
}

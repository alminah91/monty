#include "monty.h"

void add(Stack *stack)
{
	if (stack->top < 1)
	{
		write(STDOUT_FILENO, "L<line_number>: can't add, stack too short\n", 41);
		exit(EXIT_FAILURE);
	}
	stack->items[stack->top - 1] += stack->items[stack->top];
	stack->top--;
}

#include "monty.h"

void pint(Stack *stack)
{
	if (stack->top == -1)
	{
		write(STDOUT_FILENO, "L<line_number>: can't pint, stack empty\n", 39);
		exit(EXIT_FAILURE);
	}
	char buffer[20];
	int length = snprintf(buffer, sizeof(buffer), "%d\n", stack->items[stack->top]);
	write(STDOUT_FILENO, buffer, length);
}

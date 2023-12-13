#include "monty.h"

int pop(Stack *stack)
{
	if (stack->top == -1)
	{
		write(STDOUT_FILENO, "L<line_number>: can't pop an empty stack\n", 40);
		exit(EXIT_FAILURE);
	}
	return stack->items[(stack->top)--];
}

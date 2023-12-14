#include "monty.h"

void pint(Stack *stack)
{
	char buffer[20];
	int length;
	if (stack->top == -1)
	{
		write(STDOUT_FILENO, "L<line_number>: can't pint, stack empty\n", 39);
		exit(EXIT_FAILURE);
	}
	intToString(stack->items[stack->top], buffer, sizeof(buffer));
	length = 0;
	while (buffer[length] != '\0')
	{
		length++;
	}
	write(STDOUT_FILENO, buffer, length);
}


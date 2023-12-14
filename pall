#include "monty.h"
#include <stdio.h>

void pall(Stack *stack)
{
	int i;
	char buffer[20];
	int num = stack->items[i];
	int temp = num;
	int count = 0;
	int digit = num % 10;

	for (i = stack->top; i >= 0; i--)
	{
		while (temp != 0)
		{
			count++;
			temp /= 10;
		}
		if (num == 0)
		{
			buffer[0] = '0';
			count = 1;
		}
		else
		{
			while (num != 0)
			{
				buffer[--count] = '0' + digit;
				num /= 10;
			}
		}
		buffer[count++] = '\n';
		write(STDOUT_FILENO, buffer, count);
	}
}

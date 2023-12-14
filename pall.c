#include "monty.h"

void pall()
{
	int i;
	char buffer[20];
	int num;
	int index;
	for (i = nop; i >= 0; i--)
	{
		num = Stack[i];
		index = 0;
		do
		{
			buffer[index++] = '0' + (num % 10);
			num /= 10;
		}
		while (num != 0);
		while (index > 0)
		{
			write(STDOUT_FILENO, &buffer[--index], 1);
		}
		write(STDOUT_FILENO, "\n", 1);
	}
}

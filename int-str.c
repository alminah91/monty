#include "monty.h"

void intToString(int value, char* buffer, int buffer_size)
{
	int i = 0;
	int is_negative = 0;
	int j;
	char temp;
	if (value < 0)
	{
		is_negative = 1;
		value = -value;
	}
	do
	{
		buffer[i++] = (char)(value % 10 + '0');
		value /= 10;
	}
	while (value != 0 && i < buffer_size - 1);
	if (is_negative)
	{
		buffer[i++] = '-';
	}
	j = 0;
	if (is_negative)
	{
		j = 1;
	}
	while (j < i / 2)
	{
		temp = buffer[j];
		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;
		j++;
	}
	buffer[i] = '\0';
}


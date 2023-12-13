int main()
{
	char input[20];
	int value;
	Stack customStack;
	initialize(&customStack);

	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "push") == 0)
		{
			if (scanf("%d", &value) != 1)
			{
				write(STDOUT_FILENO, "Usage: push integer\n", 20);
				exit(EXIT_FAILURE);
			}
			push(&customStack, value);
		}
		else if (strcmp(input, "pall") == 0)
		{
			pall(&customStack);
		}
		else if (strcmp(input, "pint") == 0)
		{
			pint(&customStack);
		}
		else if (strcmp(input, "pop") == 0)
		{
			int popped = pop(&customStack);
		}
		else if (strcmp(input, "swap") == 0)
		{
			swap(&customStack);
		}
		else if (strcmp(input, "add") == 0)
		{
			add(&customStack);
		}
		else if (strcmp(input, "nop") == 0)
		{
			nop();
		}
	}
	return 0;
}

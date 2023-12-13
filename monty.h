#ifndef _MONTY_H_
#define _MONTY_H_

#define STACK_SIZE 100

typedef struct
{
	int items[STACK_SIZE];
	int top;
} Stack;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void initialize(Stack *stack);
void push(Stack *stack, int value);
int pop(Stack *stack);
void swap(Stack *stack);
void add(Stack *stack);
void nop();
void pall(Stack *stack);
void pint(Stack *stack);
int main();

#endif

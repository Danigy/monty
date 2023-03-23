#include "monty.h"

/**
 * f_pint - prints the value at the top of the stack
 * @head: pointer to the stack head
 * @counter: line number in the Monty byte code file
 *
 * Return: void
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}

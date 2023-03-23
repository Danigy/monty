#include "monty.h"

/**
 * free_all - frees a stack_t list and a buffer
 * @head: pointer to the head of the stack_t list
 * @buffer: pointer to a buffer
 *
 * Return: nothing
 */

void free_all(stack_t *head, char *buffer)
{
	stack_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	if (buffer)
		free(buffer);
}

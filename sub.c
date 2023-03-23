#include "monty.h"

/**
 * f_sub - subtracts the top element of the stack from the second top element.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sub, len;

	temp = *head;
	len = 0;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	if (len < 2)
	{
		char *message = "can't sub, stack too short";
		fprintf(stderr, "L%d: %s\n", counter, message);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}

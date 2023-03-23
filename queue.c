#include "monty.h"

/**
 * f_queue - sets the format of the data to a queue (FIFO)
 * @head: stack head
 * @counter: line number
 */
void f_queue(stack_t **head, unsigned int counter)
{
	stack_t *last;

	(void) counter;
	if (!*head || !(*head)->next)
		return;
	last = *head;
	while (last->next)
		last = last->next;
	last->next = *head;
	(*head)->prev = last;
	*head = (*head)->next;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;
}

/**
 * addqueue - adds a new node to the end of the queue
 * @head: double pointer to the head of the queue
 * @n: value to be added to the queue
 * Return: no return
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom
 * @head: Pointer to the head of the stack
 * @counter: The current line number
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *last_node, *tmp;

	if (!head || !(*head) || !(*head)->next)
		return;

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	tmp = last_node->prev;
	tmp->next = NULL;

	last_node->prev = NULL;
	last_node->next = *head;
	(*head)->prev = last_node;

	*head = last_node;
}

#include "monty.h"

/**
 * f_comms - does nothing when a line begins with #
 * @head: pointer to the top of the stack
 * @counter: current line number
 */

void f_comms(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	/* Do nothing, this is a comment */
}

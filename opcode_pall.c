#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stackhead
 * @line: no used
*/

void pall(stack_t **stack, unsigned int line)
{
	stack_t *ptr;
	(void)line;

	ptr = *stack;

	if (ptr == NULL)
		return;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}

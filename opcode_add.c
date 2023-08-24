#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: stack head
 * @line: line_number
*/

void add(stack_t **stack, unsigned int line)
{
	stack_t *ptr;
	int i;
	int len = 0;

	ptr = *stack;

	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	ptr = *stack;
	i = ptr->n + ptr->next->n;
	ptr->next->n = i;
	*stack = ptr->next;
	free(ptr);
}

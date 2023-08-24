#include "monty.h"

/**
 * pop - prints the top
 * @stack: stack head
 * @line: line_number
*/

void pop(stack_t **stack, unsigned int line)
{
	stack_t *ptr;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	ptr = *stack;
	*stack = ptr->next;
	free(ptr);
}

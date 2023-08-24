#include "monty.h"

/**
 * swap - adds the top two elements of the stack.
 * @head: stack head
 * @line: line_number
*/

void swap(stack_t **head, unsigned int line)
{
	stack_t *ptr;
	int i, len = 0;

	ptr = *head;

	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	ptr = *head;
	i = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = i;
}

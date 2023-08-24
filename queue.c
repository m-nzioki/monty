#include "monty.h"

/**
 * queue - prints the top
 * @head: stack head
 * @line: line_number
*/

void queue(stack_t **head, unsigned int line)
{
	(void)head;
	(void)line;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *ptr;

	ptr = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
	}
	if (!ptr)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ptr->next = new_node;
		new_node->prev = ptr;
	}
}

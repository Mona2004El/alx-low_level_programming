#include "lists.h"

/**
 *free_list - frees list of node
 *@head: pointer to head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	if (!head)
		node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}

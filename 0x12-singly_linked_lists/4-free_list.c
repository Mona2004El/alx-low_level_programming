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

	
	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}

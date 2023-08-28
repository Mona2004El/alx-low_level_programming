#include "lists.h"

/**
 *free_listint2 - frees list of node
 *@head: pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

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
